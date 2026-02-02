#include <stdio.h>
#include <string.h>

struct Module {
    char module_code[10];
    int credits;
    char grade[3];
    float gradePoint;
};

/* Convert letter grade to grade point */
float getGradePoint(const char *grade) {
    if (strcmp(grade, "A+") == 0 || strcmp(grade, "A") == 0) return 4.0;
    if (strcmp(grade, "A-") == 0) return 3.7;
    if (strcmp(grade, "B+") == 0) return 3.3;
    if (strcmp(grade, "B") == 0)  return 3.0;
    if (strcmp(grade, "B-") == 0) return 2.7;
    if (strcmp(grade, "C+") == 0) return 2.3;
    if (strcmp(grade, "C") == 0)  return 2.0;
    if (strcmp(grade, "D") == 0)  return 1.0;
    if (strcmp(grade, "F") == 0)  return 0.0;

    return -1.0; // invalid grade
}

void module_details(struct Module *m){

    FILE *fptr = fopen("grades.csv", "a"); // "a" for append mode
    if (fptr == NULL){
        printf("Error opening file!\n");
        return;
    }

    printf("Enter module code: ");
    scanf("%9s", m ->module_code);

    printf("Enter credits of the module: ");
    scanf("%d", &m->credits);

    printf("Enter final grade (A, A-, B+, etc.): ");
    scanf("%2s", m->grade);

    m->gradePoint = getGradePoint(m->grade);

    if (m->gradePoint < 0) {
    printf("Invalid grade entered!\n");
    fclose(fptr);
    return;
}


    //SAVE TO FILL
    fprintf(fptr, "%s,%d,%s,%.2f\n",
        m->module_code, m->credits, m->grade, m->gradePoint);

    fclose(fptr);
    printf("Module saved successfully!\n");
}

void view_summary(struct Module *m){

    FILE *fptr = fopen("grades.csv", "r"); // "r" for read mode

    if (fptr == NULL){
        printf("No data found, add modules first!");
        return;
    }

    float total_GPW = 0;
    int total_credits = 0;

    printf("\n%-10s | %-8s | %-6s | %-6s\n",
       "CODE", "CREDITS", "GRADE", "GP");

    printf("-------------------------------------------\n");

    //read file line by line
    while(fscanf(fptr, " %9[^,],%d,%2[^,],%f",
       m->module_code,
       &m->credits,
       m->grade,
       &m->gradePoint) == 4){
        printf("%-10s | %-8d | %-6s | %-6.2f\n",
       m->module_code,
       m->credits,
       m->grade,
       m->gradePoint);


        total_GPW += (m->gradePoint * m->credits);
        total_credits += m->credits;
    }

    if (total_credits > 0){
        float CGPA = total_GPW / total_credits;
        printf("------------------------------------\n");
        printf("TOTAL CREDITS: %d\n", total_credits);
        printf("OVERALL CGPA: %.2f\n", CGPA);
    }
    fclose(fptr);
}

int main(){

    struct Module m;
    int choice;

    while(1){
        printf("\n--- UNIVERSITY GRADE TRACKER ---\n");
        printf("1. Add new module\n 2. View academic summary\n 3. exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice != 1 && choice != 2 && choice != 3){
            printf("Invalid choice!\n");
            while(getchar() != '\n');
            continue;
        }

        switch(choice){
            case 1: module_details(&m);
            break;

            case 2: view_summary(&m);
            break;

            case 3: return 0;

            default : printf("Invalid choice!\n");
        }
    }

    return 0;
}


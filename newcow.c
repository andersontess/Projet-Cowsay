#include<stdio.h>


void affiche_vache () {
    printf("                   \\   ^__^\n\
                    \\  (00)\\_______\n\
                       (__)\\       )\\/\\\n\
                           ||----w |\n\
                           ||     ||\n");
    }

void eyes (char* eyes_str) {
    printf("                   \\   ^__^\n\
                    \\  (%s)\\_______\n\
                       (__)\\       )\\/\\\n\
                           ||----w |\n\
                           ||     ||\n", eyes_str);
    }

void amis (char amis_nb) {
    //printf("char: %c, number: %d\n", amis_nb, amis_nb);
    if (amis_nb == 48) {
        eyes("XX");
        printf("\n        ( She died because of loneliness ... ) \n");
    } else if (amis_nb == 49) {
        printf("                                               /^ ^\\\n\
                   \\   ^__^                   / 0 0 \\\n\
                    \\  (00)\\_______           V\\ Y /V\n\
                       (__)\\       )\\/\\        / - \\\n\
                           ||----w |           |    \\\n\
                           ||     ||           || (__V\\\n");
    } else if (amis_nb == 50) {
        printf("                                               /^ ^\\\n\
                   \\   ^__^                   / 0 0 \\\n\
                    \\  (00)\\_______           V\\ Y /V         \\    /\\\n\
                       (__)\\       )\\/\\        / - \\           )  ( ')\n\
                           ||----w |           |    \\         (  /  )\n\
                           ||     ||           || (__V\\        \\(__)|\n");
    } else if (amis_nb == 51) {
        printf("                                               /^ ^\\\n\
                   \\   ^__^                   / 0 0 \\\n\
                    \\  (00)\\_______           V\\ Y /V         \\    /\\          _____  \n\
                       (__)\\       )\\/\\        / - \\           )  ( ')      ^..^    \\9\n\
                           ||----w |           |    \\         (  /  )      (oo)_____/ \n\
                           ||     ||           || (__V\\        \\(__)|         WW  WW\n");
    } else if (amis_nb == 52) {
        printf("                                               /^ ^\\\n\
                   \\   ^__^                   / 0 0 \\\n\
                    \\  (00)\\_______           V\\ Y /V         \\    /\\          _____  \n\
                       (__)\\       )\\/\\        / - \\           )  ( ')      ^..^    \\9      _      _      _\n\
                           ||----w |           |    \\         (  /  )      (oo)_____/     >(.)__ <(.)__ =(.)__\n\
                           ||     ||           || (__V\\        \\(__)|         WW  WW       (___/  (___/  (___/\n");
    }
}



int main (int argc, char *argv[]) {
    if ((argc == 3 && argv[1][1] == 101) && (argv[2][2] == '\0')) {
        eyes(argv[2]);
    } else if ((argc == 3 && argv[1][1] == 97 )) {
        if (argv[2][0] < 48) {
            printf("Impossible de lui supprimer des amis ! \n");
        } else if ((argv[2][0] > 52 || argv[2][1] != '\0')) {
            printf("Trop d'amis, impossible de tous les afficher. \n");
        } else {
            amis(argv[2][0]);
        }
    } else {
        affiche_vache();
    }

    return 0;
}

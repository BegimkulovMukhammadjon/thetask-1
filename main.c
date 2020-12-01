#include <stdlib.h>
#include <math.h>

int main()
{
             float x1, x2, x3, y1, y2, y3, a, b, c, p;
             int q, w, e;


             printf(" Task 1 \n (0,5) Dani koordinati tryox vershin treugolnika: (x1, y1), (x2, y2), (x3, y3). Nayti ego perimetr i ploshad. \n"); // zadanie 1
             printf("Vvedite koordinati pervoy tochki \n");
             scanf("%f %f", &x1, &y1);
             printf("Vvedite koordinati vtoroy tochki \n");
             scanf("%f %f", &x2, &y2);
             printf("Vvedite koordinati tretiy tochki \n");
             scanf("%f %f", &x3, &y3);
             //vvodim koordinati vsex vershin
             a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
             b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
             c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
             //vichislyaem dlini vektorov p = (a + b + c) / 2; //poluperimetr
             printf("ploshad ravna: %f \n", sqrt(p * (p - a) * (p - b) * (p - c))); // po formule nahodim ploshad
             printf("perimetr raven: %f \n \n \n \n", a + b + c); // po formule naxodim perimetr

             //the end :)


             printf(" (0, 5) Dano troyxznachnoe chislo.V nyom zacherknuli pervuyu sleva tsifru i pripisali yeyo sprava. Vivesti poluchennoe chislo. \n"); // zadanie 2
             printf("vvedite tryohznachnoe chislo \n");
             scanf("%d", &q);
             w = q % 100; //pervie 2 tsifri
             e = (q - w) / 100; // tretiya tsifra
             printf("otvet: %d\n \n \n \n ", w * 10 + e);

             //the end :)


             printf(" (1) S nachala sutok proshlo N sekund (N¡ªtseloe). Nayti kolichestvo minut i sekund,proshedshix s nachala poslednego chasa. Vivesti v formate mm:ss ( N=11107 - 3 chasa, 5 minut, 7 sekund; vivod: 05:07) \n"); // zadanie 3
             printf("vvedite kolichestvo sekund \n");
             scanf("%d",&q);
             //vvodim kolichestvo sekund
             w = q % 3600; // kolichestvo sekund v poslednem chasu
             e = w % 60; // kolichestvo sekund
             q = (w - e) / 60; // kolichestvo minut

             w = (q-q % 10)/10; //razdelyaem desyatki i edenitsi
             q = (e-e % 10)/10; //razdelyaem desyatki i edenitsi
             printf("%d:%d \n \n \n \n ",q,e);


             //the end :)



             printf(" (2) Dni nedeli pronumerovani sleduyushim obrazom : 1 ¡ª ponedelnik, 2 ¡ª vtornik, . . ., 6 ¡ª subbota, 7 ¡ª voskresenie.Dano tseloe chislo K, lejashee v diapazone 1¨C365, i tseloe chislo N, lejashee 1¨C7.Opredelit nomer dnya nedeli dlya K - go nedeli dnya goda, esli izvestno, chto v etom godu 1 yanvarya bilo dnyom nedeli s nomerom N.\n");
             printf("Vvedite (1-7) N=");
             scanf("%d",&q);
             printf(" \nVvedite (1-365) K=");
             scanf("%d", &w);

             e = (q+w-2) % 7 + 1;

             printf(" \n %d \n \n \n \n",e);

             //the end :)






              printf(" (1) Dani tselie polojitelnie chisla A, B, C. Na pryamougolnike razmera A ¡Á B razmesheno maksimano vozmojnoe kolichestvo kvadratov so storonoy C (bez nalojeniy). Nayti kolichestvo kvadratov, razmeshonnix na pryamougolnike, a tak je nezanytoy chasti pryamougolnika.");
              printf("\n Vvedite A=");
              scanf("%d", &q);
              printf("Vvedite B=");
              scanf("%d", &w);
              printf(" Vvedite C=");
              scanf("%d", &e);

              printf("Vsego kvadratov : %d\n",((q - q % e) / e) * ((w - w % e) / e) );
              printf("Ploshad nezanyatoy chasti pryamougolnika : %d", (q % e) * w + (w % e) * q- (q % e)* (w % e) );

              return 0;

}

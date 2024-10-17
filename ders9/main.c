#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *temp = NULL;

void basaEkle(int veri) {
    struct node *eleman;
    eleman = (struct node *) malloc(sizeof(struct node));
    eleman->data = veri;
    eleman->next = start;
    start = eleman;
}

void sonaEkle(int veri) {
    struct node *eleman;
    eleman = (struct node *) malloc(sizeof(struct node));
    eleman->data = veri;
    eleman->next = NULL;

    if (start == NULL) {
        start = eleman;
    } else {
        temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = eleman;
    }
}

void arayaEkle(int n, int veri) {
    struct node *eleman;
    eleman = (struct node *) malloc(sizeof(struct node));
    eleman->data = veri;

    temp = start;

    
    if (temp == NULL) {
        printf("Liste boþ, araya eleman eklenemez.\n");
        return;
    }

   
    while (temp != NULL && temp->data != n) {
        temp = temp->next;
    }

    
    if (temp == NULL) {
        printf("Eleman listede bulunamadý.\n");
        free(eleman); 
        return;
    }

   
    eleman->next = temp->next;
    temp->next = eleman;
}
void bastanSil()
{
if(start!=NULL)
{
temp=start->next;
free(start);
start=temp;}
else 
free(start);
}
void sondanSil()
{
if(start-> next!=NULL)
{
temp=start;
while (temp->next->next!=NULL)
{ temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}
else
bastanSil();
}
void aradanSil(int veri)
{
temp=start;
if(temp->data==veri;
{
bastanSil();
 
}
else
{
	struct node*temp2;
	temp2=(struct node*) malloc(sizeof(struct node));
	
	while(temp->next->data!=veri)
	{
		temp=temp->next->next;
	}
	if(temp->next->next->data==NULL)
	{
	sondansil();
	}	
	else
	{
	temp2=temp->next->next;
	free(temo->next);
	temp->next=temp;
	}
}



}
	void terscevir()
{
struct node *temp2=NULL;
struct node *prev=NULL;
temp=strat;
while(temp!=NULL)
{ temp2=temp->next;
	temp->next=prev;
	prev=temp;
	temp=temp2;

}

start=prev;

}

void yazdir() {
system("cls");
if(start!=NULL){
    temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
printf("%d",temp->data);
}
else printf("Eleman yok!");
    printf("\n");
}

int main() {
    int sayi, adet = 0, secim, n;

    while (adet != 6) {
        printf("\nBasa eleman eklemek icin 1\n");
        printf("Sona eleman eklemek icin 2\n");
        printf("Araya eleman eklemek icin 3\n");
        printf("Baþtan eleman silmek için 4\n");
   	 printf("Sondan eleman silmek için 5\n");
  	printf("Aradan eleman silmek için 6\n");
	printf("Elmenaý ters cevirmek  için 7\n");

        printf("Seciminizi yapiniz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("\nBasa eklenecek elemanin degeri: ");
                scanf("%d", &sayi);
                basaEkle(sayi);
                yazdir();
                break;

            case 2:
                printf("\nSona eklenecek elemanin degeri: ");
                scanf("%d", &sayi);
                sonaEkle(sayi);
                yazdir();
                break;

            case 3:
                printf("Hangi sayidan once araya eklemek istersiniz: ");
                scanf("%d", &n);
                printf("\nAraya eklenecek elemanin degeri: ");
                scanf("%d", &sayi);
                arayaEkle(n, sayi);
                yazdir();
                break;
    	 case 4:
  	 bastanSil();
   	 yazdir ();
	case 5:
  	 sondanSil();
   	 yazdir ();
	break;
          case 6: printf("aradan silincek elamýnýn deðeri:")
	scanf("%d",&sayi)
         aradanSil();
          yazdir ();
          break;
  	case 7: printf("elemaný ters ceviriliyor .......:")
	scanf("%d",&sayi)
         aradanSil();
          yazdir ();
          break;


            default:
                printf("Gecersiz secim!\n");
                break;
        }
        adet++;
    }

    return 0;
}

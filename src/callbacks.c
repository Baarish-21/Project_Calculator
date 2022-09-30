#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include"string.h"
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

char x[1000];
int i=0;
extern GtkWidget *mycalculator;
GtkWidget *t1;

void
on_Backspace_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        i--;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_CE_clicked                          (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        i=0;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Clr_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        i=0;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Division_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='/';
	i++;
	x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Seven_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
	x[i]='7';
	i++;
	x[i]='\0';
	gtk_entry_set_text(t1,x);
}


void
on_Eight_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='8';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Nine_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='9';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Multiplication_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='*';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Five_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='5';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Six_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='6';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Substraction_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='-';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_One_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='1';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Two_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='2';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Three_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='3';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Addition_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='+';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);
}


void
on_Modulous_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='%';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);
}


void
on_Zero_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='0';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);

}


void
on_Decimal_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
        x[i]='.';
        i++;
        x[i]='\0';
        gtk_entry_set_text(t1,x);
}

int check(char);
void
on_Equals_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
	char opr[20],opd[20];

	char s[20];

	int i,j=-1,k=-1;

	int a,b,c;

    	for(i=0;i<strlen(x);i++)

    	{

	if(x[i]>=48 && x[i]<=57)

	{

            j++;

            opd[j]=x[i];

        }

        else

        {

            if(k==-1)

            {

                k++;

                opr[k]=x[i];

            }

            else

            {

                a=check(x[i]);

                b=check(opr[k]);

                while(k>=0 && a<=b)

                {

                    j++;

                    opd[j]=opr[k];

                    k--;

                    if(k==-1)

                    break;

                    b=check(opr[k]);

                }

                k++;

                opr[k]=x[i];

            }

        }

    }

    while(k>=0)

    {

        j++;

        opd[j]=opr[k];

        k--;

    }




    int l=-1;

    int m,n,o;

    for(i=0;i<strlen(opd);i++)

    {

        if(opd[i]>=48 && opd[i]<=57)

        {

            l++;

            s[l]=opd[i]-48;

        }

        else

        {

            o=s[l];

            l--;

            n=s[l];

            l--;

            if(opd[i]=='-')

            m=n-o;

            else

            if(opd[i]=='+')

            m=n+o;

            else

            if(opd[i]=='/')

            m=n/o;

            else

            if(opd[i]=='*')

            m=n*o;

            l++;

            s[l]=m;

        }

    }

        t1=lookup_widget(GTK_WIDGET(button),"entry1");
       	i=0;
	sprintf(x,"%d",s[l]);
        gtk_entry_set_text(t1,x);


}
int check(char m)

{

    switch(m)

    {

        case '+':

        case '-':

        return 5;

        case '/':

        case '*':

        case '%':

        return 6;

    }

}


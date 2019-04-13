#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

//LinkList Creation--------------------------------------------
struct node{
	int data;
	struct node *next;
};

//Link List function------------------------------------------------
struct node *creat_list(int );
void display_list(int );

//used data-------------------------------------------------------------
int list_numb=0;
struct node *start[1];

//used functions---------------------------------------------------
void decision();
void enter_data();
void add_list(int );
void view_data();
void delete_all();
void short_all();
void delete_list(int );
void short_list(int , char, int);
void copy_list(int , int );
void editlist_short();
void merge_all();
void delet_list_opt();
void replace_list_opt();
void option_view();
void about();

//-----------------------------------------------------------------------

void about(){
	SetConsoleTitle("ListOperation @ About");
	system("cls");
	system("COLOR 0E");
	printf("\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~           [ ABOUT ]          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
	printf("         PROJECT NAME: Merge Sorted Linked List\n");
	printf("         DATE: 23 September 2018, TIME: 04:04:40\n");
	printf("         GROUP NUMBER: 14\n");
	printf("         SEMESTER: 3rd,  YEAR: 2018\n\n");
	printf("         ----------------------------        -------   GROUP MEMBERS   -------        -------------------------\n\n");
	printf("         ------------------------------------------------------------------------------------------------------\n");
	printf("         ROLL NO.         | NAME                           | ENEOLLMENT NO.                  | REGISTRATION NO.\n");
	printf("         ------------------------------------------------------------------------------------------------------\n");
	printf("                      53. | Atanu Das                      |                  12017009001328 |  304201700900175\n");
	printf("                      54. | Nitesh Fatepuria               |                  12017009001416 |  304201700900381\n");
	printf("                      55. | Somdeep Jana                   |                  12017009001009 |  304201700900661\n");
	printf("                      56. | Soumodip Roy                   |                  12017009001422 |  304201700900677\n");
	printf("         ------------------------------------------------------------------------------------------------------\n\n");
	printf("         ---------------------------         -------   FEATURE LIST   -------         -------------------------\n\n");
	printf("         01. Inserting Multiple List at a Time.\n");
	printf("         02. Easy to Navigate Interface.\n");
	printf("         03. Option to extend the List.\n");
	printf("         04. Option to short any list.\n");
	printf("         05. Option to Merge a List.\n\n");
	printf("   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |");
	getch();
	decision();
	
}

void main(){
	SetConsoleTitle("HELLO");
	system("cls");
	system("COLOR 0E");
	HWND wh = GetConsoleWindow();
    MoveWindow(wh, 186.5, 124, 993, 518, TRUE);
	printf("\n\n\n\n");
	printf("              _____                      _____                      _____            _____           _______         \n");
	printf("             /     :                    /     :                    /     :          /     :         /::     :        \n");
	printf("            /:: ____:                  /::     :                  /:: ____:        /:: ____:       /::::     :       \n");
	printf("           /:::/    /                 /::::     :                /:::/    /       /:::/    /      /::::::     :      \n");
	printf("          /:::/    /                 /::::::     :              /:::/    /       /:::/    /      /::::::::     :     \n");
	printf("         /:::/    /                 /:::/::::     :            /:::/    /       /:::/    /      /:::/~~::::     :    \n");
	printf("        /:::/____/                 /:::/__::::     :          /:::/    /       /:::/    /      /:::/    ::::     :   \n");
	printf("       /::::.    :                /::::    ::::     :        /:::/    /       /:::/    /      /:::/    / ::::     :  \n");
	printf("      /::::::.    :   _____      /::::::    ::::     :      /:::/    /       /:::/    /      /:::/____/   :::: ____: \n");
	printf("     /:::/::::.    : /     .    /:::/::::    ::::     :    /:::/    /       /:::/    /      |:::|    |     |:::|    |\n");
	printf("    /:::/  ::::.    /:: ____.  /:::/__::::    :::: ____:  /:::/____/       /:::/____/       |:::|____|     |:::|    |\n");
	printf("     ::/    ::::.  /:::/    /  ::::    ::::    :::/    /  ::::     :       ::::     :        ::::    :    /:::/    / \n");
	printf("      /____/ ::::./:::/    /    ::::    ::::    :/____/    ::::     :       ::::     :        ::::    :  /:::/    /  \n");
	printf("              :::::::/    /      ::::    ::::     :         ::::     :       ::::     :        ::::    :/:::/    /   \n");
	printf("               :::::/    /        ::::    :::: ____:         ::::     :       ::::     :        :::: __/:::/    /    \n");
	printf("               /:::/    /          ::::    :::/    /          ::::     :       ::::     :        :::::::::/    /     \n");
	printf("              /:::/    /            ::::    :/____/            ::::     :       ::::     :        :::::::/    /      \n");
	printf("             /:::/    /              ::::     :                 ::::     :       ::::     :        :::::/    /       \n");
	printf("            /:::/    /                :::: ____:                 :::: ____:       :::: ____:        :::/____/        \n");
	printf("            '::/    /                  :::/    /                  :::/    /        :::/    /         ~~              \n");
	printf("             '/____/                    :/____/                    :/____/          :/____/                          \n");
	getch();
	decision();
}

void option_view(){
	SetConsoleTitle("ListOperation @ Home");
	system("cls");
	system("COLOR 0B");
	HWND wh = GetConsoleWindow();
    MoveWindow(wh, 186.5, 124, 993, 518, TRUE);
    fflush(stdin);
	printf("\n\n\n\n\n\n");
	printf("   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~           [ HOME ]           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n\n");
	printf("         01.  Enter Data                                                                       02.     Add List\n");
	printf("         03.  View Data                                                                        04.    Merge All\n\n");
	printf("         05.  Delete All                                                                       06.    Short All\n");
	printf("         07.  Delete a List                                                                    08. Short a List\n");
	printf("         09.  ReCreate a List                                                                  00.        About\n\n\n\n");
	printf("   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
	printf("   |     Choose a Opton: ");
}

void decision(){
	char opt_addlist;
	option_view();
	for(;;){
		switch(getch()){
			case '1':
				enter_data();
				break;
			case '2':
				add_list(1);
				decision();
				break;
			case '3':
				SetConsoleTitle("ListOperation @ View Data");
				system("cls");
				printf("\n");
				view_data();
				printf("   |     Enter any key to main menu: ");
				getch();
				decision();
				break;
			case '4':
				system("COLOR 0E");
				merge_all();
				break;
			case '5':
				delete_all();
				break;
			case '6':
				short_all();
				break;
			case '7':
				delet_list_opt();
				break;
			case '8':
				editlist_short();
				break;
			case '9':
				system("COLOR 03");
				replace_list_opt();
				break;
			case '0':
				about();
				break;
			default:
				option_view();
		}
	}	
}

//operations function-----------------------------------------------------------------

void merge_all(){
	SetConsoleTitle("ListOperation @ Merge All");
	struct node *ptr1;
	int i, temp_numb;
	temp_numb= list_numb;
	for(i=1; i<=temp_numb-1; i++){
		ptr1= start[i];
		while(ptr1->next!= NULL){
			ptr1=ptr1->next;
		}
		ptr1->next= start[i+1];
		list_numb--;
	}
	for(i=2; i<=temp_numb; i++){
		start[i]= NULL;
	}
	system("cls");
	printf("\n");
	view_data();
	printf("   |     Enter any key to main menu: ");
	getch();
	decision();
}

void enter_data(){
	SetConsoleTitle("ListOperation @ Entering Data");
	system("cls");
	system("COLOR 0A");
    fflush(stdin);
	int i, temp_list_numb;
	printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      [ ENTERING DATA ]      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
	printf("   |     Enter number of list= ");
	scanf("%d", &temp_list_numb);
	fflush(stdin);
	for(i=1; i<=temp_list_numb; i++){
		system("cls");
		add_list(0);
	}
	system("cls");
	view_data();
	printf("   |     Enter any key to main menu: ");
	getch();
	decision();
	
}

void add_list(int menu_opt){
	SetConsoleTitle("ListOperation @ Add List");
	system("cls");
	system("COLOR 0A");
	char opt;
	int temp_list_numb= list_numb + 1;
lableal0:
	printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~       [ ADDING DATA ]        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
	start[temp_list_numb]= NULL;
	start[temp_list_numb]= creat_list(temp_list_numb);
	system("cls");
	printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~       [ VIEWING DATA ]       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
	display_list(temp_list_numb);
	printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         [ OPTIONS ]          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
	printf("         01. Creat This List                                                       02. Enter The Elements Again\n");
	printf("         03. Cancle and ");
	if(menu_opt== 0){
		printf("Skip");
	}else if(menu_opt== 1){
		printf("GoBack");
	}
	printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
	printf("   |     Choose a option: ");
lableal1:
	opt= getch();
	switch(opt){
		case '1':
			list_numb++;
			break;
		case '2':
			delete_list(temp_list_numb);
			system("cls");
			goto lableal0;
			break;
		case '3':
			delete_list(temp_list_numb);
			if(menu_opt== 0){
				break;
			}else if(menu_opt== 1){
				decision();
			}
			break;
		default:
			goto lableal1;
	}	
}
void view_data(){
	int i;
	printf("\n");
	printf("   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         [ ALL DATA ]         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
	for(i=1; i<=list_numb; i++){
		display_list(i);
		printf("\n\n");
	}
	printf("\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
	
}

//editing data--------------------------------------------------------------------------------------
void delete_all(){
	SetConsoleTitle("ListOperation @ Delete All");
	system("cls");
	system("COLOR 04");
	int i, temp_listnumb= list_numb;
	printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        [ DELETE ALL ]        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
	for(i=1; i<=temp_listnumb; i++){
		delete_list(i);
		printf("\n         List[%d]: Deleted", i);
		list_numb--;
	}
	printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        [ SUCCESSFUL ]        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
	printf("   |     Press any key to Main Menu: ");
	getch();
	decision();
}

void short_all(){
	SetConsoleTitle("ListOperation @ Short All");
	system("COLOR 07");
	int i;
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        [ SHORT ALL ]         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
	printf("         01. Short Ascending Order                                                   02. Short Descending Order\n");
	printf("         03. GoBack");
	printf("\n\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
	printf("   |     Choose a Order: ");
lablesal1:
	switch(getch()){
		case '1':
			for(i=1; i<=list_numb; i++){
				short_list(i, 'a', 0);
			}
			break;
		case '2':
			for(i=1; i<=list_numb; i++){
				short_list(i, 'd', 0);
			}
			break;
		case '3':
			decision();
			break;
		default:
			goto lablesal1;
	}
	system("cls");
	printf("\n");
	view_data();
	printf("   |     Enter any key to main menu: ");
	getch();
	decision();
}

//edit list opt---------------------------------------------------------------------------
void delet_list_opt(){
	SetConsoleTitle("ListOperation @ Delete List");
	system("COLOR 04");
	int numb1, i, j, temp_lnumb= list_numb;
labledli:
	system("cls");
	printf("\n");
	view_data();
	printf("   |     Enter The list number to delete or '0' to cancle: ");
	scanf("%d", &numb1);
	fflush(stdin);
	if(numb1>0 && numb1<= temp_lnumb){
		if(start[numb1]!= NULL){
			system("cls");
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~       [ DELETE LIST %d ]      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n", numb1);
			display_list(numb1);
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~          [ OPTIONS ]         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
			printf("         01. Delete This List                                                                        02. Cancel");
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
			printf("   |     Choose a Option: ");
labledl0:
			switch(getch()){
				case '1':
					goto labledl1;
					break;
				case '2':
					delet_list_opt();
					break;
				default:
					goto labledl0;
			}
labledl1:
			delete_list(numb1);
			for(i= numb1; i<=temp_lnumb; i++){
				for(j= i+1; j<=temp_lnumb; j++){
					if(start[i]== NULL && start[j]!= NULL){
						copy_list(j, i);
						delete_list(j);
						break;
					}
				}
			}
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        [ SUCCESSFUL ]        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
			printf("         List[%d]: Deleted", numb1);
			printf("\n\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
			list_numb--;
		}
	}else if(numb1== 0){
		decision();
	}else{
		goto labledli;
	}
	printf("   |     Enter any key to main menu: ");
	getch();
	decision();
}

void replace_list_opt(){
	SetConsoleTitle("ListOperation @ ReCreate");
	int numb2;
lablerlo0:
	system("cls");
	printf("\n");
	view_data();
	printf("   |     Enter The list number to Recreat or '0' to cancle: ");
	scanf("%d", &numb2);
	fflush(stdin);
	if(numb2>0 && numb2<= list_numb){
		if(start[numb2]!=NULL){
			delete_list(numb2);
			start[numb2]= creat_list(numb2);
			system("cls");
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~       [ VIEWING DATA ]       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
			display_list(numb2);
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~        [ SUCCESSFUL ]        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
			goto lablerlo1;
		}else{
			goto lablerlo0;
		}
	}else if(numb2== 0){
		decision();
	}else{
		goto lablerlo0;
	}
lablerlo1:
	printf("   |     Enter any key to main menu: ");
	getch();
	decision();
}

void editlist_short(){
	system("COLOR 07");
	SetConsoleTitle("ListOperation @ Short List");
	int numb3;
lablees0:
	system("cls");
	view_data();
	printf("   |     Enter The list number to Recreat or '0' to cancle: ");
	scanf("%d", &numb3);
	fflush(stdin);
	if(numb3>0 && numb3<= list_numb){
		if(start[numb3]!=NULL){
			system("cls");
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     [ SHORTING LIST %d ]      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n", numb3);
			display_list(numb3);
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~          [ OPTIONS ]         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
			printf("   |     01. Short Ascending Order                                                   02. Short Descending Order");
			printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
			printf("   |     Choose Order: ");
lablees1:
			switch(getch()){
				case '1':
					short_list(numb3, 'a', 1);
					break;
				case '2':
					short_list(numb3, 'd', 1);
					break;
				default:
					goto lablees1;
			}
		}else{
			goto lablees0;
		}
	}else if(numb3== 0){
		decision();
	}else{
		goto lablees0;
	}
	decision();
}


void delete_list(int lnumb){
	struct node *ptr;
	while(start[lnumb]!= NULL){
		ptr= start[lnumb];
		start[lnumb]= start[lnumb]->next;
		free(ptr);
	}
}

void short_list(int lnumb, char short_order, int menu){
	int temphold=0, temp;
	copy_list(lnumb, list_numb+1);
	struct node *ptr1, *ptr2;
	ptr1= start[list_numb+1];
	while(ptr1->next!= NULL){
		ptr2= ptr1->next;
		while(ptr2!= NULL){
			if(short_order== 'a' && ptr1->data>ptr2->data){
				temphold= ptr1->data;
				ptr1->data= ptr2->data;
				ptr2->data= temphold;
			}
			if(short_order== 'd' && ptr1->data<ptr2->data){
				temphold= ptr1->data;
				ptr1->data= ptr2->data;
				ptr2->data= temphold;
			}
			ptr2= ptr2->next;
		}
		ptr1= ptr1->next;
	}
	if(menu== 1){
		system("cls");
		printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~       [ SHORTED LIST ]       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
		display_list(list_numb+1);
		printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         [ OPTIONS ]          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n");
		printf("   |     01. Add to a new List                                                         02. Replace The Privious");
		printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n\n");
		printf("   |     Choose a Option: ");
lablesl1:
		switch(getch()){
			case '1':
				list_numb++;
				break;
			case '2':
				delete_list(lnumb);
				start[lnumb]=start[list_numb+1];
				start[list_numb+1]= NULL;
				break;
			default:
				goto lablesl1;
		}
	}else if(menu== 0){
		delete_list(lnumb);
		start[lnumb]=start[list_numb+1];
		start[list_numb+1]= NULL;
	}
}

void copy_list(int sorce, int dest){
	start[dest]= NULL;
	struct node *new_node, *ptr1, *ptr2;
	ptr1= start[sorce];
	while(ptr1!= NULL){
		new_node= (struct node*)malloc(sizeof(struct node));
		new_node->data= ptr1->data;
		if(start[dest]== NULL){
			new_node->next= NULL;
			start[dest]= new_node;
		}else{
			ptr2= start[dest];
			while(ptr2->next!= NULL){
				ptr2= ptr2->next;
			}
			new_node->next= NULL;
			ptr2->next= new_node;
		}
		ptr1= ptr1->next;
	}
}


//link list function-------------------------------------------------------------
struct node *creat_list(int lnumb){
	int valu;
	struct node *new_node, *ptr;
	for(;;){
		system("cls");
		printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     [ VIEWING DATA %d ]       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n", lnumb);
		display_list(lnumb);
		printf("\n\n   |     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     [ CREATING LIST %d ]      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     |\n\n", lnumb);
		printf("   |     Enter data[-1 to stop]= ");
		scanf("%d", &valu);
		fflush(stdin);
		if(valu== -1){
			break;
		}else{
			new_node= (struct node*)malloc(sizeof(struct node));
			new_node->data= valu;
			if(start[lnumb]== NULL){
				new_node->next= NULL;
				start[lnumb]= new_node;
				continue;
			}else{
				ptr= start[lnumb];
				while(ptr->next!= NULL){
					ptr= ptr->next;
				}
				new_node->next= NULL;
				ptr->next= new_node;
			}
		}
	}
	return start[lnumb];
}

void display_list(int lnumb){
	int i=0;
	if(start[lnumb]== NULL){
		printf("       List[%d]: No Data", lnumb);
	}else{
		printf("       List[%d]: ", lnumb);
		struct node *ptr;
		ptr= start[lnumb];
		printf("[ %d ] --> ", start[lnumb]);
		while(ptr->next!= NULL){
			printf("[ %d\t][ %d ] --> ", ptr->data, ptr->next);
			ptr= ptr->next;
			i++;
			if(i== 3 && ptr>9999999){
				printf("\t\t\t\t\t\t\t ");
				i= 0;
				continue;
			}else if(i==3){
				printf("\t\t\t\t\t\t");
				i=0;
			}
		}
		printf("[ %d\t][ NULL ]", ptr->data);
	}
}

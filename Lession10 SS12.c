#include<stdio.h>
void addAllItem(int arr[], int size){
	for(int i = 0; i<size; i++){
		printf("phan tu thu %d la ", i+1);
		scanf("%d", &arr[i]);
	}
}
void showItem(int arr[], int size){
	for(int i = 0; i<size;i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
void addItem(int arr[], int size, int index, int value){
	for(int i = size; i>=index; i--){
				arr[i]=arr[i-1];
			}
			arr[index-1]=value;
			size++;
			for(int i = 0; i<size;i++){
				printf("%d\t", arr[i]);
			}
}
void fixItem(int arr[], int size, int index, int value){
	arr[index-1] = value;
	for(int i = 0; i < size; i++){
		printf("%d\t", arr[i]);
	}
}
void eraseItem(int arr[], int size, int index){
	if(index<0 || index>size+1){
			printf("Khong co vi tri nay trong mang");
		}else{
			for(int i = index - 1; i<size; i++ ){
				arr[i]=arr[i+1];
			}
			size--;
		}
		for(int i = 0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}
void reduce(int arr[], int size){
	int temp;
	for(int i = 0; i<size-1; i++){
		for(int j = 0; j<size-i-1; j++){
			if(arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}
void increase(int arr[], int size){
	int temp;
	for(int i = 0; i<size-1; i++){
		for(int j = 0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}




int main(){
	int choice;
	int arr[100];
	int size;
	int index, value;
	float choice6, choice7;
	int temp;
	
	do{
		printf("                  MENU\n\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra cac gia tri phan tu dang quan ly\n");
		printf("3.Them 1 phan tu vao vi tri chi dinh\n");
		printf("4.Sua 1 phan tu o vi tri chi dinh\n");
		printf("5.Xoa 1 phan tu o vi tri chi dinh\n");
		printf("6.Sap xep cac phan tu\n");
		printf("7.Tim kiem phan tu nhap vao\n");
		printf("8.Thoat\n");
		printf("Nhap chuc nang can thuc hien ");
		scanf("%d", &choice);
		if(choice==6){
			printf("6.1.Giam dan\n");
			printf("6.2.Tang dan\n");
		}
		if(choice==7){
			printf("a.Tim kiem tuyen tinh\n");
			printf("b.Tim kiem nhi phan\n");
		}
		switch(choice){
			case 1 :
				printf("Nhap so luong phan tu ");
				scanf("%d", &size);
				addAllItem(arr,size);
				printf("\n");
				break;
			case 2 :
				showItem(arr,size);	
				printf("\n");			
				break;
			case 3 :
			printf("Nhap vi tri can them ");
			scanf("%d", &index);
			printf("Nhap gia tri can them ");
			scanf("%d", &value);
			addItem(arr,size,index,value);
			printf("\n");
				break;
			case 4 :
				printf("Nhap vi tri can sua ");
				scanf("%d", &index);
				printf("Nhap gia tri sua thanh ");
				scanf("%d", &value);
				fixItem(arr,size,index,value);
				printf("\n");
				break;
			case 5 :
				printf("Nhap vi tri can xoa ");
				scanf("%d", &index);
			    eraseItem(arr,size,index);
			    printf("\n");
				break;
			case 6 :
				printf("Nhap lua chon ");
				scanf("%f", &choice6);
				switch(choice6){
					case 6 :
						reduce(arr,size);
					case 67 :
						increase(arr,size);
				}
				
				
				break;
			case 7 :
				
				break;z
				
			default :
			printf("Khong hop le");
				break;
			     	
		}
	}while(choice!=8);
	return 0;
}
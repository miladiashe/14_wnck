typedef struct mynode{
	int data;
	
	void* next;
} in_t;
//링크드리스트의 노드는 구조체로 

static in_t *list;
//시작점 가리킴 

int create_node (int value)
{
	in_t *ptr;
	in_t *ptrtrav;
	int cnt = 0;
	
	ptr = (in_t*)malloc(sizeof(in_t));
	//메모리를 잡음 
	if (ptr == NULL)
	{
		//오류메시지도 출력 
		return -1;
	}
	//세팅 
	
	ptr->data = value;
	ptr->next = NULL;
	//데이터 넣기 
	
	if(list = NULL)
	{
		list = ptr;
	}
	else
	{
		ptrtrav = list;
		cnt++;
		while(ptrtrav->next != NULL)
		{
			ptrtrav = ptrtrav->next;
			cnt++;
		}
		ptrtrav->next = ptr;
	}
	//포인터로 선그어서 잇기 
	
	return cnt;
}

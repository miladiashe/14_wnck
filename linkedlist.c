typedef struct mynode{
	int data;
	
	void* next;
} in_t;
//��ũ�帮��Ʈ�� ���� ����ü�� 

static in_t *list;
//������ ����Ŵ 

int create_node (int value)
{
	in_t *ptr;
	in_t *ptrtrav;
	int cnt = 0;
	
	ptr = (in_t*)malloc(sizeof(in_t));
	//�޸𸮸� ���� 
	if (ptr == NULL)
	{
		//�����޽����� ��� 
		return -1;
	}
	//���� 
	
	ptr->data = value;
	ptr->next = NULL;
	//������ �ֱ� 
	
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
	//�����ͷ� ���׾ �ձ� 
	
	return cnt;
}

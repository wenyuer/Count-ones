//ʹ��λ���������Ʋ���00000001���С��롱������
int Countones1(BYTE v)
{
	int count = 0;
	while(v!=0)
	{
		if(v & 0x01 == 1)
			count++;
		v=v>>1;
	}
	return count;
}

//����һ��2��ԭ�����ֽ�����һ��0������Ϊ1����ǰλΪ1
int Countones2(BYTE v)
{
	int count = 0;
	while(v!=0)
	{
		if(v % 2 == 1)
			count++;
		v = v/2;
	}
	return count;
}

//�͸���-1��������
int Countones3(BYTE v)
{
	int count = 0;
	while(v!=0)
	{
		count++;
		v = v & (v-1);
	}
	return count;
}

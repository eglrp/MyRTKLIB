#include "rtklib.h"
//using namespace std;

int main(int argc, char *argv[])
{
	//���Բο�rnx2rtkp�����main����
	//��ȡ�ļ�
	const char *file = "D:\\VSProject\\MyRTKLib\\data\\rinex\\*.*";
	gtime_t ts = {0,0};
	gtime_t te = {0,0};
	obs_t obs ;
	//obs_t obs = { 0,(obsd_t*)malloc(sizeof(obsd_t)) };
	nav_t nav;
	sta_t sta;
	readrnxt(file,1,ts,te,30,"",&obs,&nav,&sta);
	//����������Ƶ�Ʋ���ֵ��α�������е��㶨λ���������ջ���λ�á��ٶȺ��Ӳ�
	//extern int pntpos(const obsd_t *obs, int n, const nav_t *nav,
	//	const prcopt_t *opt, sol_t *sol, double *azel, ssat_t *ssat,
	//	char *msg);
	//prcopt_t prcopt = prcopt_default;
	//sol_t solopt ;
	//double azel;
	//ssat_t ssat;
	//char *msg = " ";
	//pntpos(obs.data, obs.n, &nav, &prcopt, &solopt, &azel, &ssat, msg);
	return 0;
}
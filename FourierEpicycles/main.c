#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <complex.h>

int main() {
	//INPUT: Magnitude of the speed of the fastest rotating epicycle
	int HIGHEST_N = /*example*/ 100;
	//INPUT: x,y coordinates of equally spaced dots of the image
	_Dcomplex cpoints[] = /*example*/{ {420.70001220703125,247.60000610351562},{425.4869689941406,233.46783447265625},{430.5105285644531,219.41795349121094},{435.7657165527344,205.4530792236328},{441.2900085449219,191.5925750732422},{447.1573181152344,177.8739776611328},{453.5028991699219,164.3706817626953},{460.6095886230469,151.25479125976562},{469.2889404296875,139.14947509765625},{481.7471923828125,131.1369857788086},{495.2962951660156,124.90216064453125},{509.4657287597656,120.2515640258789},{524.0133666992188,116.94983673095703},{538.735107421875,114.5272445678711},{553.5399169921875,112.67294311523438},{568.388427734375,111.20581817626953},{583.2619018554688,110.01618957519531},{598.1505737304688,109.03428649902344},{613.049072265625,108.2131576538086},{627.9541015625,107.5205078125},{642.8639526367188,106.94152069091797},{657.7830810546875,106.70990753173828},{672.703857421875,106.6078872680664},{687.6248779296875,106.55158996582031},{702.5460205078125,106.52579498291016},{717.4671630859375,106.51325225830078},{732.3883056640625,106.51603698730469},{747.3094482421875,106.53057098388672},{762.2305908203125,106.55145263671875},{777.1516723632812,106.58050537109375},{792.07275390625,106.61913299560547},{806.9938354492188,106.66081237792969},{821.9149169921875,106.7024917602539},{836.8359375,106.75419616699219},{851.7570190429688,106.80809783935547},{866.6781005859375,106.86518859863281},{881.5990600585938,106.92941284179688},{896.5200805664062,106.99363708496094},{898.18408203125,120.43991088867188},{898.3884887695312,135.35965728759766},{898.5928955078125,150.27940368652344},{898.7972412109375,165.1991424560547},{898.881103515625,179.99896240234375},{883.9605712890625,179.8680877685547},{869.0399780273438,179.73719787597656},{854.119384765625,179.6063232421875},{839.1988525390625,179.47543334960938},{824.2782592773438,179.34454345703125},{809.3577270507812,179.2136688232422},{794.4371337890625,179.08277893066406},{784.3944091796875,184.4501190185547},{782.8154907226562,199.28746032714844},{781.310302734375,214.13246154785156},{779.87353515625,228.98423767089844},{778.5018310546875,243.8421630859375},{777.1961059570312,258.70603942871094},{775.964111328125,273.5762481689453},{774.807861328125,288.4525146484375},{773.7348022460938,303.3349609375},{772.755615234375,318.223876953125},{771.880859375,333.11932373046875},{771.12548828125,348.021240234375},{770.5081787109375,362.9295959472656},{770.0589599609375,377.84375},{769.8162841796875,392.7627868652344},{769.863525390625,407.68328857421875},{770.7255859375,422.57635498046875},{772.7777709960938,437.3504943847656},{776.3734130859375,451.822265625},{782.028564453125,465.610107421875},{790.418212890625,477.90185546875},{802.0126342773438,487.1781311035156},{816.1240844726562,491.7671203613281},{830.9915771484375,491.53289794921875},{845.3943481445312,487.73077392578125},{858.89697265625,481.4565734863281},{868.65234375,470.2337951660156},{875.6754760742188,457.0938415527344},{880.3692626953125,442.94598388671875},{886.4612426757812,432.1520080566406},{898.8819580078125,434.3784484863281},{897.3887329101562,449.2214050292969},{894.93310546875,463.9366760253906},{891.5516357421875,478.4667053222656},{887.174072265625,492.7277526855469},{881.679931640625,506.59564208984375},{874.9180297851562,519.889404296875},{866.7222900390625,532.3471069335938},{856.950927734375,543.6064453125},{845.5640258789062,553.2227172851562},{832.7024536132812,560.7485961914062},{818.7178955078125,565.8972778320312},{804.0640258789062,568.6160888671875},{789.161865234375,568.928955078125},{774.3903198242188,566.927978515625},{760.0847778320312,562.7349243164062},{746.5556640625,556.474609375},{734.1115112304688,548.267578125},{723.0780029296875,538.2457275390625},{713.7998657226562,526.5817260742188},{706.6170043945312,513.5245056152344},{701.804443359375,499.4208984375},{699.4990844726562,484.69744873046875},{699.0287475585938,469.7860107421875},{699.2632446289062,454.8675231933594},{699.8943481445312,439.9599304199219},{700.7429809570312,425.0630187988281},{701.720458984375,410.17401123046875},{702.7813720703125,395.2906188964844},{703.8937377929688,380.4109802246094},{705.04833984375,365.5346984863281},{706.229736328125,350.6603088378906},{707.4320678710938,335.7877197265625},{708.651123046875,320.91650390625},{709.8886108398438,306.0467529296875},{711.12646484375,291.1769714355469},{712.3815307617188,276.3087158203125},{713.6365966796875,261.44044494628906},{714.90478515625,246.57333374023438},{716.1766357421875,231.70648193359375},{717.4484252929688,216.8396453857422},{718.7202758789062,201.97280883789062},{719.9921264648438,187.10597229003906},{712.8109130859375,179.99205017089844},{697.8897705078125,179.97686767578125},{682.9686279296875,179.96170043945312},{668.047607421875,179.94691467285156},{653.12646484375,179.93348693847656},{638.205322265625,179.9200439453125},{623.2841796875,179.9066162109375},{615.0599975585938,187.38995361328125},{613.63525390625,202.24270629882812},{612.3912963867188,217.11180114746094},{611.2420654296875,231.98867797851562},{610.13720703125,246.86878967285156},{609.043212890625,261.7497863769531},{607.9400634765625,276.6301574707031},{606.8097534179688,291.50836181640625},{605.6346435546875,306.38336181640625},{604.39990234375,321.25323486328125},{603.0938110351562,336.1171569824219},{601.7005615234375,350.9728698730469},{600.2056884765625,365.8191223144531},{598.5929565429688,380.6528015136719},{596.8436279296875,395.4708557128906},{594.9362182617188,410.2693786621094},{592.843994140625,425.0429992675781},{590.5363159179688,439.78460693359375},{587.9734497070312,454.4835205078125},{585.1033325195312,469.1258850097656},{581.8585205078125,483.6889953613281},{578.1439819335938,498.1397399902344},{573.82177734375,512.4194641113281},{568.6817016601562,526.4242248535156},{562.37353515625,539.9387817382812},{554.2841796875,552.453125},{542.8529052734375,561.802001953125},{528.6449584960938,566.2047119140625},{513.7862243652344,567.256591796875},{499.00958251953125,565.3735961914062},{485.00006103515625,560.3438110351562},{472.89862060546875,551.7178955078125},{464.3885803222656,539.56103515625},{460.55621337890625,525.2083435058594},{460.8521728515625,510.32476806640625},{464.4851379394531,495.9146423339844},{472.0555725097656,483.0708312988281},{480.4548034667969,470.738525390625},{488.89825439453125,458.4361267089844},{497.1507568359375,446.00506591796875},{505.1048583984375,433.3815002441406},{512.6963195800781,420.536376953125},{519.883056640625,407.46075439453125},{526.6365051269531,394.1562194824219},{532.93408203125,380.6299743652344},{538.760009765625,366.8941955566406},{544.1028442382812,352.9632873535156},{548.955078125,338.8539123535156},{553.3118286132812,324.583740234375},{557.1741943359375,310.17193603515625},{560.541259765625,295.6365051269531},{563.4197998046875,280.9964294433594},{565.8145141601562,266.26930236816406},{567.736328125,251.4730987548828},{569.192626953125,236.62379455566406},{570.19775390625,221.7371826171875},{570.7622680664062,206.82730102539062},{570.9000854492188,191.90737915039062},{568.19921875,179.27444458007812},{553.3494873046875,177.8468780517578},{538.4349365234375,177.67266845703125},{523.5802612304688,179.00144958496094},{508.980224609375,182.03346252441406},{494.90667724609375,186.9541015625},{481.7057800292969,193.878173828125},{469.7461853027344,202.7744140625},{459.3280944824219,213.43528747558594},{450.60186767578125,225.52342224121094},{443.55474853515625,238.66452026367188},{435.57904052734375,248.6120147705078} };

	float num_points = sizeof(cpoints) / sizeof(_Dcomplex) * 1.0;
	double dt = 1 / num_points;

	//Loops for the number of epicycles
	for (int i = -1 * HIGHEST_N, n = HIGHEST_N; i <= n; i++)
	{
		double rresult = 0;
		double iresult = 0;
		//Loops for the number of points, sums up fourier series for each n numerically
		for (int j = 0, m = num_points; j < m; j++)
		{
			//The Maths
			_Dcomplex exponent = { 0, -2 * M_PI * i * j * dt };
			_Dcomplex add = _Cmulcr(_Cmulcc(cpoints[j], cexp(exponent)), dt);

			rresult += creal(add);
			iresult += cimag(add);
		}
		printf("%f, %f\n", rresult, iresult);
	}
}
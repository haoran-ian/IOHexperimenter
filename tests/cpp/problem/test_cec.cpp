#include "../utils.hpp"

#include "ioh/problem/cec.hpp"

using namespace ioh::problem::cec;

CecUtils cec_utils;

TEST_F(BaseTest, loadOShiftData)
{
    std::vector<double> Os;
    std::vector<double> ans;
    std::string dataPath =
        "/scratch/hyin/IOHexperimenter/include/ioh/problem/cec/cec_data";

    Os = {};
    ans = {-5.5938326705218444e+01, 4.5430653935964642e+00};
    cec_utils.loadOShiftData(Os, dataPath, 2, 1, 2022);
    for (size_t i = 0; i < 2; i++)
    {
        EXPECT_GT(1e-6, abs(Os[i] - ans[i]));
    }

    Os = {};
    ans = {-5.5938326705218444e+01, 4.5430653935964642e+00,
           3.5300070175575115e+01,  8.2794408911277770e+00,
           -4.7436942815518449e+01, 7.3020995814828638e+00,
           6.3876659825386781e+00,  -2.4978314724275066e+00,
           -6.1053557089089210e+01, -4.7133996322347784e+01};
    cec_utils.loadOShiftData(Os, dataPath, 10, 1, 2022);
    for (size_t i = 0; i < 10; i++)
    {
        EXPECT_GT(1e-6, abs(Os[i] - ans[i]));
    }

    Os = {};
    ans = {-5.5938326705218444e+01, 4.5430653935964642e+00,
           3.5300070175575115e+01,  8.2794408911277770e+00,
           -4.7436942815518449e+01, 7.3020995814828638e+00,
           6.3876659825386781e+00,  -2.4978314724275066e+00,
           -6.1053557089089210e+01, -4.7133996322347784e+01,
           -2.1076189699152572e+01, 1.2479726342707750e+01,
           -1.3239358110930482e+01, 4.6108229591561596e+01,
           6.1014745375614041e+01,  3.4825527944986476e+01,
           3.2648171387914644e+01,  7.7816516681488849e+01,
           2.2195865783000301e+01,  -7.4083785113917571e+01};
    cec_utils.loadOShiftData(Os, dataPath, 20, 1, 2022);
    for (size_t i = 0; i < 20; i++)
    {
        EXPECT_GT(1e-6, abs(Os[i] - ans[i]));
    }
}

TEST_F(BaseTest, loadMatrixData)
{
    std::vector<double> Mr;
    std::vector<double> ans;
    std::string dataPath =
        "/scratch/hyin/IOHexperimenter/include/ioh/problem/cec/cec_data";

    Mr = {};
    ans = {8.2399197529768320e-01, 5.6660146897534813e-01,
           5.6660146897534802e-01, -8.2399197529768320e-01};
    cec_utils.loadMatrixData(Mr, dataPath, 2, 2, 2022);
    for (size_t i = 0; i < 2; i++)
    {
        EXPECT_GT(1e-6, abs(Mr[i] - ans[i]));
    }

    Mr = {};
    ans = {-5.6626387646847098e-01, -9.1807187656392134e-02,
           1.2049212903297345e-01,  1.3209697203667575e-01,
           6.1026890576735837e-01,  3.4828537094068895e-01,
           -2.0486474384813666e-01, -2.4130030659035595e-03,
           2.6412497117616224e-01,  1.8297670919824099e-01,
           1.5980050769482634e-01,  6.2492034573867383e-01,
           -1.6089589661055428e-01, -6.0964583546786787e-03,
           1.6604697189545042e-01,  -2.9621641470723925e-01,
           -5.6316141296397026e-01, -2.3180278522246420e-01,
           1.9108300976336597e-02,  2.6730040441312164e-01,
           1.9129166626723768e-01,  3.2907413980597450e-01,
           5.6609278579668887e-01,  -5.7275956759872937e-01,
           2.0587426083636021e-01,  3.1472061005045332e-01,
           9.6241091237212043e-02,  6.2251172363987334e-02,
           -2.1931618854547738e-01, -6.2711435910362975e-02,
           5.6314160356536754e-02,  -4.7880881515040226e-02,
           3.5162511638489208e-01,  4.9464307213778669e-01,
           1.1694282205783954e-01,  -1.7433355187365268e-01,
           -2.6870783843845097e-01, 5.0038955439718102e-01,
           -5.0584934012809069e-01, -6.0656168740286107e-02,
           -5.4350849697850523e-01, 2.0643556414306782e-01,
           3.4618022740536569e-01,  -5.7859323212270004e-02,
           -6.7893531472488211e-01, -1.3419953091800723e-02,
           -1.9196739964254955e-01, 9.2802225083191831e-02,
           1.3071360318838984e-01,  1.2292836187845511e-01,
           4.5718285570937167e-01,  -1.7490060760413598e-01,
           1.9081329698250107e-01,  3.1842244826665889e-01,
           -2.5401991430313375e-01, 5.8478860361687013e-01,
           -3.2391638338121337e-01, -2.6963749929983966e-01,
           1.4007280915386278e-01,  1.3726113776751064e-01,
           7.2694666232781591e-02,  -1.2611269416150056e-01,
           -2.1824548378495498e-01, -3.1143646004309872e-01,
           -2.4488608043319322e-02, 9.3224659443237351e-02,
           -5.2931860020721233e-01, 4.0682306801668866e-01,
           2.7563424391966868e-01,  -5.5067173467204455e-01,
           -1.8099686839800791e-01, -2.6001638072062799e-01,
           2.6053256195701302e-01,  -3.8369957996714214e-02,
           5.1262243209036398e-02,  -2.4430633293757312e-01,
           -2.3024540166486607e-01, -6.6165834736961082e-01,
           -2.3141756172946751e-01, -4.7287412962623204e-01,
           -1.1663299489276345e-01, -3.8792093895216023e-01,
           -2.9403296690006109e-01, -4.0258464128902521e-01,
           -8.6766833882160666e-02, 1.2647118707489552e-01,
           -2.7713132996534584e-01, 5.7804489712835697e-03,
           -5.3829187115565680e-01, 4.4414810568768232e-01,
           2.4079025623718925e-01,  -4.2809132675185801e-01,
           3.9658383209986398e-01,  -2.1096933312476007e-01,
           8.7779037727072851e-02,  -4.8475013943709416e-01,
           -8.7448293784847031e-02, 8.5731596596843374e-02,
           4.1218542695717081e-01,  3.5970721284619867e-01};
    cec_utils.loadMatrixData(Mr, dataPath, 10, 2, 2022);
    for (size_t i = 0; i < 100; i++)
    {
        EXPECT_GT(1e-6, abs(Mr[i] - ans[i]));
    }

    Mr = {};
    ans = {4.1310385881985623e-01,  4.8041620328134069e-02,
           2.3960655457561728e-01,  -3.0674134121448132e-01,
           -9.0854201540039939e-02, 2.5521470255099460e-01,
           -1.8111094302515351e-01, 2.2302264609639158e-01,
           6.2970964458586479e-02,  -7.3745906617075321e-02,
           1.5230071451681179e-01,  -3.3759675804622807e-01,
           -4.6239282116392838e-01, -6.1036349899780046e-02,
           -1.7475379432108953e-01, -2.4499906601020099e-03,
           -1.5176825601396535e-01, -3.4472842335808933e-02,
           -1.5592701255147168e-01, -2.7644675230894228e-01,
           -2.4962936885147571e-02, 6.2518856961994196e-01,
           2.0974087199561731e-01,  3.6314152119400134e-01,
           -1.5178701471415970e-01, 2.2485872781710417e-01,
           -1.2440152113599186e-01, -3.0169135278589145e-02,
           1.2126779384568782e-01,  1.4488681975681214e-01,
           1.1037449106354243e-02,  -2.0904653628577338e-01,
           7.0485323207403972e-02,  2.6216292084306975e-01,
           -1.8242588180886762e-01, 2.4346029091652999e-01,
           3.2416470196826919e-02,  -6.0010862378627752e-02,
           1.9711495262935322e-01,  2.3106269445748268e-01,
           2.6484161720022208e-02,  3.6986795528005173e-01,
           -4.9396832526374534e-01, 1.9143555842479337e-01,
           -9.2122317721516661e-02, -1.1470190101058814e-01,
           -6.5961418823923526e-03, 4.3947569685553134e-02,
           -5.0180656508284371e-01, -1.3709900648520149e-01,
           6.2440817042462488e-02,  -2.2923661607271502e-02,
           -9.9951365423152846e-02, -3.2864070007884122e-01,
           -2.7777278979979081e-01, -7.3423115066517899e-02,
           1.0632339949110597e-01,  2.3694617587394551e-02,
           4.9857794066281005e-02,  -2.6134303536221065e-01,
           6.4619309010126469e-02,  -1.3689551418217702e-01,
           -2.2536827019417498e-02, 5.4366236056653683e-01,
           2.3659361022925587e-01,  3.4572797730940588e-02,
           3.0609082373519425e-01,  5.9963400790267429e-01,
           2.9162134567127856e-01,  -5.7777682962120207e-02,
           9.1602925866328649e-02,  6.4982997566867443e-02,
           -1.2435240674263882e-01, -1.0218229108978924e-01,
           2.0629709979827288e-02,  1.2201871155768265e-01,
           7.3572560146188737e-02,  1.1017442341758478e-01,
           1.0782966870656217e-02,  -1.0344706686640033e-01,
           2.9572817048795635e-01,  1.4691512084471783e-01,
           6.4540156411343086e-02,  -1.0043205239444297e-01,
           4.4786247686825670e-01,  -6.6369961648500897e-02,
           -1.1073609812948963e-01, 1.4420089681693967e-03,
           6.1597004635493606e-02,  -2.9999263719249974e-01,
           5.6135938200802683e-02,  4.3933694249397304e-02,
           3.5283843210821519e-01,  3.4274249501533827e-01,
           -1.9151624394515102e-01, -3.1792379455765585e-01,
           1.3516226912823728e-01,  3.0134313559601078e-01,
           1.8962736967560789e-01,  -1.8929024459086166e-01,
           3.1678525281067282e-01,  -1.5007167425018558e-01,
           -3.0287727123107283e-01, 1.1852960033622817e-02,
           -4.2817482793865735e-01, 4.5705488682852324e-01,
           1.5117440236487822e-01,  3.1803360308195104e-02,
           4.7921344598094190e-02,  1.0948994445507391e-01,
           1.2837767608997380e-01,  -1.3790686624967996e-01,
           2.8528667373133942e-01,  5.6881897574043258e-02,
           1.8967795003150686e-01,  -2.5989303635248828e-01,
           3.4583516071821685e-01,  6.9405303218943434e-02,
           -1.0463651267488796e-02, 8.1817643888126027e-02,
           2.0129593311180355e-01,  -1.4284741924928521e-01,
           1.3549387132602392e-02,  1.6251730485555144e-01,
           -2.2174514699095255e-01, -2.5148353822229813e-01,
           -5.9305743690271351e-01, -8.9965586757750932e-02,
           8.9542083544831522e-02,  -1.3980015036472357e-02,
           3.1191877210883473e-01,  2.2212199456578322e-01,
           2.1323862070293038e-02,  -8.5794349494551184e-02,
           1.5186732069027600e-01,  3.6381890790139054e-01,
           1.9647028304709105e-01,  2.8082204719675430e-01,
           -2.7087268615001311e-03, -6.8530103734372377e-02,
           -1.0500994902558865e-01, -1.6775801288242254e-01,
           -1.7765872496768387e-01, -1.7104419186055159e-01,
           -2.6382731984213242e-02, 5.7601624378002245e-02,
           -3.6381239152924449e-01, 5.2464917612075623e-01,
           -1.0222195301879387e-01, -7.9768787188618337e-02,
           -1.4887055777782693e-01, 1.0398642556527479e-01,
           2.5067742904277612e-01,  1.7945153328099692e-01,
           -3.5903510294756408e-01, 1.4176972733465901e-01,
           8.3548890358949718e-02,  -3.1875067021447384e-01,
           -1.8519143925108811e-01, 2.2730605345533053e-01,
           -3.9274032959195970e-01, 2.1276778074983299e-01,
           -2.9111188618612888e-01, -5.4467981643072261e-02,
           7.4218647032463128e-02,  -5.6459932804978713e-02,
           -1.4764976052962675e-01, -6.1207473131512875e-02,
           4.0948236891959866e-01,  -9.0324818266176013e-02,
           4.3093483766554294e-02,  -1.6109964315646758e-01,
           -2.7126785529290276e-01, 1.2019025073500464e-01,
           4.2630282299631249e-02,  -2.1424350178688509e-01,
           2.8277608375835278e-01,  1.8000497563030785e-01,
           -4.7266562922714445e-01, 5.7948963488695944e-02,
           1.8922878276982677e-01,  1.7231145075407198e-01,
           -8.0698315578854068e-02, -2.7894792528309922e-02,
           2.2880724636176231e-01,  -2.2958948397484052e-01,
           1.6710235571174303e-02,  1.7332324688095122e-01,
           -1.8572338432457267e-01, 5.1548757712779625e-01,
           3.4745063315779012e-01,  -1.2885292263933379e-01,
           2.1249069146748586e-01,  1.8525777231104611e-02,
           1.4144623696610201e-01,  -6.8914954055439459e-02,
           -3.1005601822432510e-01, 1.0370963519099634e-01,
           -3.6938423421208955e-01, 2.0172765975222576e-01,
           1.4826634460032921e-02,  2.7301852223901482e-02,
           -3.4018171870000957e-01, -1.1671035670979177e-01,
           -4.4764200096784362e-02, -7.5497108992695877e-02,
           2.0396854359800354e-01,  -1.0439054155589118e-01,
           2.1120800430204204e-01,  -4.8568183649599794e-01,
           4.0228068360524882e-01,  -1.8423991423607886e-01,
           1.6491665053756652e-01,  1.2028805540610475e-01,
           8.6483732405954736e-02,  3.3717584107355703e-01,
           -3.4127659424296869e-01, -2.2228873494387910e-01,
           5.6502795909576048e-02,  3.6161399202205749e-02,
           -1.6326257990433818e-01, 2.4004693437302674e-01,
           8.0158802209250521e-02,  -1.0771316505006089e-01,
           -2.6399235665016901e-01, 2.5338887429228402e-01,
           1.7121427811925816e-02,  2.4467671325105486e-01,
           -1.2880581799194640e-01, -2.4850949202380238e-01,
           1.0007598515374029e-01,  5.2039689236992692e-01,
           -9.1403169509257018e-02, 8.2175909496637667e-02,
           1.7298796744073669e-01,  -1.5485364476661992e-01,
           -3.5371682996853349e-01, 3.5815668035086501e-01,
           -3.2649479182041558e-02, 1.4488541025960119e-01,
           -8.7323977230675143e-02, 8.2429349006226907e-02,
           -6.4265186361855658e-02, 1.5269403959006519e-01,
           2.2333371729412681e-02,  1.8116100939451607e-01,
           -3.4753273135591567e-01, 5.5206612549756409e-02,
           1.8064062960229704e-01,  -6.0786868396756351e-02,
           -3.7775911485734603e-01, -2.0859475521920592e-01,
           3.8485990698575134e-01,  -3.1378334584455636e-01,
           2.8617783341836561e-01,  -7.9667842046507356e-02,
           -3.7276283142836270e-01, 1.3552481727952780e-02,
           -7.5435023351090799e-02, -3.1432735410448237e-01,
           -9.9745102653916215e-02, 2.6466925947344296e-02,
           1.5973282858872184e-01,  -9.6059258202063624e-02,
           9.2382339513254145e-03,  -6.2090914055917205e-02,
           -1.1130867073162716e-01, 6.3886087475497538e-02,
           2.5648589698505270e-01,  -6.1521152061855662e-02,
           3.1547862997872156e-01,  -3.8353413739815372e-02,
           1.0247688331934562e-01,  -5.9817042863585834e-01,
           -1.9610413535019758e-01, -3.4766557933666437e-01,
           2.9455214780657591e-02,  -9.2590185534753247e-02,
           2.7740188682563799e-01,  3.8678061319903689e-01,
           1.0697840981365090e-02,  3.6170169080098291e-02,
           6.1765999022723402e-02,  7.1028878398802500e-03,
           -4.0571019476606768e-02, -3.0754752194422036e-01,
           -1.3676622387460341e-01, 3.0287953740572521e-01,
           -2.6418293696506479e-01, -2.3061947986274253e-01,
           -1.1493343363092957e-01, -3.6876949838133571e-01,
           -1.7827226459977036e-01, 1.5151420885112984e-01,
           5.3698481204141901e-01,  -1.5323798885592455e-01,
           1.3430176000834443e-01,  -7.1327948364177954e-02,
           2.7263684200090299e-01,  2.2766876732202809e-01,
           -1.2358014610558160e-01, -1.5444368079150830e-01,
           3.1212692671694858e-01,  3.6451125073415191e-01,
           -4.0588472358710143e-01, -2.9044016616964069e-01,
           3.1051755511435124e-02,  -2.5043576321765869e-02,
           -4.3142651191401565e-02, -1.2491169612972880e-01,
           1.8817261141559305e-01,  -6.5750956699908769e-02,
           1.3346050784171523e-01,  2.1889260088951099e-01,
           -1.8070210962869165e-01, -3.8928620865023306e-01,
           -1.2552793379906016e-01, -2.0078159568734458e-01,
           -2.5123886472929868e-01, -2.3148139072785578e-01,
           -3.5598405127095084e-01, 1.5680100265486449e-01,
           2.5471820323032729e-01,  -1.7057606471136799e-01,
           1.6799101000265951e-01,  2.2607790256506052e-01,
           1.4199734672078617e-02,  1.1019569147750242e-01,
           -1.7270500989724227e-01, 4.5447743568532761e-02,
           3.9614785920599493e-01,  7.1725337471716999e-02,
           1.7896150471171626e-01,  -5.2957365021458751e-02,
           2.8273951054108248e-01,  1.0829909720393692e-01,
           3.4053591628511620e-01,  -2.7393419582295958e-01,
           -2.4803123975102686e-02, -3.8851290645205488e-01,
           3.3246957426987633e-01,  2.1406310817037791e-01,
           -1.7321910843191901e-01, 9.8358935599614380e-02,
           9.1831714132565287e-02,  -3.6537436470195604e-02,
           -1.3909997644044905e-01, -6.8814887935697414e-02,
           2.1962090520650887e-01,  8.1583020171844642e-02,
           -2.5569737352601388e-02, 4.5652887353239613e-01,
           -1.9684499538979663e-01, 7.6012236968668476e-02,
           2.1444297777762178e-01,  -2.5236126784668422e-01,
           -3.1379847576491524e-02, -5.9079445838652467e-01,
           2.0875482020308773e-02,  -3.8617970741155125e-02,
           3.1175855136654013e-01,  2.4947413892316553e-01,
           2.9316398838700386e-01,  -3.3334105491185095e-02,
           -4.0699534793556022e-02, -1.2590884040633052e-01,
           2.3897115480282280e-01,  -4.8207983653461038e-02,
           -3.3864965536201823e-02, -3.4880641922273792e-01,
           -2.3684273093915204e-01, 7.9106724692691394e-02,
           1.9120736688805204e-01,  -2.7752385762901544e-01,
           8.0886194984189516e-02,  1.6980913239098855e-01,
           2.5192844332311459e-01,  -5.0098974637758482e-02,
           -4.8914433664314233e-01, 1.9289805234072294e-01,
           -1.2152565469391282e-02, 2.4495396348526038e-01,
           -3.6290369201735666e-02, -3.7631724108203163e-01,
           -3.6826854389614894e-01, -4.2469583849525450e-01,
           2.1289375218028783e-01,  2.8328064613075105e-01,
           3.2752446334182012e-01,  2.5437691826969405e-01,
           -1.6233354870694178e-01, 6.3627980440553136e-02,
           1.2944572145582267e-01,  8.7485867097256524e-03,
           -3.0221545069441261e-02, 6.7439117919490921e-02,
           6.3502197948579683e-02,  6.9507107622414591e-02,
           1.9833271394480709e-01,  -2.8720015863234694e-01};
    cec_utils.loadMatrixData(Mr, dataPath, 20, 2, 2022);
    for (size_t i = 0; i < 400; i++)
    {
        EXPECT_GT(1e-6, abs(Mr[i] - ans[i]));
    }
}

TEST_F(BaseTest, loadShuffleData)
{
    std::vector<int> SS;
    std::vector<int> ans;
    std::string dataPath =
        "/scratch/hyin/IOHexperimenter/include/ioh/problem/cec/cec_data";

    SS = {};
    ans = {4, 7, 9, 3, 5, 2, 10, 8, 6, 1};
    cec_utils.loadShuffleData(SS, dataPath, 10, 6, 2022);
    for (size_t i = 0; i < 10; i++)
    {
        EXPECT_GT(1e-6, abs(SS[i] - ans[i]));
    }

    SS = {};
    ans = {5,  11, 12, 20, 14, 19, 1, 13, 18, 6,
           17, 16, 4,  15, 3,  2,  8, 9,  10, 7};
    cec_utils.loadShuffleData(SS, dataPath, 20, 6, 2022);
    for (size_t i = 0; i < 20; i++)
    {
        EXPECT_GT(1e-6, abs(SS[i] - ans[i]));
    }
}

TEST_F(BaseTest, cec2022_basic)
{
    const auto &problem_factory =
        ioh::problem::ProblemRegistry<ioh::problem::CEC2022>::instance();

    auto problem_01 = problem_factory.create(1, 1, 2);
    std::ofstream file1("F1.txt");
    if (!file1.is_open())
        std::cout << "open failed" << std::endl;
    for (double x1 = -100.0; x1 <= 100.0; x1 += 0.5)
    {
        for (double x2 = -100.0; x2 <= 100.0; x2 += 0.5)
        {
            std::vector<double> x = {x1, x2};
            file1 << std::to_string(x1) << " " << std::to_string(x2) << " "
                  << std::to_string((*problem_01)(x)-300.0) << std::endl;
        }
    }
    file1.close();

    auto problem_02 = problem_factory.create(2, 1, 2);
    std::ofstream file2("F2.txt");
    if (!file2.is_open())
        std::cout << "open failed" << std::endl;
    for (double x1 = -100.0; x1 <= 100.0; x1 += 0.5)
    {
        for (double x2 = -100.0; x2 <= 100.0; x2 += 0.5)
        {
            std::vector<double> x = {x1, x2};
            file2 << std::to_string(x1) << " " << std::to_string(x2) << " "
                  << std::to_string((*problem_02)(x)-400.0) << std::endl;
        }
    }
    file2.close();

    auto problem_03 = problem_factory.create(3, 1, 2);
    std::ofstream file3("F3.txt");
    if (!file3.is_open())
        std::cout << "open failed" << std::endl;
    for (double x1 = -100.0; x1 <= 100.0; x1 += 0.5)
    {
        for (double x2 = -100.0; x2 <= 100.0; x2 += 0.5)
        {
            std::vector<double> x = {x1, x2};
            file3 << std::to_string(x1) << " " << std::to_string(x2) << " "
                  << std::to_string((*problem_03)(x)-600.0) << std::endl;
        }
    }
    file3.close();

    auto problem_04 = problem_factory.create(4, 1, 2);
    std::ofstream file4("F4.txt");
    if (!file4.is_open())
        std::cout << "open failed" << std::endl;
    for (double x1 = -100.0; x1 <= 100.0; x1 += 0.5)
    {
        for (double x2 = -100.0; x2 <= 100.0; x2 += 0.5)
        {
            std::vector<double> x = {x1, x2};
            file4 << std::to_string(x1) << " " << std::to_string(x2) << " "
                  << std::to_string((*problem_04)(x)-800.0) << std::endl;
        }
    }
    file4.close();

    auto problem_05 = problem_factory.create(5, 1, 2);
    std::ofstream file5("F5.txt");
    if (!file5.is_open())
        std::cout << "open failed" << std::endl;
    for (double x1 = -100.0; x1 <= 100.0; x1 += 0.5)
    {
        for (double x2 = -100.0; x2 <= 100.0; x2 += 0.5)
        {
            std::vector<double> x = {x1, x2};
            file5 << std::to_string(x1) << " " << std::to_string(x2) << " "
                  << std::to_string((*problem_05)(x)-900.0) << std::endl;
        }
    }
    file5.close();
}


TEST_F(BaseTest, cec2022_hybrid)
{
    const auto &problem_factory =
        ioh::problem::ProblemRegistry<ioh::problem::CEC2022>::instance();

    auto problem_06 = problem_factory.create(6, 1, 10);
    std::ofstream file6("F6.txt");
    if (!file6.is_open())
        std::cout << "open failed" << std::endl;
    for (double num = -100.; num <= 100.; num += 10.)
    {
        std::vector<double> x;
        for (int i = 0; i < 10; i++)
        {
            x.push_back(num);
            file6 << std::to_string(num) << " ";
        }
        file6 << std::to_string((*problem_06)(x)-1800.0) << std::endl;
    }
    file6.close();
}

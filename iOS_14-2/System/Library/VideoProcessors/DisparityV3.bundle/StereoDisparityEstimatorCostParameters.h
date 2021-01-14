/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@interface StereoDisparityEstimatorCostParameters : NSObject {

	float _gradient_clipping_alpha;
	float _gradient_clipping_beta;
	float _global_penalty;
	 _lambda_ncc;
	 _lambda_grad;
	 _lambda_std;
	 _min_thres_ncc;
	 _max_thres_grad;
	 _max_thres_std;

}

@property (assign,nonatomic)  lambda_ncc;                                //@synthesize lambda_ncc=_lambda_ncc - In the implementation block
@property (assign,nonatomic)  lambda_grad;                               //@synthesize lambda_grad=_lambda_grad - In the implementation block
@property (assign,nonatomic)  lambda_std;                                //@synthesize lambda_std=_lambda_std - In the implementation block
@property (assign,nonatomic)  min_thres_ncc;                             //@synthesize min_thres_ncc=_min_thres_ncc - In the implementation block
@property (assign,nonatomic)  max_thres_grad;                            //@synthesize max_thres_grad=_max_thres_grad - In the implementation block
@property (assign,nonatomic)  max_thres_std;                             //@synthesize max_thres_std=_max_thres_std - In the implementation block
@property (assign,nonatomic) float gradient_clipping_alpha;              //@synthesize gradient_clipping_alpha=_gradient_clipping_alpha - In the implementation block
@property (assign,nonatomic) float gradient_clipping_beta;               //@synthesize gradient_clipping_beta=_gradient_clipping_beta - In the implementation block
@property (assign,nonatomic) float global_penalty;                       //@synthesize global_penalty=_global_penalty - In the implementation block
-()lambda_ncc;
-(void)setLambda_ncc:;
-()lambda_grad;
-(void)setLambda_grad:;
-()lambda_std;
-(void)setLambda_std:;
-()min_thres_ncc;
-(void)setMin_thres_ncc:;
-()max_thres_grad;
-(void)setMax_thres_grad:;
-()max_thres_std;
-(void)setMax_thres_std:;
-(float)gradient_clipping_alpha;
-(void)setGradient_clipping_alpha:(float)arg1 ;
-(float)gradient_clipping_beta;
-(void)setGradient_clipping_beta:(float)arg1 ;
-(float)global_penalty;
-(void)setGlobal_penalty:(float)arg1 ;
@end


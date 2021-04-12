/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@interface StereoDisparityEstimatorCostParameters : NSObject {

	float _gradient_clipping_alpha;
	float _gradient_clipping_beta;
	float _global_penalty;
	 _lambda_ncc;
	 _min_thres_ncc;

}

@property (assign,nonatomic)  lambda_ncc;                                //@synthesize lambda_ncc=_lambda_ncc - In the implementation block
@property (assign,nonatomic)  min_thres_ncc;                             //@synthesize min_thres_ncc=_min_thres_ncc - In the implementation block
@property (assign,nonatomic) float gradient_clipping_alpha;              //@synthesize gradient_clipping_alpha=_gradient_clipping_alpha - In the implementation block
@property (assign,nonatomic) float gradient_clipping_beta;               //@synthesize gradient_clipping_beta=_gradient_clipping_beta - In the implementation block
@property (assign,nonatomic) float global_penalty;                       //@synthesize global_penalty=_global_penalty - In the implementation block
-()lambda_ncc;
-(void)setLambda_ncc:;
-()min_thres_ncc;
-(void)setMin_thres_ncc:;
-(float)gradient_clipping_alpha;
-(void)setGradient_clipping_alpha:(float)arg1 ;
-(float)gradient_clipping_beta;
-(void)setGradient_clipping_beta:(float)arg1 ;
-(float)global_penalty;
-(void)setGlobal_penalty:(float)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@class StereoDisparityEstimatorPreprocessingParameters, StereoDisparityEstimatorCostParameters, TVL1_v3_RegularizationParameters, TVL1_v3_SolverParameters, HBFGPUParameters;

@interface StereoDisparityEstimatorParameters : NSObject {

	StereoDisparityEstimatorPreprocessingParameters* _preprocessing;
	StereoDisparityEstimatorCostParameters* _cost;
	TVL1_v3_RegularizationParameters* _reg;
	TVL1_v3_SolverParameters* _solver;
	HBFGPUParameters* _hbf;

}

@property (nonatomic,retain) StereoDisparityEstimatorPreprocessingParameters * preprocessing;              //@synthesize preprocessing=_preprocessing - In the implementation block
@property (nonatomic,retain) StereoDisparityEstimatorCostParameters * cost;                                //@synthesize cost=_cost - In the implementation block
@property (nonatomic,retain) TVL1_v3_RegularizationParameters * reg;                                       //@synthesize reg=_reg - In the implementation block
@property (nonatomic,retain) TVL1_v3_SolverParameters * solver;                                            //@synthesize solver=_solver - In the implementation block
@property (nonatomic,retain) HBFGPUParameters * hbf;                                                       //@synthesize hbf=_hbf - In the implementation block
-(void)setSolver:(TVL1_v3_SolverParameters *)arg1 ;
-(TVL1_v3_SolverParameters *)solver;
-(TVL1_v3_RegularizationParameters *)reg;
-(HBFGPUParameters *)hbf;
-(id)init;
-(StereoDisparityEstimatorCostParameters *)cost;
-(void)setCost:(StereoDisparityEstimatorCostParameters *)arg1 ;
-(StereoDisparityEstimatorPreprocessingParameters *)preprocessing;
-(void)setPreprocessing:(StereoDisparityEstimatorPreprocessingParameters *)arg1 ;
-(void)setReg:(TVL1_v3_RegularizationParameters *)arg1 ;
-(void)setHbf:(HBFGPUParameters *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@class StereoDisparityEstimatorPreprocessingParameters, StereoDisparityEstimatorCostParameters, TVL1RegularizationParameters, TVL1SolverParameters, HBFGPUParameters;

@interface StereoDisparityEstimatorParameters : NSObject {

	StereoDisparityEstimatorPreprocessingParameters* _preprocessing;
	StereoDisparityEstimatorCostParameters* _cost;
	TVL1RegularizationParameters* _reg;
	TVL1SolverParameters* _solver;
	HBFGPUParameters* _hbf;

}

@property (nonatomic,retain) StereoDisparityEstimatorPreprocessingParameters * preprocessing;              //@synthesize preprocessing=_preprocessing - In the implementation block
@property (nonatomic,retain) StereoDisparityEstimatorCostParameters * cost;                                //@synthesize cost=_cost - In the implementation block
@property (nonatomic,retain) TVL1RegularizationParameters * reg;                                           //@synthesize reg=_reg - In the implementation block
@property (nonatomic,retain) TVL1SolverParameters * solver;                                                //@synthesize solver=_solver - In the implementation block
@property (nonatomic,retain) HBFGPUParameters * hbf;                                                       //@synthesize hbf=_hbf - In the implementation block
-(id)init;
-(TVL1SolverParameters *)solver;
-(void)setSolver:(TVL1SolverParameters *)arg1 ;
-(StereoDisparityEstimatorCostParameters *)cost;
-(void)setCost:(StereoDisparityEstimatorCostParameters *)arg1 ;
-(StereoDisparityEstimatorPreprocessingParameters *)preprocessing;
-(void)setPreprocessing:(StereoDisparityEstimatorPreprocessingParameters *)arg1 ;
-(TVL1RegularizationParameters *)reg;
-(void)setReg:(TVL1RegularizationParameters *)arg1 ;
-(HBFGPUParameters *)hbf;
-(void)setHbf:(HBFGPUParameters *)arg1 ;
@end


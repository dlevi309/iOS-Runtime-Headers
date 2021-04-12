/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXDirichletDistribution : NSObject {

	double kGlobalScoreMultiplier;
	double kBlendedScoreNormalizationConstant;

}
+(id)sharedInstance;
+(double)getGammaDistributionShapeParameterForComputingGlobalAppScoresWithAlpha:(double)arg1 andNormalizationConstant:(double)arg2 ;
-(id)init;
-(id)sampleProbabilitiesFromDirichletWithNormalizedParameters:(id)arg1 andNormalizationConstant:(double)arg2 ;
-(id)getBlendedLocalAndGlobalScoresWithLocalCounts:(id)arg1 andGlobalScores:(id)arg2 withSamplingEnabled:(BOOL)arg3 ;
@end


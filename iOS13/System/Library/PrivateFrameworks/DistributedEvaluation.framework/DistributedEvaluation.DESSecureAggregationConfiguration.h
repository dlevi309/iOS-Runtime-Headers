/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@interface DistributedEvaluation.DESSecureAggregationConfiguration : NSObject {

	 data;
	 metrics;
	 metricCount;
	 xpcActivity;
	 minimumCohortSize;
	 maximumCohortSize;
	 inputBound;
	 outputBitCount;
	 L2NormClippingBound;
	 secretSharingThreshold;
	 numValuesSummableWithoutOverflow;
	 centralDifferentialPrivacyVariance;

}

@property (assign,nonatomic) long long metricCount; 
@property (retain,nonatomic) id<OS_xpc_object> xpcActivity; 
@property (assign,nonatomic) long long minimumCohortSize; 
@property (assign,nonatomic) long long maximumCohortSize; 
@property (assign,nonatomic) float inputBound; 
@property (assign,nonatomic) long long outputBitCount; 
@property (assign,nonatomic) float L2NormClippingBound; 
@property (assign,nonatomic) long long secretSharingThreshold; 
@property (assign,nonatomic) long long numValuesSummableWithoutOverflow; 
@property (assign,nonatomic) float centralDifferentialPrivacyVariance; 
-(id)init;
-(id<OS_xpc_object>)xpcActivity;
-(void)setXpcActivity:(id<OS_xpc_object>)arg1 ;
-(id)initWithTaskInfo:(id)arg1 error:(id*)arg2 ;
-(void)setData:(const float*)arg1 count:(long long)arg2 ;
-(long long)metricCount;
-(void)setMetricCount:(long long)arg1 ;
-(long long)minimumCohortSize;
-(void)setMinimumCohortSize:(long long)arg1 ;
-(long long)maximumCohortSize;
-(void)setMaximumCohortSize:(long long)arg1 ;
-(float)inputBound;
-(void)setInputBound:(float)arg1 ;
-(long long)outputBitCount;
-(void)setOutputBitCount:(long long)arg1 ;
-(float)L2NormClippingBound;
-(void)setL2NormClippingBound:(float)arg1 ;
-(long long)secretSharingThreshold;
-(void)setSecretSharingThreshold:(long long)arg1 ;
-(long long)numValuesSummableWithoutOverflow;
-(void)setNumValuesSummableWithoutOverflow:(long long)arg1 ;
-(float)centralDifferentialPrivacyVariance;
-(void)setCentralDifferentialPrivacyVariance:(float)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXValueEstimator : NSObject
+(id)getIntentSessions:(id)arg1 ;
+(void)_addEstimateToDictionary:(id)arg1 estimate:(double)arg2 donation:(id)arg3 ;
+(BOOL)_addLazyEstimateToDictionary:(id)arg1 estimate:(id)arg2 donation:(id)arg3 ;
+(id)getIntentEstimates:(id)arg1 ;
+(void)_donationEstimation:(id)arg1 priorEstimates:(id)arg2 ;
+(id)getEstimates:(id)arg1 ;
+(id)computeAndLogValueEstimates:(id)arg1 ;
@end


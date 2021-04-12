/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol _ATXAppLaunchHistogramProtocol
@required
-(void)resetData;
-(void)decayByFactor:(double)arg1;
-(void)decayWithHalfLifeInDays:(double)arg1;
-(double)totalLaunches;
-(BOOL)removeHistoryForBundleId:(id)arg1;
-(int)removeHistoryForBundleIds:(id)arg1;
-(BOOL)bundleHasBeenLaunched:(id)arg1;
-(void)verifyDataIntegrity;
-(void)resetHistogram:(id)arg1;

@end


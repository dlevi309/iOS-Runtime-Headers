/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface _APRFeedback : NSObject
+(id)sharedInstance;
-(id)init;
-(void)resetData;
-(void)decayCounts;
-(void)intentType:(id)arg1 experience:(unsigned long long)arg2 feedbackSource:(unsigned long long)arg3 engagementType:(unsigned long long)arg4 launchedBundleId:(id)arg5 predictedBundleIds:(id)arg6 ;
@end


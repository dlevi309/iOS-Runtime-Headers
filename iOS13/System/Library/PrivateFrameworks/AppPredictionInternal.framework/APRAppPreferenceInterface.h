/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol APRAppPreferenceInterface
@required
-(void)prewarmWithReply:(/*^block*/id)arg1;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 reply:(/*^block*/id)arg4;
-(void)sendFeedbackForIntent:(id)arg1 aprResponse:(id)arg2;

@end


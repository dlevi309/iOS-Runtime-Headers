/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXRootOfAppData : NSObject
-(id)init;
-(id)initInternal;
-(unsigned long long)sessionCountForBundleId:(id)arg1 ;
-(unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2 ;
-(void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2 ;
-(unsigned long long)docFreqForBundleId:(id)arg1 withAction:(id)arg2 ;
-(void)recordDocFreqWithBundleId:(id)arg1 hasAction:(id)arg2 ;
@end


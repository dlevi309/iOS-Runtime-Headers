/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCForYouQueryUtilities : NSObject
+(id)feedRequestsForTags:(id)arg1 tagBinProvider:(/*^block*/id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 purchasedTagIDs:(id)arg5 bundleSubscriptionProvider:(id)arg6 configuration:(id)arg7 maxCount:(unsigned long long)arg8 tagIDFeedRangeProvider:(/*^block*/id)arg9 isRunningPPT:(BOOL)arg10 ;
+(void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(BOOL)arg7 qualityOfService:(long long)arg8 completionHandler:(/*^block*/id)arg9 ;
+(id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2 ;
+(void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(BOOL)arg7 qualityOfService:(long long)arg8 completionHandler:(/*^block*/id)arg9 ;
@end


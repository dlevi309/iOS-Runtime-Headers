/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGHarvestEligibility : NSObject
+(BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)arg1 ;
+(BOOL)searchableItemIsEligibleForDissectorPipeline:(id)arg1 ;
+(BOOL)searchableItemIsStoredEncrypted:(id)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(BOOL*)arg2 ;
+(/*^block*/id)mailAppItemEligibilityCheckBlock;
+(/*^block*/id)messagesAppItemEligibilityCheckBlock;
+(/*^block*/id)genericItemIneligibleBlock;
+(/*^block*/id)genericItemEligibleBlock;
@end


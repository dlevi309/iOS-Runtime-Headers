/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGHarvestEligibility : NSObject
+(/*^block*/id)genericItemIneligibleBlock;
+(/*^block*/id)messagesAppItemEligibilityCheckBlock;
+(BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)arg1 ;
+(BOOL)searchableItemIsStoredEncryptedWithGetterBlock:(/*^block*/id)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(BOOL*)arg2 ;
+(/*^block*/id)mailAppItemEligibilityCheckBlock;
+(/*^block*/id)genericItemEligibleBlock;
+(BOOL)searchableItemIsEligibleForHarvestingWithGetterBlock:(/*^block*/id)arg1 bundleIdentifier:(id)arg2 eligibleExceptForAge:(BOOL*)arg3 ;
+(BOOL)searchableItemIsEligibleForDissectorPipeline:(id)arg1 ;
@end


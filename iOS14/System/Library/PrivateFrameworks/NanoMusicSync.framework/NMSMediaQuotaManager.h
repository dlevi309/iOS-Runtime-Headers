/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSDictionary, NMSMediaDownloadInfo;

@interface NMSMediaQuotaManager : NSObject {

	NSDictionary* _groupIterators;
	unsigned long long _quota;
	NMSMediaDownloadInfo* _downloadInfoWithinQuota;
	unsigned long long _quotaUsage;
	BOOL _hasEvaluated;

}
-(void)_evaluateAddedItemsIfNecessary;
-(id)_containerListForBundleIdentifier:(id)arg1 ;
-(id)downloadInfoWithinQuota;
-(id)downloadInfoWithinQuotaForBundleIdentifier:(id)arg1 ;
-(id)initWithGroupIterators:(id)arg1 quota:(unsigned long long)arg2 ;
-(id)groupIteratorForBundleIdentifier:(id)arg1 ;
-(id)itemsWithinQuota;
-(id)itemsWithinQuotaForBundleIdentifier:(id)arg1 ;
-(unsigned long long)sizeOfItemsWithinQuota;
-(unsigned long long)sizeOfItemsWithinQuotaForBundleIdentifier:(id)arg1 ;
-(unsigned long long)sizeOfNominatedItemsForBundleIdentifier:(id)arg1 ;
-(BOOL)isItemGroupWithinQuota:(id)arg1 ;
@end


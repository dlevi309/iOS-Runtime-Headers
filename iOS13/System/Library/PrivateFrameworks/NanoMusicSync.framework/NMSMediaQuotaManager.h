/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSDictionary, NMSMediaDownloadInfo;

@interface NMSMediaQuotaManager : NSObject {

	NSDictionary* _groupIterators;
	unsigned long long _quota;
	NMSMediaDownloadInfo* _downloadInfoWithinQuota;
	NMSMediaDownloadInfo* _downloadInfoOverQuota;
	unsigned long long _quotaUsage;
	BOOL _hasEvaluated;

}
-(void)_evaluateAddedItemsIfNecessary;
-(id)_containerListForIdentifier:(id)arg1 ;
-(id)downloadInfoWithinQuota;
-(id)downloadInfoWithinQuotaForBundleIdentifier:(id)arg1 ;
-(id)downloadInfoOverQuota;
-(id)downloadInfoOverQuotaForBundleIdentifier:(id)arg1 ;
-(id)initWithGroupIterators:(id)arg1 quota:(unsigned long long)arg2 ;
-(id)groupIteratorForIdentifier:(id)arg1 ;
-(id)itemsWithinQuota;
-(id)itemsWithinQuotaForIdentifier:(id)arg1 ;
-(unsigned long long)sizeOfItemsWithinQuota;
-(unsigned long long)sizeOfItemsWithinQuotaForIdentifier:(id)arg1 ;
-(id)itemsOverQuota;
-(id)itemsOverQuotaForBundleIdentifier:(id)arg1 ;
-(unsigned long long)sizeOfNominatedItemsForIdentifier:(id)arg1 ;
-(BOOL)isItemGroupWithinQuota:(id)arg1 ;
@end


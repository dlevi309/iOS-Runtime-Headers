/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject {

	FCBundleSubscriptionLookUpEntry* _bundleSubscriptionLookUpEntry;
	FCKeyValueStore* _localStore;

}

@property (nonatomic,retain) FCBundleSubscriptionLookUpEntry * bundleSubscriptionLookUpEntry;              //@synthesize bundleSubscriptionLookUpEntry=_bundleSubscriptionLookUpEntry - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                 //@synthesize localStore=_localStore - In the implementation block
-(FCKeyValueStore *)localStore;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)loadLocalCachesFromStore;
-(id)initWithLocalStore:(id)arg1 ;
-(void)updateEntry:(id)arg1 ;
-(FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookUpEntry;
-(void)cleanupStaleExpiredEntry;
-(void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 isAmplifyUser:(BOOL)arg5 ;
-(void)setBundleSubscriptionLookUpEntry:(FCBundleSubscriptionLookUpEntry *)arg1 ;
-(id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1 ;
@end


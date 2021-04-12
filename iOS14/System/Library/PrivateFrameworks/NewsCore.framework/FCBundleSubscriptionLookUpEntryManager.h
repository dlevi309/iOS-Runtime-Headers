/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject {

	FCBundleSubscriptionLookUpEntry* _bundleSubscriptionLookUpEntry;
	FCKeyValueStore* _localStore;

}

@property (nonatomic,retain) FCBundleSubscriptionLookUpEntry * bundleSubscriptionLookUpEntry;              //@synthesize bundleSubscriptionLookUpEntry=_bundleSubscriptionLookUpEntry - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                 //@synthesize localStore=_localStore - In the implementation block
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)setBundleSubscriptionLookUpEntry:(FCBundleSubscriptionLookUpEntry *)arg1 ;
-(void)updateEntry:(id)arg1 ;
-(id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1 ;
-(id)initWithLocalStore:(id)arg1 ;
-(void)cleanupStaleExpiredEntry;
-(void)loadLocalCachesFromStore;
-(void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 servicesBundlePurchaseID:(id)arg5 isAmplifyUser:(BOOL)arg6 ;
-(FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookUpEntry;
@end


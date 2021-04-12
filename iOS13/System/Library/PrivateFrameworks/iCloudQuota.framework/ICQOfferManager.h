/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@protocol OS_dispatch_queue;
@class NSObject, ICQOffer, NSTimer, NSNumber;

@interface ICQOfferManager : NSObject {

	NSObject*<OS_dispatch_queue> _cachedOfferQueue;
	ICQOffer* _cachedOffer;
	NSTimer* _invalidationTimer;
	BOOL _isRegisteredForDarwinNotifications;

}

@property (nonatomic,readonly) BOOL isDeviceStorageAlmostFull; 
@property (assign,getter=isSimulatedDeviceStorageAlmostFull,nonatomic) BOOL simulatedDeviceStorageAlmostFull; 
@property (nonatomic,retain) NSNumber * simulatedPhotosLibrarySize; 
@property (nonatomic,readonly) NSNumber * photosLibrarySize; 
@property (assign,getter=isBuddyOfferEnabled,nonatomic) BOOL buddyOfferEnabled; 
@property (nonatomic,retain) ICQOffer * cachedOffer; 
+(id)sharedOfferManager;
+(id)ckBackupDeviceID;
+(id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2 ;
+(id)defaultPlaceholderKeys;
+(id)defaultBundleIdentifier;
+(BOOL)buddyOfferMightNeedPresenting;
+(BOOL)_legacyBuddyOfferMightNeedPresenting;
-(id)init;
-(void)dealloc;
-(void)_registerForDarwinNotifications;
-(void)getOfferWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isDeviceStorageAlmostFull;
-(NSNumber *)photosLibrarySize;
-(BOOL)isSimulatedDeviceStorageAlmostFull;
-(NSNumber *)simulatedPhotosLibrarySize;
-(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
-(void)postOfferType:(id)arg1 ;
-(void)postBuddyOfferType:(id)arg1 ;
-(void)forcePostFollowup;
-(void)teardownCachedOffer;
-(void)teardownCachedBuddyOffer;
-(void)teardownCachedOffers;
-(BOOL)isBuddyOfferEnabled;
-(void)setBuddyOfferEnabled:(BOOL)arg1 ;
-(void)setSimulatedPhotosLibrarySize:(NSNumber *)arg1 ;
-(void)getOfferForBundleIdentifier:(id)arg1 offerContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_teardownInvalidationTimer;
-(void)_unregisterForDarwinNotifications;
-(id)currentOfferForBundleIdentifier:(id)arg1 ;
-(void)getOfferForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 offerContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldUseOffer:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(ICQOffer *)cachedOffer;
-(void)setCachedOffer:(ICQOffer *)arg1 ;
-(id)_funnelCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_setupTimerForInvalidationDate:(id)arg1 ;
-(void)_refetchOffer;
-(void)_firedInvalidationTimer:(id)arg1 ;
-(id)currentOffer;
-(BOOL)fetchOfferIfNeeded;
-(void)_handlePushReceivedDarwinNotification;
-(void)clearFollowups;
-(void)updateOfferId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(/*^block*/id)arg4 ;
@end


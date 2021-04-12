/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)stringWithPlaceholderFormat:(id)arg1 alternateString:(id)arg2 ;
+(id)defaultBundleIdentifier;
+(BOOL)buddyOfferMightNeedPresenting;
+(id)sharedOfferManager;
+(id)defaultPlaceholderKeys;
+(BOOL)_legacyBuddyOfferMightNeedPresenting;
+(id)ckBackupDeviceID;
-(void)_firedInvalidationTimer:(id)arg1 ;
-(id)init;
-(void)forcePostFollowup;
-(void)_registerForDarwinNotifications;
-(void)_teardownInvalidationTimer;
-(void)setCachedOffer:(ICQOffer *)arg1 ;
-(void)postOfferType:(id)arg1 ;
-(void)setBuddyOfferEnabled:(BOOL)arg1 ;
-(void)_unregisterForDarwinNotifications;
-(void)_setupTimerForInvalidationDate:(id)arg1 ;
-(void)getOfferForBundleIdentifier:(id)arg1 offerContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isBuddyOfferEnabled;
-(void)teardownCachedBuddyOffer;
-(void)clearFollowups;
-(void)teardownCachedOffers;
-(void)updateOfferId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handlePushReceivedDarwinNotification;
-(void)getOfferWithCompletion:(/*^block*/id)arg1 ;
-(void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 offerContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)currentOffer;
-(NSNumber *)simulatedPhotosLibrarySize;
-(BOOL)_shouldUseOffer:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)getOfferForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_funnelCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)teardownCachedOffer;
-(id)currentOfferForBundleIdentifier:(id)arg1 ;
-(void)postBuddyOfferType:(id)arg1 ;
-(ICQOffer *)cachedOffer;
-(BOOL)fetchOfferIfNeeded;
-(BOOL)isDeviceStorageAlmostFull;
-(void)setSimulatedPhotosLibrarySize:(NSNumber *)arg1 ;
-(NSNumber *)photosLibrarySize;
-(void)_getOfferForAccount:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
-(void)dealloc;
-(void)_refetchOffer;
-(BOOL)isSimulatedDeviceStorageAlmostFull;
@end


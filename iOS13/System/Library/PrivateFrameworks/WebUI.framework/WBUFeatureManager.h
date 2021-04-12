/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount, NSNumber, STManagementState;

@interface WBUFeatureManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSNumber* _cachedShouldRequestMoreTime;
	STManagementState* _managementState;
	BOOL _autoFillAvailable;
	BOOL _bookmarksAvailable;
	BOOL _readingListAvailable;
	BOOL _offlineReadingListAvailable;
	BOOL _cloudSyncAvailable;
	BOOL _inMemoryBookmarkChangeTrackingAvailable;

}

@property (getter=isAutoFillAvailable,nonatomic,readonly) BOOL autoFillAvailable;                                                          //@synthesize autoFillAvailable=_autoFillAvailable - In the implementation block
@property (getter=isBookmarksAvailable,nonatomic,readonly) BOOL bookmarksAvailable;                                                        //@synthesize bookmarksAvailable=_bookmarksAvailable - In the implementation block
@property (getter=isReadingListAvailable,nonatomic,readonly) BOOL readingListAvailable;                                                    //@synthesize readingListAvailable=_readingListAvailable - In the implementation block
@property (getter=isOfflineReadingListAvailable,nonatomic,readonly) BOOL offlineReadingListAvailable;                                      //@synthesize offlineReadingListAvailable=_offlineReadingListAvailable - In the implementation block
@property (getter=isCloudKitBookmarksAvailable,nonatomic,readonly) BOOL cloudKitBookmarksAvailable; 
@property (getter=isCloudTabsAvailable,nonatomic,readonly) BOOL cloudTabsAvailable; 
@property (getter=isCloudSyncAvailable,nonatomic,readonly) BOOL cloudSyncAvailable;                                                        //@synthesize cloudSyncAvailable=_cloudSyncAvailable - In the implementation block
@property (getter=isCloudHistorySyncAvailable,nonatomic,readonly) BOOL cloudHistorySyncAvailable; 
@property (getter=isCreditCardStorageAvailable,nonatomic,readonly) BOOL creditCardStorageAvailable; 
@property (getter=isPrivateBrowsingAvailable,nonatomic,readonly) BOOL privateBrowsingAvailable; 
@property (getter=isInMemoryBookmarkChangeTrackingAvailable,nonatomic,readonly) BOOL inMemoryBookmarkChangeTrackingAvailable;              //@synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable - In the implementation block
@property (getter=isUserRemotelyManagedAndLocallyRestricted,nonatomic,readonly) BOOL userRemotelyManagedAndLocallyRestricted; 
@property (getter=isAirDropPasswordsAvailable,nonatomic,readonly) BOOL airDropPasswordsAvailable; 
+(long long)accessLevel;
+(BOOL)shouldOfferVirtualCards;
+(id)webui_sharedFeatureManager;
-(id)init;
-(void)dealloc;
-(BOOL)isCloudSyncAvailable;
-(void)_accountStoreDidChange:(id)arg1 ;
-(BOOL)isAirDropPasswordsAvailable;
-(BOOL)isInMemoryBookmarkChangeTrackingAvailable;
-(BOOL)isBookmarksAvailable;
-(BOOL)isOfflineReadingListAvailable;
-(void)_updateAppleAccount;
-(void)_updateFeatureAvailabilityByAccessLevel;
-(void)_setupAccountStore;
-(BOOL)isCloudTabsAvailable;
-(BOOL)isCloudKitBookmarksAvailable;
-(BOOL)_isUsingManagedAppleID;
-(BOOL)isUserRemotelyManagedAndLocallyRestricted;
-(void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isCreditCardStorageAvailable;
-(BOOL)isCloudHistorySyncAvailable;
-(BOOL)isPrivateBrowsingAvailable;
-(void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isAutoFillAvailable;
-(BOOL)isReadingListAvailable;
@end


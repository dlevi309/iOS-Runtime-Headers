/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount, NSNumber, STManagementState, OTClique;

@interface WBUFeatureManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSNumber* _cachedShouldRequestMoreTime;
	STManagementState* _managementState;
	OTClique* _keychainClique;
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
@property (getter=isKeychainSyncEnabled,nonatomic,readonly) BOOL keychainSyncEnabled; 
@property (getter=isUserRemotelyManagedAndLocallyRestricted,nonatomic,readonly) BOOL userRemotelyManagedAndLocallyRestricted; 
@property (getter=isAirDropPasswordsAvailable,nonatomic,readonly) BOOL airDropPasswordsAvailable; 
+(long long)accessLevel;
+(BOOL)shouldOfferVirtualCards;
+(id)webui_sharedFeatureManager;
-(BOOL)_isUsingManagedAppleID;
-(id)init;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_setupAccountStore;
-(BOOL)isBookmarksAvailable;
-(void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isPrivateBrowsingAvailable;
-(BOOL)isCloudHistorySyncAvailable;
-(BOOL)isAirDropPasswordsAvailable;
-(BOOL)isAutoFillAvailable;
-(BOOL)isCreditCardStorageAvailable;
-(BOOL)isCloudSyncAvailable;
-(void)_updateFeatureAvailabilityByAccessLevel;
-(BOOL)isInMemoryBookmarkChangeTrackingAvailable;
-(void)_updateKeychainSyncingStatus;
-(BOOL)isOfflineReadingListAvailable;
-(void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isReadingListAvailable;
-(BOOL)isCloudKitBookmarksAvailable;
-(BOOL)isUserRemotelyManagedAndLocallyRestricted;
-(BOOL)isCloudTabsAvailable;
-(void)_updateAppleAccount;
-(BOOL)isKeychainSyncEnabled;
-(void)dealloc;
@end


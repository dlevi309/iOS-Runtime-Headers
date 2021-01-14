/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSLock, CNContactStore, CNFavorites, NSArray, NSObject;

@interface NTKPeopleComplicationContactsCache : NSObject {

	NSDictionary* _favoritesMapping;
	NSLock* _favoritesMappingLock;
	NSLock* _favoritesEntriesLock;
	NSLock* _allContactsEntriesLock;
	BOOL _hasSetupNotifications;
	NSLock* _hasSetupNotificationsLock;
	CNContactStore* _contactStore;
	CNFavorites* _favorites;
	NSArray* _nonFavoriteValidAllContacts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedCache;
-(void)_setupNotifications;
-(id)init;
-(void)_tearDownNotifications;
-(id)favoriteContacts;
-(void)dealloc;
-(id)contactForId:(id)arg1 ;
-(void)setupNotificationsIfNecessary;
-(id)_favoritesMappingLocked;
-(id)_mappedFavoriteContacts;
-(id)computeNonFavoriteAllContactsWithCount:(unsigned long long)arg1 ;
-(id)fullNameForContact:(id)arg1 ;
-(id)abbreviatedNameForContact:(id)arg1 ;
-(id)shortNameForContact:(id)arg1 ;
-(id)_fetchContactForId:(id)arg1 ;
-(void)_queue_findContactWithFullName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_contactKeysToFetchWithoutThumbnail;
-(id)_contactKeysToFetchWithThumbnail;
-(BOOL)checkValidityOfContact:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_queue_loadFavoriteContacts;
-(void)_queue_loadAllContacts;
-(void)_didReceiveContactStoreChangedNotification;
-(void)_didReceiveFavoritesChangeRelatedNotification;
-(void)_queue_reloadContacts;
-(id)firstNonFavoriteAllContact;
-(id)nonFavoriteAllContactsWithCount:(unsigned long long)arg1 ;
-(void)findContactWithFullName:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)contactIdentifierIsFavorited:(id)arg1 ;
-(void)_didReceiveDeviceLockStateDidChangeNotification;
@end


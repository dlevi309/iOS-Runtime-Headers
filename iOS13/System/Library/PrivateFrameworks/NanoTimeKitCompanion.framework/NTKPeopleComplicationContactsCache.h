/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSDictionary, NSLock, CNContactStore, CNFavorites;

@interface NTKPeopleComplicationContactsCache : NSObject {

	NSDictionary* _favoritesMapping;
	NSLock* _favoritesMappingLock;
	BOOL _hasSetupNotifications;
	NSLock* _hasSetupNotificationsLock;
	CNContactStore* _contactStore;
	CNFavorites* _favorites;

}
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(id)favoriteContacts;
-(id)fullNameForContact:(id)arg1 ;
-(void)setupNotificationsIfNecessary;
-(id)_loadFavoriteContacts;
-(void)_didReceiveContactStoreChangedNotification;
-(void)_didReceiveFavoritesChangeRelatedNotification;
-(void)_queue_loadFavoriteContacts;
-(id)shortNameForContact:(id)arg1 ;
-(id)abbreviatedNameForContact:(id)arg1 ;
-(void)_didReceiveDeviceLockStateDidChangeNotification;
@end


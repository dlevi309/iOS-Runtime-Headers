/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate, UNSNotificationRepositorySettingsProvider;
@class UNSKeyedDataStoreRepository, UNSKeyedObservable, NSMutableSet, NSObject, UNSBundleLibrarian;

@interface UNSNotificationRepository : NSObject {

	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSMutableSet* _unlimitedBodyBundleIdentifiers;
	NSObject*<OS_dispatch_queue> _queue;
	UNSBundleLibrarian* _librarian;
	id<UNSNotificationRepositoryDelegate> _delegate;
	id<UNSNotificationRepositorySettingsProvider> _settingsProvider;

}

@property (assign,nonatomic,__weak) id<UNSNotificationRepositorySettingsProvider> settingsProvider;              //@synthesize settingsProvider=_settingsProvider - In the implementation block
@property (assign,nonatomic) id<UNSNotificationRepositoryDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(long long)_maxObjectsPerKey;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)performMigration;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performMigration;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)allBundleIdentifiers;
-(void)setSettingsProvider:(id<UNSNotificationRepositorySettingsProvider>)arg1 ;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_notificationsForObjects:(id)arg1 ;
-(id<UNSNotificationRepositoryDelegate>)delegate;
-(void)_queue_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)notificationRecordForForIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_queue_badgeNumberForBundleIdentifier:(id)arg1 ;
-(void)_queue_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)performValidation;
-(id)_queue_notificationRecordForForIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(id)_queue_notificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)setDelegate:(id<UNSNotificationRepositoryDelegate>)arg1 ;
-(void)_queue_saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 withOptions:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 ;
-(void)_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_triggerInvalidationForFirstUnlock;
-(id)notificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)removeStoreForBundleIdentifier:(id)arg1 ;
-(id)badgeNumberForBundleIdentifier:(id)arg1 ;
-(void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 shouldRepost:(BOOL)arg5 forBundleIdentifier:(id)arg6 ;
-(void)saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performValidation;
-(void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(id<UNSNotificationRepositorySettingsProvider>)settingsProvider;
-(void)_queue_performMigrationForPushStoreAtPath:(id)arg1 ;
-(void)_queue_performMigrationForPushStore;
-(void)_queue_performMigrationForUserNotificationsStore;
-(void)removeNotificationRepository;
-(void)_queue_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldPersistNotificationRecord:(id)arg1 forBundleSettings:(id)arg2 perTopicSettings:(id)arg3 ;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3 ;
@end


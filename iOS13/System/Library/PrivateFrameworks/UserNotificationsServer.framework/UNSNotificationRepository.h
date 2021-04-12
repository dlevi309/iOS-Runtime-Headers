/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate, UNSNotificationRepositorySettingsProvider;
@class UNSKeyedDataStoreRepository, UNSKeyedObservable, NSObject, UNSBundleLibrarian;

@interface UNSNotificationRepository : NSObject {

	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;
	UNSBundleLibrarian* _librarian;
	id<UNSNotificationRepositoryDelegate> _delegate;
	id<UNSNotificationRepositorySettingsProvider> _settingsProvider;

}

@property (assign,nonatomic,__weak) id<UNSNotificationRepositorySettingsProvider> settingsProvider;              //@synthesize settingsProvider=_settingsProvider - In the implementation block
@property (assign,nonatomic) id<UNSNotificationRepositoryDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(id<UNSNotificationRepositoryDelegate>)delegate;
-(void)setDelegate:(id<UNSNotificationRepositoryDelegate>)arg1 ;
-(void)performMigration;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)badgeNumberForBundleIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setSettingsProvider:(id<UNSNotificationRepositorySettingsProvider>)arg1 ;
-(id<UNSNotificationRepositorySettingsProvider>)settingsProvider;
-(id)allBundleIdentifiers;
-(void)performValidation;
-(id)notificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_performMigration;
-(void)saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(long long)_maxObjectsPerKey;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(void)removeStoreForBundleIdentifier:(id)arg1 ;
-(void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(id)notificationRecordForForIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)_queue_notificationRecordsForBundleIdentifier:(id)arg1 ;
-(id)_queue_notificationRecordForForIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 withOptions:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 ;
-(void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performValidation;
-(void)_queue_performMigrationForUserNotificationsStore;
-(void)_queue_triggerInvalidationForFirstUnlock;
-(id)_notificationsForObjects:(id)arg1 ;
-(void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldPersistNotificationRecord:(id)arg1 forBundleSettings:(id)arg2 perTopicSettings:(id)arg3 ;
-(void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 shouldRepost:(BOOL)arg5 forBundleIdentifier:(id)arg6 ;
-(id)_queue_badgeNumberForBundleIdentifier:(id)arg1 ;
-(void)_queue_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_performMigrationForPushStore;
-(void)_queue_performMigrationForPushStoreAtPath:(id)arg1 ;
-(void)removeNotificationRepository;
@end


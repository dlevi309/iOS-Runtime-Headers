/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDataStoreRepository, UNSKeyedObservable, NSObject, UNSBundleLibrarian;

@interface UNSPendingNotificationRepository : NSObject {

	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;
	UNSBundleLibrarian* _librarian;

}
-(void)performMigration;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)allBundleIdentifiers;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)pendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)applicationStateDidRestore;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(long long)_maxObjectsPerKey;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3 ;
-(id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)arg1 ;
-(void)_queue_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_notifyObserversOfChangesFrom:(id)arg1 to:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
@end


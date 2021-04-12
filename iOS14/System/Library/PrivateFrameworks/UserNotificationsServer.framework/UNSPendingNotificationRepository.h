/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(long long)_maxObjectsPerKey;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)performMigration;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performMigration;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(id)allBundleIdentifiers;
-(void)_queue_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_notifyObserversOfChangesFrom:(id)arg1 to:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)applicationStateDidRestore;
-(void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)pendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3 ;
-(id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, NSPersistentHistoryToken, PLChangeHandlingNotificationObserver;

@interface PLPersistentHistoryChangeDistributor : NSObject {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	PLCoreDataChangeMerger* _changeMerger;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSPersistentHistoryToken* _lastToken;
	PLChangeHandlingNotificationObserver* _notificationObserver;

}
-(void)startObservingRemoteNotifications;
-(id)makeManagedObjectContext;
-(void)forceUserInterfaceReload;
-(id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2 ;
-(void)stopObservingRemoteNotifications;
-(void)distributeTransactions:(id)arg1 withXPCTransaction:(id)arg2 ;
-(void)distributeNewTransactionsSinceLastToken;
-(void)invalidate;
-(void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)arg1 xpcTransaction:(id)arg2 ;
-(void)handleRemoteNotificationOfType:(long long)arg1 withTransaction:(id)arg2 ;
-(id)fetchTransactionsSinceLastToken;
-(id)localEventFromTransactions:(id)arg1 ;
-(void)_inq_startObservingRemoteNotifications;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, NSPersistentHistoryToken;

@interface PLPersistentHistoryChangeDistributor : NSObject {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	PLCoreDataChangeMerger* _changeMerger;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSPersistentHistoryToken* _lastToken;
	int _notifyToken;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2 ;
-(void)startObservingRemoteNotifications;
-(void)_inq_startObservingRemoteNotifications;
-(void)stopObservingRemoteNotifications;
-(void)_inq_stopObservingRemoteNotifications;
-(void)distributeNewTransactionsSinceLastToken;
-(id)fetchTransactionsSinceLastToken;
-(id)makeManagedObjectContext;
-(void)forceUserInterfaceReload;
-(void)distributeTransactions:(id)arg1 ;
-(id)localEventFromTransactions:(id)arg1 ;
@end


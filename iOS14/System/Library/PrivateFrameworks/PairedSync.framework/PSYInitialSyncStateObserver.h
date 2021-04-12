/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <libobjc.A.dylib/PSYSyncStateObserverInterface.h>

@protocol OS_dispatch_queue, PSYInitialSyncStateObserverDelegate;
@class NSMutableDictionary, NSObject, NSXPCConnection, NSString;

@interface PSYInitialSyncStateObserver : NSObject <PSYSyncStateObserverInterface> {

	NSMutableDictionary* _syncStateCache;
	NSMutableDictionary* _initialSyncStateCache;
	NSMutableDictionary* _syncStateEntryCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	BOOL _init;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _daemonStartedNotifyToken;
	int _syncSwitchNotifyToken;
	NSMutableDictionary* _nrDevices;
	id<PSYInitialSyncStateObserverDelegate> _delegate;

}

@property (__weak) id<PSYInitialSyncStateObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unregisterNRDeviceMonitors;
-(id)init;
-(void)_handleConnectionInvalidated;
-(id<PSYInitialSyncStateObserverDelegate>)delegate;
-(void)_registerMonitorAllNRDevicesForMigrationChanges:(/*^block*/id)arg1 ;
-(oneway void)didUpdateSyncForPairingID:(id)arg1 ;
-(void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<PSYInitialSyncStateObserverDelegate>)arg1 ;
-(void)_queue_initializeIfNotInitialized;
-(void)requestInitialNonMigrationSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_queue_notifyCanRetryFailedRequests;
-(void)_queue_updateSyncStates:(id)arg1 notifyDelegateOfChanges:(BOOL)arg2 ;
-(void)requestInitialSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSyncStateForPairingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)syncProviderWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_queue_querySyncState;
-(void)dealloc;
@end


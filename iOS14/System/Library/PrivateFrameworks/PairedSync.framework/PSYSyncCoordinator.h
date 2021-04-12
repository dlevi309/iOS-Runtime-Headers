/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PSYActivity.h>
#import <libobjc.A.dylib/PSYServiceSyncSessionDelegate.h>

@protocol OS_dispatch_queue, PSYSyncCoordinatorDelegate;
@class NSXPCListener, NSObject, PSYServiceSyncSession, NSMutableDictionary, NSString, NSXPCConnection;

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate> {

	NSXPCListener* _listener;
	/*^block*/id _pendingCompletion;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	opaque_pthread_mutex_t _delegateLock;
	id<PSYSyncCoordinatorDelegate> _delegate;
	PSYServiceSyncSession* _activeSyncSession;
	int _syncSwitchIDToken;
	unsigned long long _syncRestriction;
	unsigned long long _syncIDOfStartedSync;
	BOOL _hasStartedListening;
	NSMutableDictionary* _nrDevices;
	NSString* _serviceName;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) PSYServiceSyncSession * activeSyncSession; 
@property (assign,nonatomic,__weak) id<PSYSyncCoordinatorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)filteredErrorWithError:(id)arg1 ;
+(id)syncCoordinatorWithServiceName:(id)arg1 ;
-(void)_cleanup;
-(void)_unregisterNRDeviceMonitors;
-(void)syncDidComplete;
-(id<PSYSyncCoordinatorDelegate>)delegate;
-(void)syncSession:(id)arg1 reportProgress:(double)arg2 ;
-(void)_registerMonitorAllNRDevicesForMigrationChanges:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(int)registerNotifyTokenWithName:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unregisterForDeviceChangeNotifications;
-(void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(/*^block*/id)arg2 ;
-(int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(unsigned long long)readNotifyToken:(int)arg1 ;
-(void)registerForDeviceChangeNotifications;
-(void)syncSessionDidComplete:(id)arg1 ;
-(void)syncSessionDidCompleteSending:(id)arg1 ;
-(PSYServiceSyncSession *)activeSyncSession;
-(void)_syncRestrictionDidUpdate:(id)arg1 forServiceName:(id)arg2 ;
-(void)setDelegate:(id<PSYSyncCoordinatorDelegate>)arg1 ;
-(void)invalidateActiveSyncSession;
-(void)reportProgress:(double)arg1 ;
-(NSXPCConnection *)connection;
-(unsigned long long)_syncRestriction;
-(void)syncSession:(id)arg1 didFailWithError:(id)arg2 ;
-(oneway void)abortSyncWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2 ;
-(unsigned long long)syncRestriction;
-(void)beginDryRunSyncWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncDidFailWithError:(id)arg1 ;
-(oneway void)beginSyncWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)serviceName;
-(void)syncDidCompleteSending;
-(void)deviceChanged:(id)arg1 ;
-(BOOL)_pairedSyncFinishedMigrationSyncWithPairingID:(id)arg1 ;
-(id)progressHandler;
-(id)syncSessionForOptions:(id)arg1 supportsMigrationSync:(BOOL)arg2 ;
-(void)performDelegateBlock:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)_pairedSyncFinishedReunionSync;
-(void)exitForTestInput:(id)arg1 ;
-(void)dealloc;
@end


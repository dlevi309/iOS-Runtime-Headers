/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue, _HKXPCExportable;
#import <HealthKit/HealthKit-Structs.h>
@class HKHealthStore, _HKXPCConnection, NSString, NSXPCInterface, NSMutableArray, NSObject;

@interface HKProxyProvider : NSObject {

	HKHealthStore* _strongHealthStore;
	HKHealthStore* _weakHealthStore;
	_HKXPCConnection* _connection;
	NSString* _daemonLaunchNotificationName;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteInterface;
	long long _connectionGeneration;
	BOOL _invalidated;
	/*^block*/id _lock_automaticProxyReconnectionHandler;
	os_unfair_lock_s _lock;
	int _notifyToken;
	NSMutableArray* _pendingFetchContinuations;
	BOOL _shouldRetryOnInterruption;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _proxyIdentifier;
	id<_HKXPCExportable> _exportedObject;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * proxyIdentifier;                         //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<_HKXPCExportable> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (copy) id automaticProxyReconnectionHandler; 
@property (assign) BOOL shouldRetryOnInterruption;                                      //@synthesize shouldRetryOnInterruption=_shouldRetryOnInterruption - In the implementation block
+(id)_relaunchQueue;
-(void)fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(/*^block*/id)clientQueueActionHandlerWithCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)clientQueueObjectHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)_lock_fetchEndpointAndConnectionWithContinuation:(/*^block*/id)arg1 ;
-(void)getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_lock_setUpConnectionWithEndpoint:(id)arg1 ;
-(void)_resetConnectionWithGeneration:(long long)arg1 ;
-(void)_getSynchronousProxyWithErrorCount:(long long)arg1 handler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)automaticProxyReconnectionHandler;
-(void)_lock_flushContinuationsWithConnection:(id)arg1 error:(id)arg2 ;
-(NSString *)proxyIdentifier;
-(void)setAutomaticProxyReconnectionHandler:(id)arg1 ;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldRetryOnInterruption;
-(void)_serverDidFinishLaunching;
-(void)setShouldRetryOnInterruption:(BOOL)arg1 ;
-(void)_fetchRetryingProxyWithErrorCount:(long long)arg1 handler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)referenceHealthStoreWeakly;
-(/*^block*/id)clientQueueProgressHandlerWithHandler:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3 ;
-(void)_getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id<_HKXPCExportable>)exportedObject;
-(void)_handleError:(id)arg1 connectionGeneration:(long long)arg2 ;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 healthStore:(id)arg2 endpointHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteInterface:(id)arg5 ;
-(void)getHealthStoreWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)clientQueueDoubleObjectHandlerWithCompletion:(/*^block*/id)arg1 ;
-(id)description;
-(void)invalidate;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue, _HKXPCExportable;
#import <HealthKit/HealthKit-Structs.h>
@class _HKXPCConnection, NSObject, NSMutableArray, HKHealthStore, NSString;

@interface HKProxyProvider : NSObject {

	_HKXPCConnection* _connection;
	long long _connectionGeneration;
	BOOL _invalidated;
	/*^block*/id _lock_automaticProxyReconnectionHandler;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _clientQueue;
	int _notifyToken;
	NSMutableArray* _pendingFetchContinuations;
	BOOL _shouldRetryOnInterruption;
	HKHealthStore* _healthStore;
	NSString* _proxyIdentifier;
	id<_HKXPCExportable> _exportedObject;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                             //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSString * proxyIdentifier;                              //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<_HKXPCExportable> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (copy) id automaticProxyReconnectionHandler; 
@property (assign) BOOL shouldRetryOnInterruption;                                      //@synthesize shouldRetryOnInterruption=_shouldRetryOnInterruption - In the implementation block
+(id)_relaunchQueue;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id<_HKXPCExportable>)exportedObject;
-(NSString *)proxyIdentifier;
-(HKHealthStore *)healthStore;
-(void)setShouldRetryOnInterruption:(BOOL)arg1 ;
-(void)fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setAutomaticProxyReconnectionHandler:(id)arg1 ;
-(void)_serverDidFinishLaunching;
-(id)automaticProxyReconnectionHandler;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_lock_flushContinuationsWithConnection:(id)arg1 error:(id)arg2 ;
-(void)_fetchRetryingProxyWithErrorCount:(long long)arg1 handler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldRetryOnInterruption;
-(void)_handleError:(id)arg1 connectionGeneration:(long long)arg2 ;
-(void)_lock_fetchEndpointAndConnectionWithContinuation:(/*^block*/id)arg1 ;
-(void)_getSynchronousProxyWithErrorCount:(long long)arg1 handler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_resetConnectionWithGeneration:(long long)arg1 ;
-(void)_lock_setUpConnectionWithEndpoint:(id)arg1 ;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3 ;
-(void)getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSXPCListenerEndpoint;

@interface BTServicesClient : NSObject {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
@end


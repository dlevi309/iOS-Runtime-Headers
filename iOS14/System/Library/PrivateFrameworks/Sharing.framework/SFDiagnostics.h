/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface SFDiagnostics : NSObject {

	BOOL _btUser;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_invalidate;
-(void)bluetoothUserInteraction;
-(void)_show:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticMockStart:(/*^block*/id)arg1 ;
-(void)diagnosticMockStop:(/*^block*/id)arg1 ;
-(void)_logControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)show:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unlockTestClientWithDevice:(id)arg1 ;
-(void)unlockTestServer;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)diagnosticBLEModeWithCompletion:(/*^block*/id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)_ensureXPCStarted;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)bluetoothUserInteraction;
-(void)diagnosticBLEModeWithCompletion:(/*^block*/id)arg1 ;
-(void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticMockStart:(/*^block*/id)arg1 ;
-(void)diagnosticMockStop:(/*^block*/id)arg1 ;
-(void)_logControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_show:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)show:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unlockTestClientWithDevice:(id)arg1 ;
-(void)unlockTestServer;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, SFSession, NSObject, SFDevice;

@interface SFContinuityRemoteSession : NSObject {

	BOOL _activateCalled;
	/*^block*/id _activateHandler;
	BOOL _invalidateCalled;
	NSMutableArray* _messageQueue;
	BOOL _pairVerifyDone;
	BOOL _pairVerifyRunning;
	SFSession* _sfSession;
	BOOL _sfSessionActivated;
	BOOL _started;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	SFDevice* _peerDevice;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
-(void)_run;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SFDevice *)peerDevice;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_sfSessionStart;
-(void)_sendQueuedMesssages;
-(void)_sendCommand:(int)arg1 options:(id)arg2 ;
-(void)sendCommand:(int)arg1 ;
-(void)sendCommand:(int)arg1 options:(id)arg2 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
-(void)dealloc;
@end


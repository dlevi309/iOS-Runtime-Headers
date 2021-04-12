/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
@class CURunLoopThread, NSObject, CUMobileDevice;

@interface CUMobileDeviceSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	CURunLoopThread* _mdRunLoopThread;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CUMobileDevice* _peerDevice;
	/*^block*/id _invalidationHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) CUMobileDevice * peerDevice;                             //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidated;
-(void)activate;
-(void)pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)pairSetupTryPIN:(id)arg1 ;
-(void)_pairSetupTryPIN:(id)arg1 ;
-(void)pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)unpairWithCompletion:(/*^block*/id)arg1 ;
-(void)_unpairWithCompletion:(/*^block*/id)arg1 ;
-(CUMobileDevice *)peerDevice;
-(void)setPeerDevice:(CUMobileDevice *)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
@end


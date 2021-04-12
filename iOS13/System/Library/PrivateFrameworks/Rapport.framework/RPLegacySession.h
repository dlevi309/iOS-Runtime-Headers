/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, CUMobileDeviceSession, NSObject, NSString, RPDevice;

@interface RPLegacySession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableArray* _messageSendQueue;
	BOOL _messagingReady;
	int _pairVerifyState;
	BOOL _secureReady;
	BOOL _mdEnabled;
	CUMobileDeviceSession* _mdSession;
	int _mdState;
	unsigned _securityFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	RPDevice* _peerDevice;
	NSString* _serviceType;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) RPDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (assign,nonatomic) unsigned securityFlags;                                  //@synthesize securityFlags=_securityFlags - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_cleanup;
-(void)_invalidated;
-(void)_sendMessage:(id)arg1 ;
-(void)_run;
-(void)setServiceType:(NSString *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)pairSetupTryPIN:(id)arg1 ;
-(void)_pairSetupTryPIN:(id)arg1 ;
-(void)pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)unpairWithCompletion:(/*^block*/id)arg1 ;
-(void)_unpairWithCompletion:(/*^block*/id)arg1 ;
-(RPDevice *)peerDevice;
-(void)setPeerDevice:(RPDevice *)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(int)_runPairVerify;
-(void)setSecurityFlags:(unsigned)arg1 ;
-(void)requestSystemInfoWithCompletion:(/*^block*/id)arg1 ;
-(int)_runMobileDeviceStart;
-(void)_sendQueuedMessages;
-(unsigned)securityFlags;
@end


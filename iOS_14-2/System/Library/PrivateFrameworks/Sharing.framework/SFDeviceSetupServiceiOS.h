/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class NSUUID, SFClient, NSData, NSString, SFService, SFSession, NSObject, RPFileTransferSession;

@interface SFDeviceSetupServiceiOS : NSObject {

	BOOL _activateCalled;
	BOOL _advertiseFast;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSUUID* _peer;
	BOOL _pinShowing;
	SFClient* _preventExitForLocaleClient;
	NSData* _resumeAuthTag;
	NSString* _resumePassword;
	int _resumeState;
	SFService* _sfService;
	BOOL _sfServiceActivated;
	SFSession* _sfSession;
	BOOL _suspendPending;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RPFileTransferSession* _fileTransferSessionTemplate;
	/*^block*/id _showPINHandlerEx;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;
	/*^block*/id _progressHandlerEx;
	/*^block*/id _receivedObjectHandler;

}

@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                         //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) RPFileTransferSession * fileTransferSessionTemplate;              //@synthesize fileTransferSessionTemplate=_fileTransferSessionTemplate - In the implementation block
@property (nonatomic,copy) id showPINHandlerEx;                                                  //@synthesize showPINHandlerEx=_showPINHandlerEx - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                                    //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                                    //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
@property (nonatomic,copy) id progressHandlerEx;                                                 //@synthesize progressHandlerEx=_progressHandlerEx - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                             //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
-(void)_run;
-(void)_cleanup;
-(id)init;
-(id)showPINHandlerEx;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)completionHandler;
-(void)activate;
-(void)setHidePINHandler:(id)arg1 ;
-(id)receivedObjectHandler;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(void)_invalidated;
-(id)hidePINHandler;
-(void)invalidate;
-(void)_sfServiceStart;
-(void)setShowPINHandler:(id)arg1 ;
-(id)showPINHandler;
-(void)_completed:(int)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(int)_runResumeIfNeeded;
-(void)_handleSessionSecured:(id)arg1 ;
-(void)_handleConfigRequestReceived:(id)arg1 ;
-(void)_handleAppEventReceived:(id)arg1 ;
-(void)_handleSetupActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)sendObject:(id)arg1 ;
-(void)_handleSetupActionSuspend;
-(void)_handleSetupActionResume;
-(void)sendSetupAction:(unsigned)arg1 info:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(RPFileTransferSession *)fileTransferSessionTemplate;
-(void)_handleSessionEnded:(id)arg1 ;
-(id)progressHandlerEx;
-(void)setProgressHandlerEx:(id)arg1 ;
-(void)dealloc;
@end


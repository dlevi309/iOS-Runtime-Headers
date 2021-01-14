/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class BYDeviceSetupSourceSession, NSData, SFDeviceDiscovery, NSString, SFSession, CoreTelephonyClient, CDPContext, CDPStateController, NSObject, RPFileTransferSession, SFDevice;

@interface SFDeviceSetupSessioniOS : NSObject {

	BOOL _activateCalled;
	unsigned _appNextID;
	BOOL _buddyComplete;
	BYDeviceSetupSourceSession* _buddySession;
	BOOL _buddyConfigured;
	BOOL _configRequestSent;
	BOOL _configResponseReceived;
	BOOL _invalidateCalled;
	BOOL _pairSetupDone;
	BOOL _pairSetupReset;
	BOOL _pairSetupRunning;
	int _preAuthPairSetupState;
	BOOL _preAuthRequestSent;
	BOOL _preAuthResponseReceived;
	NSData* _resumeAuthTag;
	SFDeviceDiscovery* _resumeDiscovery;
	NSString* _resumePassword;
	int _resumeState;
	SFSession* _sfSession;
	BOOL _sfSessionActivated;
	CoreTelephonyClient* _eSIMClient;
	BOOL _eSIMSetupEnabled;
	int _eSIMSetupState;
	int _cdpState;
	CDPContext* _cdpContext;
	CDPStateController* _cdpController;
	unsigned _pairFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RPFileTransferSession* _fileTransferSessionTemplate;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	SFDevice* _peerDevice;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _receivedObjectHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                       //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSessionTemplate;              //@synthesize fileTransferSessionTemplate=_fileTransferSessionTemplate - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                             //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                             //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned pairFlags;                                               //@synthesize pairFlags=_pairFlags - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                            //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                 //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                             //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                           //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
-(void)_run;
-(void)_cleanup;
-(void)_completedWithError:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_runSFSessionStart;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(SFDevice *)peerDevice;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)tryPIN:(id)arg1 ;
-(void)activate;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(id)receivedObjectHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)invalidate;
-(id)progressHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(unsigned)pairFlags;
-(void)_handleSetupActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(RPFileTransferSession *)fileTransferSessionTemplate;
-(id)interruptionHandler;
-(int)_runPreAuthPairSetup;
-(void)_sendPreAuthInfo;
-(int)_runESIMSetup;
-(int)_runCoreCDPSetup;
-(void)_sendConfigInfo;
-(int)_runResume;
-(void)_startBuddySession;
-(void)setFileTransferSessionTemplate:(RPFileTransferSession *)arg1 ;
-(void)setPairFlags:(unsigned)arg1 ;
-(void)_runSFSessionActivated;
-(void)_handleBuddyProgress:(id)arg1 ;
-(void)_handleSetupActionSoftwareUpdate;
-(void)_handleSetupPeerSuspended;
-(void)_handleSetupResumeFoundDevice:(id)arg1 ;
-(void)_receivedConfigResponse:(id)arg1 ;
-(void)sendAppEvent:(id)arg1 ;
-(void)dealloc;
@end


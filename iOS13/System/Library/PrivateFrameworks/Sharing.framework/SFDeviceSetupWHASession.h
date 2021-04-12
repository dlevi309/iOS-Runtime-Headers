/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFSession, TRSession, NSMutableArray, TROperationQueue, NSSet, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, NSObject, SFDevice, UIViewController;

@interface SFDeviceSetupWHASession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFSession* _sfSession;
	int _sfSessionState;
	BOOL _sessionSecured;
	int _pairVerifyState;
	int _pairSetupState;
	int _infoExchangeState;
	unsigned long long _peerFeatureFlags;
	unsigned long long _peerProblemsFlags;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	BOOL _trSetupConfigurationEnabled;
	int _trSetupConfigurationState;
	NSSet* _trUnauthServices;
	BOOL _trAuthenticationEnabled;
	int _trAuthenticationState;
	BOOL _cdpEnabled;
	SFDeviceOperationCDPSetup* _cdpSetupOperation;
	double _cdpSetupSecs;
	int _cdpState;
	SFDeviceOperationHomeKitSetup* _homeKitSetup;
	int _homeKitState;
	BOOL _homeKitDoFullSetup;
	int _finishState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	UIViewController* _presentingViewController;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForHomeHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _promptForRoomHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForHomeHandler;                                    //@synthesize promptForHomeHandler=_promptForHomeHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                     //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id promptForRoomHandler;                                    //@synthesize promptForRoomHandler=_promptForRoomHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)_cleanup;
-(UIViewController *)presentingViewController;
-(void)activate;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_run;
-(void)_reportError:(id)arg1 ;
-(void)pairSetupTryPIN:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(int)_runFinish;
-(int)_runSFSessionStart;
-(id)promptForHomeHandler;
-(void)setPromptForHomeHandler:(id)arg1 ;
-(id)promptForRoomHandler;
-(void)setPromptForRoomHandler:(id)arg1 ;
-(int)_runPairVerify;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(int)_runCDPSetup;
-(int)_runHomeKitSetup;
-(int)_runPairSetup;
-(int)_runTRSetupConfiguration;
-(BOOL)_verifyiCloudMatch:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)homeKitSelectHome:(id)arg1 ;
-(void)homeKitSelectRoom:(id)arg1 ;
-(int)_runInfoExchange;
-(void)_runInfoExchangeRequest;
-(void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2 ;
@end


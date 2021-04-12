/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFSession, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, TRSession, NSMutableArray, TROperationQueue, NSObject, NSString, SFDevice, UIViewController;

@interface SFDeviceRepairSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	unsigned long long _startTicks;
	int _preflightWiFiEarlyState;
	int _preflightWiFiState;
	SFSession* _sfSession;
	int _sfSessionState;
	int _pairVerifyState;
	int _getProblemsState;
	unsigned long long _problemFlags;
	BOOL _cdpEnabled;
	SFDeviceOperationCDPSetup* _cdpSetupOperation;
	double _cdpSetupSecs;
	int _cdpState;
	SFDeviceOperationHomeKitSetup* _homeKitSetupOperation;
	int _homeKitSetupState;
	SFDeviceOperationWiFiSetup* _wifiSetupOperation;
	int _wifiSetupState;
	double _wifiSetupSecs;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	int _trAuthenticationState;
	unsigned long long _trAuthenticationStartTicks;
	double _trAuthenticationSecs;
	int _finishState;
	unsigned _repairFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _idsIdentifier;
	SFDevice* _peerDevice;
	UIViewController* _presentingViewController;
	/*^block*/id _progressHandler;
	unsigned long long _triggerMs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsIdentifier;                          //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) unsigned repairFlags;                                     //@synthesize repairFlags=_repairFlags - In the implementation block
@property (assign,nonatomic) unsigned long long triggerMs;                             //@synthesize triggerMs=_triggerMs - In the implementation block
-(void)_run;
-(void)_cleanup;
-(id)init;
-(NSString *)idsIdentifier;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_runSFSessionStart;
-(int)_runPairVerify;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(SFDevice *)peerDevice;
-(void)_reportError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(UIViewController *)presentingViewController;
-(void)activate;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(unsigned)repairFlags;
-(void)setRepairFlags:(unsigned)arg1 ;
-(int)_runPreflightWiFiEarly;
-(int)_runGetProblems;
-(int)_runWiFiSetup;
-(int)_runPreflightWiFiFull;
-(int)_runCDPSetup;
-(int)_runHomeKitSetup;
-(void)setTriggerMs:(unsigned long long)arg1 ;
-(void)invalidate;
-(id)progressHandler;
-(int)_runFinish;
-(void)dealloc;
-(unsigned long long)triggerMs;
@end


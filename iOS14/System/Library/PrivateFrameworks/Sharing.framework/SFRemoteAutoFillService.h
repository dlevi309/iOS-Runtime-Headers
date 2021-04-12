/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFDeviceDiscovery, NSMutableDictionary, NSString, SFService, SFSession, NSData, CUSystemMonitor, NSURL, NSArray, NSObject;

@interface SFRemoteAutoFillService : NSObject {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	SFDeviceDiscovery* _discovery;
	int _discoveryState;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	NSString* _receivedPassword;
	NSString* _receivedUsername;
	BOOL _requestingAutoFill;
	SFService* _service;
	int _serviceState;
	SFSession* _session;
	NSData* _systemBTAddress;
	CUSystemMonitor* _systemMonitor;
	int _systemMonitorState;
	NSURL* _urlForVisualScanning;
	BOOL _unitTesting;
	NSArray* _associatedDomains;
	NSString* _bundleID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _fixedPIN;
	NSString* _localizedAppName;
	NSString* _unlocalizedAppName;
	NSString* _urlString;
	/*^block*/id _errorHandler;
	/*^block*/id _hidePINHandler;
	/*^block*/id _receivedCredentialsHandler;
	/*^block*/id _sessionStartedHandler;
	/*^block*/id _sessionEndedHandler;
	/*^block*/id _showPINHandlerEx;
	/*^block*/id _discoveredDevicesChanged;
	/*^block*/id _urlForVisualScanningChanged;

}

@property (nonatomic,readonly) BOOL needsSetup; 
@property (assign,nonatomic) BOOL unitTesting;                                        //@synthesize unitTesting=_unitTesting - In the implementation block
@property (nonatomic,copy) NSArray * associatedDomains;                               //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * fixedPIN;                                       //@synthesize fixedPIN=_fixedPIN - In the implementation block
@property (nonatomic,copy) NSString * localizedAppName;                               //@synthesize localizedAppName=_localizedAppName - In the implementation block
@property (nonatomic,copy) NSString * unlocalizedAppName;                             //@synthesize unlocalizedAppName=_unlocalizedAppName - In the implementation block
@property (nonatomic,copy) NSString * urlString;                                      //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
@property (nonatomic,copy) id receivedCredentialsHandler;                             //@synthesize receivedCredentialsHandler=_receivedCredentialsHandler - In the implementation block
@property (nonatomic,copy) id sessionStartedHandler;                                  //@synthesize sessionStartedHandler=_sessionStartedHandler - In the implementation block
@property (nonatomic,copy) id sessionEndedHandler;                                    //@synthesize sessionEndedHandler=_sessionEndedHandler - In the implementation block
@property (nonatomic,copy) id showPINHandlerEx;                                       //@synthesize showPINHandlerEx=_showPINHandlerEx - In the implementation block
@property (nonatomic,readonly) unsigned long long discoveredDevices; 
@property (nonatomic,copy) id discoveredDevicesChanged;                               //@synthesize discoveredDevicesChanged=_discoveredDevicesChanged - In the implementation block
@property (nonatomic,copy) id urlForVisualScanningChanged;                            //@synthesize urlForVisualScanningChanged=_urlForVisualScanningChanged - In the implementation block
-(BOOL)unitTesting;
-(void)setUnitTesting:(BOOL)arg1 ;
-(BOOL)needsSetup;
-(NSString *)urlString;
-(id)errorHandler;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)_systemMonitorStart;
-(void)_serviceStart;
-(void)_discoveryStart;
-(int)_readyForAutoFillRequest;
-(void)updateURLForVisualScanning;
-(void)_discoveryFound:(id)arg1 ;
-(void)_discoveryLost:(id)arg1 ;
-(void)_discoveryChanged:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(unsigned long long)discoveredDevices;
-(void)_completedWithError:(id)arg1 ;
-(void)_serviceHidePIN;
-(void)_serviceHandleReceivedRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_serviceSessionStarted:(id)arg1 ;
-(void)_serviceSessionEnded:(id)arg1 withError:(id)arg2 ;
-(void)_serviceHandleReceivedContextRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_serviceHandleReceivedCredentialRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_bluetoothAddressChanged;
-(void)startRequestingAutoFill;
-(void)stopRequestingAutoFill;
-(id)urlForVisualScanning;
-(NSString *)unlocalizedAppName;
-(void)setUnlocalizedAppName:(NSString *)arg1 ;
-(id)receivedCredentialsHandler;
-(void)setReceivedCredentialsHandler:(id)arg1 ;
-(id)discoveredDevicesChanged;
-(void)setDiscoveredDevicesChanged:(id)arg1 ;
-(id)urlForVisualScanningChanged;
-(void)setUrlForVisualScanningChanged:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(id)showPINHandlerEx;
-(void)setLocalizedAppName:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)fixedPIN;
-(void)_activated;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setSessionEndedHandler:(id)arg1 ;
-(id)sessionEndedHandler;
-(NSArray *)associatedDomains;
-(id)sessionStartedHandler;
-(id)description;
-(void)setHidePINHandler:(id)arg1 ;
-(void)setFixedPIN:(NSString *)arg1 ;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(NSString *)bundleID;
-(id)hidePINHandler;
-(void)invalidate;
-(void)setSessionStartedHandler:(id)arg1 ;
-(NSString *)localizedAppName;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(void)dealloc;
@end


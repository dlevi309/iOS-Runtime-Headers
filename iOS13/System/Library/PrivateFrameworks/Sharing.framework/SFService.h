/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSString, NSDictionary, CUAppleIDClient, NSData, NSUUID, NSXPCListenerEndpoint;

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _activateCalled;
	BOOL _activateInProgress;
	BOOL _activateCompleted;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _requestQueue;
	NSMutableDictionary* _sessions;
	LogCategory* _ucatCore;
	LogCategory* _ucatCrypto;
	NSXPCConnection* _xpcCnx;
	unsigned char _deviceActionType;
	BOOL _duetSync;
	BOOL _needsAWDL;
	BOOL _needsKeyboard;
	BOOL _needsSetup;
	BOOL _overrideScreenOff;
	BOOL _pairSetupDisabled;
	BOOL _hasProblem;
	BOOL _supportsAirPlayReceiver;
	BOOL _wakeDevice;
	BOOL _autoUnlockEnabled;
	BOOL _autoUnlockWatch;
	unsigned char _deviceClassCode;
	unsigned char _deviceColorCode;
	unsigned char _deviceModelCode;
	unsigned char _serviceType;
	BOOL _touchRemoteEnabled;
	BOOL _watchLocked;
	BOOL _wifiP2P;
	unsigned _pinType;
	unsigned _sessionFlags;
	long long _advertiseRate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _fixedPIN;
	NSString* _identifier;
	NSString* _label;
	NSDictionary* _pairSetupACL;
	NSDictionary* _pairVerifyACL;
	NSString* _myAppleID;
	CUAppleIDClient* _myAppleIDInfoClient;
	NSString* _peerAppleID;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _showPINHandlerEx;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;
	/*^block*/id _receivedObjectHandler;
	/*^block*/id _receivedRequestHandler;
	/*^block*/id _sessionStartedHandler;
	/*^block*/id _sessionEndedHandler;
	/*^block*/id _sessionSecuredHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _eventMessageHandler;
	/*^block*/id _requestMessageHandler;
	NSData* _authTagOverride;
	/*^block*/id _pairSetupCompletionHandler;
	/*^block*/id _peerDisconnectedHandler;
	unsigned long long _problemFlags;
	/*^block*/id _receivedFramePeerHandler;
	NSString* _requestSSID;
	/*^block*/id _responseMessageInternalHandler;
	/*^block*/id _sendFramePeerHandler;
	NSUUID* _serviceUUID;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (nonatomic,copy) NSData * authTagOverride;                                    //@synthesize authTagOverride=_authTagOverride - In the implementation block
@property (assign,nonatomic) BOOL autoUnlockEnabled;                                    //@synthesize autoUnlockEnabled=_autoUnlockEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoUnlockWatch;                                      //@synthesize autoUnlockWatch=_autoUnlockWatch - In the implementation block
@property (assign,nonatomic) unsigned char deviceClassCode;                             //@synthesize deviceClassCode=_deviceClassCode - In the implementation block
@property (assign,nonatomic) unsigned char deviceColorCode;                             //@synthesize deviceColorCode=_deviceColorCode - In the implementation block
@property (assign,nonatomic) unsigned char deviceModelCode;                             //@synthesize deviceModelCode=_deviceModelCode - In the implementation block
@property (nonatomic,copy) id pairSetupCompletionHandler;                               //@synthesize pairSetupCompletionHandler=_pairSetupCompletionHandler - In the implementation block
@property (nonatomic,copy) id peerDisconnectedHandler;                                  //@synthesize peerDisconnectedHandler=_peerDisconnectedHandler - In the implementation block
@property (assign,nonatomic) unsigned long long problemFlags;                           //@synthesize problemFlags=_problemFlags - In the implementation block
@property (nonatomic,copy) id receivedFramePeerHandler;                                 //@synthesize receivedFramePeerHandler=_receivedFramePeerHandler - In the implementation block
@property (nonatomic,copy) NSString * requestSSID;                                      //@synthesize requestSSID=_requestSSID - In the implementation block
@property (nonatomic,copy) id responseMessageInternalHandler;                           //@synthesize responseMessageInternalHandler=_responseMessageInternalHandler - In the implementation block
@property (nonatomic,copy) id sendFramePeerHandler;                                     //@synthesize sendFramePeerHandler=_sendFramePeerHandler - In the implementation block
@property (assign,nonatomic) unsigned char serviceType;                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSUUID * serviceUUID;                                        //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (assign,nonatomic) BOOL touchRemoteEnabled;                                   //@synthesize touchRemoteEnabled=_touchRemoteEnabled - In the implementation block
@property (assign,nonatomic) BOOL watchLocked;                                          //@synthesize watchLocked=_watchLocked - In the implementation block
@property (assign,nonatomic) BOOL wifiP2P;                                              //@synthesize wifiP2P=_wifiP2P - In the implementation block
@property (assign,nonatomic) long long advertiseRate;                                   //@synthesize advertiseRate=_advertiseRate - In the implementation block
@property (assign,nonatomic) unsigned char deviceActionType;                            //@synthesize deviceActionType=_deviceActionType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL duetSync;                                             //@synthesize duetSync=_duetSync - In the implementation block
@property (nonatomic,copy) NSString * fixedPIN;                                         //@synthesize fixedPIN=_fixedPIN - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL needsAWDL;                                            //@synthesize needsAWDL=_needsAWDL - In the implementation block
@property (assign,nonatomic) BOOL needsKeyboard;                                        //@synthesize needsKeyboard=_needsKeyboard - In the implementation block
@property (assign,nonatomic) BOOL needsSetup;                                           //@synthesize needsSetup=_needsSetup - In the implementation block
@property (assign,nonatomic) BOOL overrideScreenOff;                                    //@synthesize overrideScreenOff=_overrideScreenOff - In the implementation block
@property (nonatomic,copy) NSDictionary * pairSetupACL;                                 //@synthesize pairSetupACL=_pairSetupACL - In the implementation block
@property (assign,nonatomic) BOOL pairSetupDisabled;                                    //@synthesize pairSetupDisabled=_pairSetupDisabled - In the implementation block
@property (nonatomic,copy) NSDictionary * pairVerifyACL;                                //@synthesize pairVerifyACL=_pairVerifyACL - In the implementation block
@property (assign,nonatomic) unsigned pinType;                                          //@synthesize pinType=_pinType - In the implementation block
@property (assign,nonatomic) unsigned sessionFlags;                                     //@synthesize sessionFlags=_sessionFlags - In the implementation block
@property (nonatomic,copy) NSString * myAppleID;                                        //@synthesize myAppleID=_myAppleID - In the implementation block
@property (nonatomic,retain) CUAppleIDClient * myAppleIDInfoClient;                     //@synthesize myAppleIDInfoClient=_myAppleIDInfoClient - In the implementation block
@property (nonatomic,copy) NSString * peerAppleID;                                      //@synthesize peerAppleID=_peerAppleID - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id showPINHandlerEx;                                         //@synthesize showPINHandlerEx=_showPINHandlerEx - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                           //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                           //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                    //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
@property (nonatomic,copy) id receivedRequestHandler;                                   //@synthesize receivedRequestHandler=_receivedRequestHandler - In the implementation block
@property (nonatomic,copy) id sessionStartedHandler;                                    //@synthesize sessionStartedHandler=_sessionStartedHandler - In the implementation block
@property (nonatomic,copy) id sessionEndedHandler;                                      //@synthesize sessionEndedHandler=_sessionEndedHandler - In the implementation block
@property (nonatomic,copy) id sessionSecuredHandler;                                    //@synthesize sessionSecuredHandler=_sessionSecuredHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                             //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id eventMessageHandler;                                      //@synthesize eventMessageHandler=_eventMessageHandler - In the implementation block
@property (assign,nonatomic) BOOL hasProblem;                                           //@synthesize hasProblem=_hasProblem - In the implementation block
@property (nonatomic,copy) id requestMessageHandler;                                    //@synthesize requestMessageHandler=_requestMessageHandler - In the implementation block
@property (assign,nonatomic) BOOL supportsAirPlayReceiver;                              //@synthesize supportsAirPlayReceiver=_supportsAirPlayReceiver - In the implementation block
@property (assign,nonatomic) BOOL wakeDevice;                                           //@synthesize wakeDevice=_wakeDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned char)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)_invalidated;
-(void)_interrupted;
-(void)_activated;
-(void)sendResponse:(id)arg1 ;
-(BOOL)needsSetup;
-(void)sendEvent:(id)arg1 ;
-(unsigned)pinType;
-(void)setPinType:(unsigned)arg1 ;
-(BOOL)hasProblem;
-(void)setServiceType:(unsigned char)arg1 ;
-(void)setPeerAppleID:(NSString *)arg1 ;
-(NSString *)myAppleID;
-(void)setMyAppleID:(NSString *)arg1 ;
-(NSString *)peerAppleID;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureXPCStarted;
-(void)setNeedsAWDL:(BOOL)arg1 ;
-(void)setDeviceActionType:(unsigned char)arg1 ;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSString *)fixedPIN;
-(void)setFixedPIN:(NSString *)arg1 ;
-(CUAppleIDClient *)myAppleIDInfoClient;
-(void)setMyAppleIDInfoClient:(CUAppleIDClient *)arg1 ;
-(id)showPINHandlerEx;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(id)showPINHandler;
-(void)setShowPINHandler:(id)arg1 ;
-(id)hidePINHandler;
-(void)setHidePINHandler:(id)arg1 ;
-(void)serviceError:(id)arg1 ;
-(void)servicePeerDisconnected:(id)arg1 error:(id)arg2 ;
-(void)serviceReceivedEvent:(id)arg1 ;
-(void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3 ;
-(void)serviceReceivedRequest:(id)arg1 ;
-(void)serviceReceivedResponse:(id)arg1 ;
-(void)setNeedsSetup:(BOOL)arg1 ;
-(void)sendToPeer:(id)arg1 flags:(unsigned)arg2 object:(id)arg3 ;
-(unsigned char)deviceActionType;
-(void)setAdvertiseRate:(long long)arg1 ;
-(void)setSessionFlags:(unsigned)arg1 ;
-(void)setPeerDisconnectedHandler:(id)arg1 ;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)setReceivedRequestHandler:(id)arg1 ;
-(void)setSessionStartedHandler:(id)arg1 ;
-(void)setSessionEndedHandler:(id)arg1 ;
-(void)setSessionSecuredHandler:(id)arg1 ;
-(id)sessionStartedHandler;
-(id)sessionEndedHandler;
-(NSString *)requestSSID;
-(BOOL)autoUnlockEnabled;
-(long long)advertiseRate;
-(unsigned)sessionFlags;
-(void)setAutoUnlockEnabled:(BOOL)arg1 ;
-(BOOL)autoUnlockWatch;
-(void)setAutoUnlockWatch:(BOOL)arg1 ;
-(unsigned char)deviceClassCode;
-(void)setDeviceClassCode:(unsigned char)arg1 ;
-(unsigned char)deviceModelCode;
-(BOOL)duetSync;
-(void)setHasProblem:(BOOL)arg1 ;
-(BOOL)needsAWDL;
-(BOOL)needsKeyboard;
-(unsigned long long)problemFlags;
-(void)setRequestSSID:(NSString *)arg1 ;
-(BOOL)wakeDevice;
-(void)setWakeDevice:(BOOL)arg1 ;
-(BOOL)watchLocked;
-(void)setWatchLocked:(BOOL)arg1 ;
-(BOOL)wifiP2P;
-(void)setOverrideScreenOff:(BOOL)arg1 ;
-(BOOL)overrideScreenOff;
-(void)setProblemFlags:(unsigned long long)arg1 ;
-(void)setPairSetupDisabled:(BOOL)arg1 ;
-(void)setTouchRemoteEnabled:(BOOL)arg1 ;
-(void)setPairSetupACL:(NSDictionary *)arg1 ;
-(BOOL)touchRemoteEnabled;
-(void)setAuthTagOverride:(NSData *)arg1 ;
-(void)setPairSetupCompletionHandler:(id)arg1 ;
-(id)receivedObjectHandler;
-(void)sendRequest:(id)arg1 ;
-(void)setEventMessageHandler:(id)arg1 ;
-(void)_performActivateSafeChange:(/*^block*/id)arg1 ;
-(void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3 ;
-(void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3 ;
-(void)setDuetSync:(BOOL)arg1 ;
-(int)setEncryptionReadKey:(const char*)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char*)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5 ;
-(void)clearEncryptionInfoForPeer:(id)arg1 ;
-(void)setNeedsKeyboard:(BOOL)arg1 ;
-(void)updateWithService:(id)arg1 ;
-(void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3 ;
-(void)serviceSessionFailed:(id)arg1 error:(id)arg2 ;
-(NSDictionary *)pairSetupACL;
-(BOOL)pairSetupDisabled;
-(NSDictionary *)pairVerifyACL;
-(void)setPairVerifyACL:(NSDictionary *)arg1 ;
-(id)receivedRequestHandler;
-(id)sessionSecuredHandler;
-(id)eventMessageHandler;
-(id)requestMessageHandler;
-(void)setRequestMessageHandler:(id)arg1 ;
-(BOOL)supportsAirPlayReceiver;
-(void)setSupportsAirPlayReceiver:(BOOL)arg1 ;
-(NSData *)authTagOverride;
-(unsigned char)deviceColorCode;
-(void)setDeviceColorCode:(unsigned char)arg1 ;
-(void)setDeviceModelCode:(unsigned char)arg1 ;
-(id)pairSetupCompletionHandler;
-(id)peerDisconnectedHandler;
-(id)receivedFramePeerHandler;
-(void)setReceivedFramePeerHandler:(id)arg1 ;
-(id)responseMessageInternalHandler;
-(void)setResponseMessageInternalHandler:(id)arg1 ;
-(id)sendFramePeerHandler;
-(void)setSendFramePeerHandler:(id)arg1 ;
-(NSUUID *)serviceUUID;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(void)setWifiP2P:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)autoUnlockWatch;
-(BOOL)duetSync;
-(void)setWatchLocked:(BOOL)arg1 ;
-(void)setRequestSSID:(NSString *)arg1 ;
-(void)setAutoUnlockEnabled:(BOOL)arg1 ;
-(unsigned long long)problemFlags;
-(BOOL)needsSetup;
-(BOOL)wakeDevice;
-(unsigned char)deviceClassCode;
-(NSUUID *)serviceUUID;
-(BOOL)watchLocked;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(BOOL)wifiP2P;
-(void)setNeedsAWDL:(BOOL)arg1 ;
-(NSString *)requestSSID;
-(id)errorHandler;
-(BOOL)needsAWDL;
-(unsigned char)deviceActionType;
-(void)setDeviceClassCode:(unsigned char)arg1 ;
-(void)setWakeDevice:(BOOL)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutoUnlockWatch:(BOOL)arg1 ;
-(BOOL)hasProblem;
-(void)setHasProblem:(BOOL)arg1 ;
-(void)_cleanup;
-(void)sendResponse:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(CUAppleIDClient *)myAppleIDInfoClient;
-(id)sessionSecuredHandler;
-(void)clearEncryptionInfoForPeer:(id)arg1 ;
-(void)setPairSetupDisabled:(BOOL)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)pairVerifyACL;
-(id)init;
-(id)showPINHandlerEx;
-(void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3 ;
-(void)setPairSetupACL:(NSDictionary *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)touchRemoteEnabled;
-(NSString *)fixedPIN;
-(void)setNeedsKeyboard:(BOOL)arg1 ;
-(void)_activated;
-(void)setPeerAppleID:(NSString *)arg1 ;
-(void)setReceivedFramePeerHandler:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)setSupportsAirPlayReceiver:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)receivedFramePeerHandler;
-(void)setMyAppleIDInfoClient:(CUAppleIDClient *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3 ;
-(id)responseMessageInternalHandler;
-(long long)advertiseRate;
-(void)setDeviceActionType:(unsigned char)arg1 ;
-(NSString *)myAppleID;
-(NSDictionary *)pairSetupACL;
-(void)setEventMessageHandler:(id)arg1 ;
-(void)setPeerDisconnectedHandler:(id)arg1 ;
-(void)setSessionEndedHandler:(id)arg1 ;
-(id)sessionEndedHandler;
-(void)setDuetSync:(BOOL)arg1 ;
-(void)_ensureXPCStarted;
-(void)setRequestMessageHandler:(id)arg1 ;
-(void)setResponseMessageInternalHandler:(id)arg1 ;
-(void)setAdvertiseRate:(long long)arg1 ;
-(void)setServiceType:(unsigned char)arg1 ;
-(BOOL)overrideScreenOff;
-(void)serviceReceivedResponse:(id)arg1 ;
-(id)sessionStartedHandler;
-(BOOL)autoUnlockEnabled;
-(void)setTouchRemoteEnabled:(BOOL)arg1 ;
-(NSString *)peerAppleID;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)serviceReceivedEvent:(id)arg1 ;
-(void)setProblemFlags:(unsigned long long)arg1 ;
-(id)description;
-(void)setHidePINHandler:(id)arg1 ;
-(BOOL)needsKeyboard;
-(id)sendFramePeerHandler;
-(id)receivedObjectHandler;
-(BOOL)supportsAirPlayReceiver;
-(unsigned char)deviceColorCode;
-(void)setFixedPIN:(NSString *)arg1 ;
-(void)setPinType:(unsigned)arg1 ;
-(void)_interrupted;
-(id)eventMessageHandler;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)setShowPINHandlerEx:(id)arg1 ;
-(int)setEncryptionReadKey:(const char*)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char*)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5 ;
-(void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3 ;
-(void)setOverrideScreenOff:(BOOL)arg1 ;
-(unsigned char)deviceModelCode;
-(void)_invalidated;
-(void)setNeedsSetup:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)receivedRequestHandler;
-(void)setAuthTagOverride:(NSData *)arg1 ;
-(void)setPairSetupCompletionHandler:(id)arg1 ;
-(id)hidePINHandler;
-(void)setSendFramePeerHandler:(id)arg1 ;
-(NSData *)authTagOverride;
-(void)invalidate;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(void)setReceivedRequestHandler:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)pairSetupCompletionHandler;
-(unsigned)sessionFlags;
-(void)setPairVerifyACL:(NSDictionary *)arg1 ;
-(void)setShowPINHandler:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)identifier;
-(void)setSessionStartedHandler:(id)arg1 ;
-(unsigned char)serviceType;
-(void)setSessionSecuredHandler:(id)arg1 ;
-(void)servicePeerDisconnected:(id)arg1 error:(id)arg2 ;
-(void)updateWithService:(id)arg1 ;
-(id)peerDisconnectedHandler;
-(void)serviceError:(id)arg1 ;
-(void)serviceReceivedRequest:(id)arg1 ;
-(id)invalidationHandler;
-(void)_performActivateSafeChange:(/*^block*/id)arg1 ;
-(void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3 ;
-(BOOL)pairSetupDisabled;
-(id)showPINHandler;
-(id)requestMessageHandler;
-(NSString *)label;
-(void)setMyAppleID:(NSString *)arg1 ;
-(void)serviceSessionFailed:(id)arg1 error:(id)arg2 ;
-(void)setWifiP2P:(BOOL)arg1 ;
-(id)interruptionHandler;
-(void)setSessionFlags:(unsigned)arg1 ;
-(void)setDeviceModelCode:(unsigned char)arg1 ;
-(void)dealloc;
-(void)sendToPeer:(id)arg1 flags:(unsigned)arg2 object:(id)arg3 ;
-(unsigned)pinType;
-(void)setDeviceColorCode:(unsigned char)arg1 ;
@end


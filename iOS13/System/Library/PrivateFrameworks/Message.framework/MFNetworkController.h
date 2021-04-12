/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSLock, NSMutableArray, NSMutableSet, RadiosPreferences, NSObject, CoreTelephonyClient, CXCallObserver, EFObservable, AWDMailNetworkDiagnosticsReport, NSString;

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate, CXCallObserverDelegate> {

	NSLock* _lock;
	CFRunLoopRef _rl;
	NSMutableArray* _observers;
	unsigned _flags;
	BOOL _dns;
	unsigned long long _activeCalls;
	NSMutableSet* _backgroundWifiClients;
	SCPreferencesRef _wiFiPreferences;
	BOOL _hasCellDataCapability;
	BOOL _hasWiFiCapability;
	BOOL _isWiFiEnabled;
	BOOL _isRoamingAllowed;
	BOOL _alternateAdviceState;
	RadiosPreferences* _radiosPreferences;
	NSObject*<OS_dispatch_queue> _prefsQueue;
	int _symptomsToken;
	CoreTelephonyClient* _ctc;
	NSObject*<OS_dispatch_queue> _dataStatusQueue;
	BOOL _cellularDataAvailable;
	SCNetworkReachabilityRef _reachability;
	SCDynamicStoreRef _store;
	CFRunLoopSourceRef _store_source;
	CXCallObserver* _callObserver;
	int _dataIndicator;
	void* _wifiManager;

}

@property (assign,nonatomic) void* wifiManager;                                                           //@synthesize wifiManager=_wifiManager - In the implementation block
@property (readonly) BOOL isDataAvailable; 
@property (readonly) BOOL isNetworkUp; 
@property (readonly) BOOL isFatPipe; 
@property (readonly) BOOL isOnWWAN; 
@property (readonly) BOOL inAirplaneMode; 
@property (readonly) BOOL is3GConnection; 
@property (readonly) BOOL is4GConnection; 
@property (readonly) int dataIndicator;                                                                   //@synthesize dataIndicator=_dataIndicator - In the implementation block
@property (readonly) long long transportType; 
@property (readonly) BOOL hasAlternateAdvice; 
@property (nonatomic,readonly) EFObservable * networkObservable; 
@property (nonatomic,readonly) EFObservable * wifiObservable; 
@property (nonatomic,readonly) AWDMailNetworkDiagnosticsReport * awdNetworkDiagnosticReport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)networkAssertionWithIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(long long)transportType;
-(void)airplaneModeChanged;
-(void*)wifiManager;
-(void)setWifiManager:(void*)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3 ;
-(void)preferredDataSimChanged:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(BOOL)isNetworkUp;
-(id)copyDiagnosticInformation;
-(BOOL)inAirplaneMode;
-(BOOL)isFatPipe;
-(BOOL)is4GConnection;
-(BOOL)is3GConnection;
-(id)copyCarrierBundleValue:(id)arg1 ;
-(BOOL)isOnWWAN;
-(EFObservable *)wifiObservable;
-(id)addNetworkObserverBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_checkKeys:(id)arg1 forStore:(SCDynamicStoreRef)arg2 ;
-(void)_inititializeWifiManager;
-(void)_setupSymptons;
-(void)_setDataStatus_nts:(id)arg1 ;
-(void)_updateActiveCalls;
-(void)_initializeDataStatus;
-(BOOL)_isNetworkUp_nts;
-(int)dataStatus;
-(BOOL)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(BOOL)arg2 ;
-(int)dataIndicator;
-(id)_networkAssertionWithIdentifier:(id)arg1 ;
-(void)removeNetworkObserver:(id)arg1 ;
-(EFObservable *)networkObservable;
-(void)_updateWifiClientType;
-(void)_carrierBundleDidChange;
-(BOOL)isDataAvailable;
-(BOOL)hasAlternateAdvice;
-(void)_setFlags:(unsigned)arg1 forReachability:(SCNetworkReachabilityRef)arg2 ;
-(void)_handleWiFiNotification:(unsigned)arg1 ;
-(void)addBackgroundWifiClient:(id)arg1 ;
-(void)removeBackgroundWifiClient:(id)arg1 ;
-(AWDMailNetworkDiagnosticsReport *)awdNetworkDiagnosticReport;
@end


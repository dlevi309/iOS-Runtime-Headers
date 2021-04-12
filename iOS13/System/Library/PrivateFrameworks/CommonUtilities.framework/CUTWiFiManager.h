/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@protocol OS_dispatch_queue;
#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSMutableSet, NSRecursiveLock, NSHashTable, NSDictionary, NSThread, NSRunLoop, NSObject, NSNumber, NSString;

@interface CUTWiFiManager : NSObject {

	BOOL _shouldAutoAssociateAsForeground;
	BOOL _isHostingHotSpot;
	BOOL _isWifiEnabled;
	BOOL _isWakeOnWiFiEnabled;
	BOOL _isWakeOnWiFiSupported;
	BOOL _isPrimaryCellularCached;
	int _linkToken;
	NSMutableSet* _wiFiAutoAssociationTokens;
	NSRecursiveLock* _lock;
	NSHashTable* _delegateMap;
	NSHashTable* _wowClients;
	void* _currentNetwork;
	void* _wifiManager;
	void* _wifiDevice;
	void* _dynamicStore;
	NSDictionary* _lastWiFiPowerInfo;
	NSThread* _wifiThread;
	CFRunLoopSourceRef _runLoopSource;
	NSRunLoop* _wifiRunLoop;
	NSObject*<OS_dispatch_queue> _incomingCallbacksQueue;

}

@property (nonatomic,retain) NSRecursiveLock * lock;                                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSThread * wifiThread;                                            //@synthesize wifiThread=_wifiThread - In the implementation block
@property (nonatomic,retain) NSRunLoop * wifiRunLoop;                                          //@synthesize wifiRunLoop=_wifiRunLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource;                                 //@synthesize runLoopSource=_runLoopSource - In the implementation block
@property (assign,nonatomic) void* wifiManager;                                                //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) void* wifiDevice;                                                 //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (assign,nonatomic) void* currentNetwork;                                             //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign,nonatomic) void* dynamicStore;                                               //@synthesize dynamicStore=_dynamicStore - In the implementation block
@property (assign,nonatomic) int linkToken;                                                    //@synthesize linkToken=_linkToken - In the implementation block
@property (nonatomic,retain) NSHashTable * delegateMap;                                        //@synthesize delegateMap=_delegateMap - In the implementation block
@property (nonatomic,retain) NSHashTable * wowClients;                                         //@synthesize wowClients=_wowClients - In the implementation block
@property (nonatomic,copy) NSDictionary * lastWiFiPowerInfo;                                   //@synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * wiFiAutoAssociationTokens;                         //@synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> incomingCallbacksQueue;              //@synthesize incomingCallbacksQueue=_incomingCallbacksQueue - In the implementation block
@property (assign) BOOL isPrimaryCellularCached;                                               //@synthesize isPrimaryCellularCached=_isPrimaryCellularCached - In the implementation block
@property (nonatomic,readonly) BOOL isWiFiEnabled;                                             //@synthesize isWifiEnabled=_isWifiEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isWiFiAssociated; 
@property (nonatomic,readonly) BOOL isWiFiCaptive; 
@property (nonatomic,readonly) BOOL isHostingWiFiHotSpot;                                      //@synthesize isHostingHotSpot=_isHostingHotSpot - In the implementation block
@property (nonatomic,readonly) BOOL isWoWSupported;                                            //@synthesize isWakeOnWiFiSupported=_isWakeOnWiFiSupported - In the implementation block
@property (nonatomic,readonly) BOOL isWoWEnabled;                                              //@synthesize isWakeOnWiFiEnabled=_isWakeOnWiFiEnabled - In the implementation block
@property (nonatomic,readonly) BOOL willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) BOOL willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,readonly) NSString * currentSSID; 
@property (assign,nonatomic) BOOL autoAssociateWiFiAsForegroundClient;                         //@synthesize shouldAutoAssociateAsForeground=_shouldAutoAssociateAsForeground - In the implementation block
@property (nonatomic,readonly) BOOL autoAssociateWiFi; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSRecursiveLock *)lock;
-(BOOL)isWiFiEnabled;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)_setupWifiNotifications;
-(void)_createDynamicStore;
-(void)_updateIsWiFiAssociatedAsync:(BOOL)arg1 ;
-(void)_threadedMain;
-(void)_updateInitialWiFiState;
-(void)_performBackgroundInit;
-(void)_adjustWiFiAutoAssociation;
-(void)_handlePotentialDeviceChange:(WiFiDeviceClientRef)arg1 ;
-(void)_adjustWoWState;
-(void)_performDeviceBlock:(/*^block*/id)arg1 useCache:(BOOL)arg2 ;
-(void)_adjustWiFiAutoAssociationLocked;
-(id)_ssidFromNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 withDevice:(WiFiDeviceClientRef)arg2 async:(BOOL)arg3 ;
-(void)setCurrentNetwork:(void*)arg1 ;
-(void)_performDeviceBlock:(/*^block*/id)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 withDevice:(WiFiDeviceClientRef)arg2 ;
-(void)_updateIsWiFiEnabled;
-(void)currentWiFiNetworkPowerUsageWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isWiFiAssociated;
-(double)_wifiMeasurementErrorForInterval:(double)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 ;
-(BOOL)_isPrimaryCellular;
-(BOOL)autoAssociateWiFi;
-(BOOL)autoAssociateWiFiAsForegroundClient;
-(void)addWoWClient:(id)arg1 ;
-(void)removeWoWClient:(id)arg1 ;
-(BOOL)hasWoWClient:(id)arg1 ;
-(BOOL)isHostingWiFiHotSpot;
-(BOOL)willTryToAutoAssociateWiFiNetwork;
-(BOOL)willTryToSearchForWiFiNetwork;
-(NSNumber *)wiFiSignalStrength;
-(NSNumber *)wiFiScaledRSSI;
-(NSNumber *)wiFiScaledRate;
-(void)_handleDevicePowerCallback;
-(void)_handleDeviceAttachedCallback;
-(void)_setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performPowerReading;
-(NSString *)currentSSID;
-(BOOL)isWiFiCaptive;
-(BOOL)hasWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(BOOL)isWoWEnabled;
-(void)setAutoAssociateWiFiAsForegroundClient:(BOOL)arg1 ;
-(BOOL)isWoWSupported;
-(NSMutableSet *)wiFiAutoAssociationTokens;
-(void)setWiFiAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(NSHashTable *)delegateMap;
-(void)setDelegateMap:(NSHashTable *)arg1 ;
-(NSHashTable *)wowClients;
-(void)setWowClients:(NSHashTable *)arg1 ;
-(void*)currentNetwork;
-(int)linkToken;
-(void)setLinkToken:(int)arg1 ;
-(void*)wifiManager;
-(void)setWifiManager:(void*)arg1 ;
-(void*)wifiDevice;
-(void)setWifiDevice:(void*)arg1 ;
-(void*)dynamicStore;
-(void)setDynamicStore:(void*)arg1 ;
-(NSDictionary *)lastWiFiPowerInfo;
-(void)setLastWiFiPowerInfo:(NSDictionary *)arg1 ;
-(NSThread *)wifiThread;
-(void)setWifiThread:(NSThread *)arg1 ;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(NSRunLoop *)wifiRunLoop;
-(void)setWifiRunLoop:(NSRunLoop *)arg1 ;
-(NSObject*<OS_dispatch_queue>)incomingCallbacksQueue;
-(void)setIncomingCallbacksQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isPrimaryCellularCached;
-(void)setIsPrimaryCellularCached:(BOOL)arg1 ;
@end


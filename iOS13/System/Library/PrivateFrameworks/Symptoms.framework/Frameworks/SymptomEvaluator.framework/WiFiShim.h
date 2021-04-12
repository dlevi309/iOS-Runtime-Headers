/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol WiFiShimDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSDictionary, NSString;

@interface WiFiShim : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	WiFiDeviceClientRef _awdlDevice;
	BOOL _registeredForCallbacks;
	unsigned char _lqmCallbackRegistrationAttempts;
	id _tdObserver;
	BOOL _awdlLinkUp;
	BOOL _monitorBradycardia;
	unsigned char _lqmCallbacks;
	unsigned char _lqmCallbackThreshold;
	unsigned char _lqmBradycardia;
	BOOL _registeredForLQMCallbacks;
	BOOL _hasAssociation;
	BOOL _apIsAwake;
	BOOL _lqmCallbackBradycardiaTimerResumed;
	char _awdlLinkState;
	int _lqmEventInterval;
	id<WiFiShimDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _lqmCallbackBradycardiaTimer;
	double _lqmBradycardiaLastCalled;
	NSDictionary* _awdlStateDict;
	NSObject*<OS_dispatch_source> _awdlTimer;
	long long _awdlTimerCount;
	NSString* _lastSsid;
	NSString* _lastBssid;

}

@property (assign,nonatomic) unsigned char lqmCallbacks;                                             //@synthesize lqmCallbacks=_lqmCallbacks - In the implementation block
@property (assign,nonatomic) unsigned char lqmCallbackThreshold;                                     //@synthesize lqmCallbackThreshold=_lqmCallbackThreshold - In the implementation block
@property (assign,nonatomic) unsigned char lqmBradycardia;                                           //@synthesize lqmBradycardia=_lqmBradycardia - In the implementation block
@property (assign,nonatomic) int lqmEventInterval;                                                   //@synthesize lqmEventInterval=_lqmEventInterval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL registeredForLQMCallbacks;                                         //@synthesize registeredForLQMCallbacks=_registeredForLQMCallbacks - In the implementation block
@property (assign,nonatomic) BOOL hasAssociation;                                                    //@synthesize hasAssociation=_hasAssociation - In the implementation block
@property (assign,nonatomic) BOOL apIsAwake;                                                         //@synthesize apIsAwake=_apIsAwake - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> lqmCallbackBradycardiaTimer;              //@synthesize lqmCallbackBradycardiaTimer=_lqmCallbackBradycardiaTimer - In the implementation block
@property (assign,nonatomic) BOOL lqmCallbackBradycardiaTimerResumed;                                //@synthesize lqmCallbackBradycardiaTimerResumed=_lqmCallbackBradycardiaTimerResumed - In the implementation block
@property (assign,nonatomic) double lqmBradycardiaLastCalled;                                        //@synthesize lqmBradycardiaLastCalled=_lqmBradycardiaLastCalled - In the implementation block
@property (nonatomic,retain) NSDictionary * awdlStateDict;                                           //@synthesize awdlStateDict=_awdlStateDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> awdlTimer;                                //@synthesize awdlTimer=_awdlTimer - In the implementation block
@property (assign,nonatomic) long long awdlTimerCount;                                               //@synthesize awdlTimerCount=_awdlTimerCount - In the implementation block
@property (assign,nonatomic) char awdlLinkState;                                                     //@synthesize awdlLinkState=_awdlLinkState - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef awdlDevice;                                         //@synthesize awdlDevice=_awdlDevice - In the implementation block
@property (nonatomic,retain) NSString * lastSsid;                                                    //@synthesize lastSsid=_lastSsid - In the implementation block
@property (nonatomic,retain) NSString * lastBssid;                                                   //@synthesize lastBssid=_lastBssid - In the implementation block
@property (nonatomic,retain) id<WiFiShimDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL awdlLinkUp;                                                                //@synthesize awdlLinkUp=_awdlLinkUp - In the implementation block
@property (assign,nonatomic) BOOL monitorBradycardia;                                                //@synthesize monitorBradycardia=_monitorBradycardia - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<WiFiShimDelegate>)delegate;
-(void)setDelegate:(id<WiFiShimDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WiFiManagerClientRef)wifiManager;
-(WiFiDeviceClientRef)wifiDevice;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setMonitorBradycardia:(BOOL)arg1 ;
-(void)_triggerDisconnectEdge:(id)arg1 ;
-(BOOL)toggleLQMIntervalOn:(id)arg1 toFast:(BOOL)arg2 ;
-(id)ssidForInterfaceWithName:(id)arg1 ;
-(id)bssidForInterfaceWithName:(id)arg1 ;
-(long long)phyModeForInterfaceWithName:(id)arg1 ;
-(BOOL)isHotSpotOnInterfaceWithName:(id)arg1 ;
-(id)getAWDLPeerList;
-(void)registerForCallbacks;
-(void)unregisterForCallbacks;
-(void)setLastSsid:(NSString *)arg1 ;
-(void)setLastBssid:(NSString *)arg1 ;
-(void)_setLQMEventInterval:(int)arg1 ;
-(void)changeLQMBradycardiaMonitoring;
-(void)_unregisterForLQMCallbacks;
-(void)setAWDLDevice:(WiFiDeviceClientRef)arg1 ;
-(void)checkForLQMCallbackRegistration;
-(BOOL)_shouldRegisterForLQMCallbacks;
-(void)_registerForLQMCallbacks;
-(void)setAwdlStateDict:(NSDictionary *)arg1 ;
-(char)awdlLinkState;
-(void)setAwdlLinkState:(char)arg1 ;
-(void)_setAWDLLinkUp:(BOOL)arg1 ;
-(id)awdlPeerList;
-(NSDictionary *)awdlStateDict;
-(NSString *)lastSsid;
-(NSString *)lastBssid;
-(BOOL)hasAssociation;
-(void)setHasAssociation:(BOOL)arg1 ;
-(void)resumeLQMCallbackBradycardiaMonitoring;
-(void)suspendLQMCallbackBradycardiaMonitoring;
-(BOOL)monitorBradycardia;
-(unsigned char)lqmCallbacks;
-(void)setLqmCallbacks:(unsigned char)arg1 ;
-(void)_wifiDevicesRefresh;
-(void)_delayedRegisterForLQMCallbacks;
-(void)handleAWDLStateChange:(id)arg1 ;
-(WiFiDeviceClientRef)awdlDevice;
-(BOOL)awdlLinkUp;
-(unsigned char)lqmCallbackThreshold;
-(void)setLqmCallbackThreshold:(unsigned char)arg1 ;
-(unsigned char)lqmBradycardia;
-(void)setLqmBradycardia:(unsigned char)arg1 ;
-(int)lqmEventInterval;
-(void)setLqmEventInterval:(int)arg1 ;
-(BOOL)registeredForLQMCallbacks;
-(void)setRegisteredForLQMCallbacks:(BOOL)arg1 ;
-(BOOL)apIsAwake;
-(void)setApIsAwake:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)lqmCallbackBradycardiaTimer;
-(void)setLqmCallbackBradycardiaTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)lqmCallbackBradycardiaTimerResumed;
-(void)setLqmCallbackBradycardiaTimerResumed:(BOOL)arg1 ;
-(double)lqmBradycardiaLastCalled;
-(void)setLqmBradycardiaLastCalled:(double)arg1 ;
-(NSObject*<OS_dispatch_source>)awdlTimer;
-(void)setAwdlTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)awdlTimerCount;
-(void)setAwdlTimerCount:(long long)arg1 ;
-(void)setAwdlDevice:(WiFiDeviceClientRef)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	double _lqmCallbackLastRegistered;
	id _tdObserver;
	BOOL _awdlLinkUp;
	BOOL _monitorLQMBradycardia;
	unsigned char _lqmCallbacks;
	unsigned char _lqmCallbackThreshold;
	unsigned char _lqmBradycardia;
	BOOL _hasAssociation;
	BOOL _apIsAwake;
	BOOL _lqmCallbackTimerResumed;
	char _awdlLinkState;
	int _lqmEventInterval;
	id<WiFiShimDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _lqmCallbackTimer;
	double _lqmBradycardiaLastCalled;
	double _lqmAsystoleLastCalled;
	double _lqmCallbackLastTimestamp;
	NSDictionary* _awdlStateDict;
	NSObject*<OS_dispatch_source> _awdlTimer;
	long long _awdlTimerCount;
	NSString* _lastSsid;
	NSString* _lastBssid;

}

@property (assign,nonatomic) unsigned char lqmCallbacks;                                  //@synthesize lqmCallbacks=_lqmCallbacks - In the implementation block
@property (assign,nonatomic) unsigned char lqmCallbackThreshold;                          //@synthesize lqmCallbackThreshold=_lqmCallbackThreshold - In the implementation block
@property (assign,nonatomic) unsigned char lqmBradycardia;                                //@synthesize lqmBradycardia=_lqmBradycardia - In the implementation block
@property (assign,nonatomic) int lqmEventInterval;                                        //@synthesize lqmEventInterval=_lqmEventInterval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL hasAssociation;                                         //@synthesize hasAssociation=_hasAssociation - In the implementation block
@property (assign,nonatomic) BOOL apIsAwake;                                              //@synthesize apIsAwake=_apIsAwake - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> lqmCallbackTimer;              //@synthesize lqmCallbackTimer=_lqmCallbackTimer - In the implementation block
@property (assign,nonatomic) BOOL lqmCallbackTimerResumed;                                //@synthesize lqmCallbackTimerResumed=_lqmCallbackTimerResumed - In the implementation block
@property (assign,nonatomic) double lqmBradycardiaLastCalled;                             //@synthesize lqmBradycardiaLastCalled=_lqmBradycardiaLastCalled - In the implementation block
@property (assign,nonatomic) double lqmAsystoleLastCalled;                                //@synthesize lqmAsystoleLastCalled=_lqmAsystoleLastCalled - In the implementation block
@property (assign,nonatomic) double lqmCallbackLastTimestamp;                             //@synthesize lqmCallbackLastTimestamp=_lqmCallbackLastTimestamp - In the implementation block
@property (nonatomic,retain) NSDictionary * awdlStateDict;                                //@synthesize awdlStateDict=_awdlStateDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> awdlTimer;                     //@synthesize awdlTimer=_awdlTimer - In the implementation block
@property (assign,nonatomic) long long awdlTimerCount;                                    //@synthesize awdlTimerCount=_awdlTimerCount - In the implementation block
@property (assign,nonatomic) char awdlLinkState;                                          //@synthesize awdlLinkState=_awdlLinkState - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef awdlDevice;                              //@synthesize awdlDevice=_awdlDevice - In the implementation block
@property (nonatomic,retain) NSString * lastSsid;                                         //@synthesize lastSsid=_lastSsid - In the implementation block
@property (nonatomic,retain) NSString * lastBssid;                                        //@synthesize lastBssid=_lastBssid - In the implementation block
@property (nonatomic,retain) id<WiFiShimDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL awdlLinkUp;                                                     //@synthesize awdlLinkUp=_awdlLinkUp - In the implementation block
@property (assign,nonatomic) BOOL monitorLQMBradycardia;                                  //@synthesize monitorLQMBradycardia=_monitorLQMBradycardia - In the implementation block
+(id)sharedInstance;
-(char)awdlLinkState;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAwdlTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(WiFiManagerClientRef)wifiManager;
-(void)_setLQMEventInterval:(int)arg1 ;
-(void)setLqmCallbackTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned char)lqmBradycardia;
-(void)setLqmEventInterval:(int)arg1 ;
-(id)init;
-(id<WiFiShimDelegate>)delegate;
-(double)lqmAsystoleLastCalled;
-(BOOL)toggleLQMIntervalOn:(id)arg1 toFast:(BOOL)arg2 ;
-(void)checkForLQMBradycardia;
-(void)checkForLQMAsystole;
-(void)resumeLQMCallbackMonitoring;
-(id)bssidForInterfaceWithName:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)awdlTimer;
-(void)suspendLQMCallbackMonitoring;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setLqmBradycardia:(unsigned char)arg1 ;
-(void)setAwdlStateDict:(NSDictionary *)arg1 ;
-(long long)awdlTimerCount;
-(void)setAwdlTimerCount:(long long)arg1 ;
-(void)setLqmBradycardiaLastCalled:(double)arg1 ;
-(void)setLqmAsystoleLastCalled:(double)arg1 ;
-(void)setDelegate:(id<WiFiShimDelegate>)arg1 ;
-(id)getAWDLPeerList;
-(void)_setAWDLLinkUp:(BOOL)arg1 ;
-(void)handleAWDLStateChange:(id)arg1 ;
-(NSString *)lastBssid;
-(void)setAwdlDevice:(WiFiDeviceClientRef)arg1 ;
-(BOOL)hasAssociation;
-(BOOL)monitorLQMBradycardia;
-(void)setLastBssid:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_source>)lqmCallbackTimer;
-(BOOL)awdlLinkUp;
-(void)setMonitorLQMBradycardia:(BOOL)arg1 ;
-(void)setLastSsid:(NSString *)arg1 ;
-(id)ssidForInterfaceWithName:(id)arg1 ;
-(void)checkForLQMCallbackRegistration;
-(void)setApIsAwake:(BOOL)arg1 ;
-(BOOL)apIsAwake;
-(void)setLqmCallbackThreshold:(unsigned char)arg1 ;
-(void)processAsystoleDeclaration;
-(BOOL)_shouldRegisterForLQMCallbacks;
-(void)setLqmCallbacks:(unsigned char)arg1 ;
-(void)setLqmCallbackTimerResumed:(BOOL)arg1 ;
-(void)changeLQMMonitoring;
-(unsigned char)lqmCallbacks;
-(id)awdlPeerList;
-(void)_triggerDisconnectEdge:(id)arg1 ;
-(double)lqmBradycardiaLastCalled;
-(void)_unregisterForLQMCallbacks;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_registerForLQMCallbacks;
-(unsigned char)lqmCallbackThreshold;
-(long long)phyModeForInterfaceWithName:(id)arg1 ;
-(BOOL)isHotSpotOnInterfaceWithName:(id)arg1 ;
-(int)lqmEventInterval;
-(void)setAWDLDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setAwdlLinkState:(char)arg1 ;
-(void)registerForCallbacks;
-(NSDictionary *)awdlStateDict;
-(void)unregisterForCallbacks;
-(void)setLqmCallbackLastTimestamp:(double)arg1 ;
-(BOOL)lqmCallbackTimerResumed;
-(double)lqmCallbackLastTimestamp;
-(void)_delayedRegisterForLQMCallbacks;
-(WiFiDeviceClientRef)awdlDevice;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_wifiDevicesRefresh;
-(WiFiDeviceClientRef)wifiDevice;
-(void)setHasAssociation:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)lastSsid;
@end


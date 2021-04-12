/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_dispatch_source;
@class NWMonitor, NWPathEvaluator, BKSApplicationStateMonitor, NSMutableDictionary, NSObject;

@interface NWSystemPathMonitor : NSObject {

	BOOL _wifiPrimary;
	BOOL _ethernetPrimary;
	BOOL _vpnActive;
	int _vpnNotifyToken;
	NWMonitor* _vpnMonitor;
	NWPathEvaluator* _primaryEvaluator;
	BKSApplicationStateMonitor* _applicationMonitor;
	NSMutableDictionary* _perAppVPNEvaluators;
	NSObject*<OS_dispatch_source> _smoothingTimer;
	void* _fallbackWatcher;
	NSObject*<OS_dispatch_source> _mptcpWatcher;

}

@property (retain) NWMonitor * vpnMonitor;                                               //@synthesize vpnMonitor=_vpnMonitor - In the implementation block
@property (retain) NWPathEvaluator * primaryEvaluator;                                   //@synthesize primaryEvaluator=_primaryEvaluator - In the implementation block
@property (assign) int vpnNotifyToken;                                                   //@synthesize vpnNotifyToken=_vpnNotifyToken - In the implementation block
@property (retain) BKSApplicationStateMonitor * applicationMonitor;                      //@synthesize applicationMonitor=_applicationMonitor - In the implementation block
@property (retain) NSMutableDictionary * perAppVPNEvaluators;                            //@synthesize perAppVPNEvaluators=_perAppVPNEvaluators - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> smoothingTimer;                         //@synthesize smoothingTimer=_smoothingTimer - In the implementation block
@property (assign) void* fallbackWatcher;                                                //@synthesize fallbackWatcher=_fallbackWatcher - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> mptcpWatcher;                           //@synthesize mptcpWatcher=_mptcpWatcher - In the implementation block
@property (assign,getter=isVPNActive,nonatomic) BOOL vpnActive;                          //@synthesize vpnActive=_vpnActive - In the implementation block
@property (assign,getter=isWiFiPrimary,nonatomic) BOOL wifiPrimary;                      //@synthesize wifiPrimary=_wifiPrimary - In the implementation block
@property (assign,getter=isEthernetPrimary,nonatomic) BOOL ethernetPrimary;              //@synthesize ethernetPrimary=_ethernetPrimary - In the implementation block
+(id)sharedSystemPathMonitor;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setVpnActive:(BOOL)arg1 ;
-(void)stopWatchingApplicationStates;
-(void)setWifiPrimary:(BOOL)arg1 ;
-(id)init;
-(NWMonitor *)vpnMonitor;
-(void)setSmoothingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)mptcpWatcher;
-(BOOL)isWiFiPrimary;
-(NSObject*<OS_dispatch_source>)smoothingTimer;
-(void)updateVPNMonitor;
-(NWPathEvaluator *)primaryEvaluator;
-(void)setApplicationMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)setEthernetPrimary:(BOOL)arg1 ;
-(void)setPerAppVPNEvaluators:(NSMutableDictionary *)arg1 ;
-(void)eventFired;
-(NSMutableDictionary *)perAppVPNEvaluators;
-(void)setVpnMonitor:(NWMonitor *)arg1 ;
-(void)setPrimaryEvaluator:(NWPathEvaluator *)arg1 ;
-(BOOL)isVPNActive;
-(void)startWatchingApplicationStates;
-(BKSApplicationStateMonitor *)applicationMonitor;
-(void)setFallbackWatcher:(void*)arg1 ;
-(void)registerForVPNNotifications;
-(void)updateFlags;
-(void*)fallbackWatcher;
-(void)appStateChangedWithUserInfo:(id)arg1 ;
-(void)setMptcpWatcher:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)vpnNotifyToken;
-(void)setVpnNotifyToken:(int)arg1 ;
-(BOOL)isEthernetPrimary;
-(void)dealloc;
@end


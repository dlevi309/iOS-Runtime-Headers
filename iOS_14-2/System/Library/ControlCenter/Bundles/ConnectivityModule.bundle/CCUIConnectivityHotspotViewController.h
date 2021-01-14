/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class WFPersonalHotspotStateMonitor, NSString;

@interface CCUIConnectivityHotspotViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver> {

	BOOL _available;
	BOOL _discoverable;
	unsigned _connections;
	WFPersonalHotspotStateMonitor* _phStateMonitor;

}

@property (retain) WFPersonalHotspotStateMonitor * phStateMonitor;              //@synthesize phStateMonitor=_phStateMonitor - In the implementation block
@property (getter=isAvailable) BOOL available;                                  //@synthesize available=_available - In the implementation block
@property (getter=isDiscoverable) BOOL discoverable;                            //@synthesize discoverable=_discoverable - In the implementation block
@property (assign) unsigned connections;                                        //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isDiscoverable;
-(void)setConnections:(unsigned)arg1 ;
-(BOOL)_toggleState;
-(BOOL)isAvailable;
-(void)buttonTapped:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_setGlobalServiceState:(int)arg1 ;
-(WFPersonalHotspotStateMonitor *)phStateMonitor;
-(id)init;
-(unsigned)connections;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_hostAPStateChanged;
-(void)_updateState;
-(void)startObservingStateChanges;
-(id)subtitleText;
-(void)stopObservingStateChanges;
-(BOOL)_canShowWhileLocked;
-(void)_updateDiscoverability;
-(void)setPhStateMonitor:(WFPersonalHotspotStateMonitor *)arg1 ;
-(BOOL)_isCellularDataEnabled;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_networkTetheringStateChanged;
-(id)displayName;
-(BOOL)_isHotSpotRestricted;
-(void)setDiscoverable:(BOOL)arg1 ;
@end


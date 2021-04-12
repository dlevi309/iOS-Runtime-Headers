/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)displayName;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateState;
-(void)buttonTapped:(id)arg1 ;
-(unsigned)connections;
-(void)setConnections:(unsigned)arg1 ;
-(id)subtitleText;
-(BOOL)_toggleState;
-(BOOL)isDiscoverable;
-(void)setDiscoverable:(BOOL)arg1 ;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(void)_updateDiscoverability;
-(void)_setGlobalServiceState:(int)arg1 ;
-(BOOL)_isCellularDataEnabled;
-(BOOL)_isHotSpotRestricted;
-(void)_networkTetheringStateChanged;
-(void)_hostAPStateChanged;
-(WFPersonalHotspotStateMonitor *)phStateMonitor;
-(void)setPhStateMonitor:(WFPersonalHotspotStateMonitor *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class WFWiFiStateMonitor, WFClient, CBCentralManager, NSObject, NSString;

@interface _TVRUINetworkObserver : NSObject <CBCentralManagerDelegate> {

	/*^block*/id _reachabilityDidUpdate;
	WFWiFiStateMonitor* _wifiStateMonitor;
	WFClient* _wifiClient;
	CBCentralManager* _bluetoothManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) WFWiFiStateMonitor * wifiStateMonitor;              //@synthesize wifiStateMonitor=_wifiStateMonitor - In the implementation block
@property (nonatomic,retain) WFClient * wifiClient;                              //@synthesize wifiClient=_wifiClient - In the implementation block
@property (nonatomic,retain) CBCentralManager * bluetoothManager;                //@synthesize bluetoothManager=_bluetoothManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id reachabilityDidUpdate;                             //@synthesize reachabilityDidUpdate=_reachabilityDidUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startObserving;
-(void)stopObserving;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(id)init;
-(void)setBluetoothManager:(CBCentralManager *)arg1 ;
-(void)setWifiClient:(WFClient *)arg1 ;
-(BOOL)_isNetworkReachable;
-(CBCentralManager *)bluetoothManager;
-(WFClient *)wifiClient;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setReachabilityDidUpdate:(id)arg1 ;
-(WFWiFiStateMonitor *)wifiStateMonitor;
-(void)_wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2 ;
-(void)setWifiStateMonitor:(WFWiFiStateMonitor *)arg1 ;
-(void)_updateNetworkReachability:(BOOL)arg1 ;
-(id)reachabilityDidUpdate;
@end


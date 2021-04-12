/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class NSString, WFIPMonitor, NSSet, WFNetworkScanRecord, NSObject, NSOperationQueue, NSArray, NSNumber, NSThread, NSRunLoop, WFClient;

@interface WFInterface : NSObject {

	BOOL _ipv4SelfAssigned;
	BOOL _hasNoGatewayIP;
	BOOL _currentNetworkIsDirected;
	BOOL _monitoringEvents;
	BOOL _scanning;
	int _ipState;
	NSString* _interfaceName;
	WFIPMonitor* _ipMonitor;
	NSSet* _currentNetworkIssues;
	WFNetworkScanRecord* _currentNetwork;
	NSObject*<OS_dispatch_queue> _currentNetworkQueue;
	NSObject*<OS_dispatch_queue> _scanQueueDispatchQueue;
	WiFiDeviceClientRef _device;
	NSOperationQueue* _gasQueue;
	NSOperationQueue* _scanQueue;
	NSOperationQueue* _joinQueue;
	NSArray* _deviceScanChannels;
	NSNumber* _rssiThreshold;
	NSThread* _callbackThread;
	NSRunLoop* _callbackRunLoop;
	WFClient* _wifiClient;

}

@property (nonatomic,retain) NSSet * currentNetworkIssues;                                     //@synthesize currentNetworkIssues=_currentNetworkIssues - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * currentNetwork;                             //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                           //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) WFIPMonitor * ipMonitor;                                          //@synthesize ipMonitor=_ipMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> currentNetworkQueue;                 //@synthesize currentNetworkQueue=_currentNetworkQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> scanQueueDispatchQueue;              //@synthesize scanQueueDispatchQueue=_scanQueueDispatchQueue - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                                       //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSOperationQueue * gasQueue;                                      //@synthesize gasQueue=_gasQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * scanQueue;                                     //@synthesize scanQueue=_scanQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * joinQueue;                                     //@synthesize joinQueue=_joinQueue - In the implementation block
@property (nonatomic,retain) NSArray * deviceScanChannels;                                     //@synthesize deviceScanChannels=_deviceScanChannels - In the implementation block
@property (assign,nonatomic) NSNumber * rssiThreshold;                                         //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) int ipState;                                                      //@synthesize ipState=_ipState - In the implementation block
@property (assign,nonatomic) BOOL ipv4SelfAssigned;                                            //@synthesize ipv4SelfAssigned=_ipv4SelfAssigned - In the implementation block
@property (assign,nonatomic) BOOL hasNoGatewayIP;                                              //@synthesize hasNoGatewayIP=_hasNoGatewayIP - In the implementation block
@property (assign,nonatomic) BOOL currentNetworkIsDirected;                                    //@synthesize currentNetworkIsDirected=_currentNetworkIsDirected - In the implementation block
@property (nonatomic,retain) NSThread * callbackThread;                                        //@synthesize callbackThread=_callbackThread - In the implementation block
@property (nonatomic,retain) NSRunLoop * callbackRunLoop;                                      //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (assign) BOOL monitoringEvents;                                                      //@synthesize monitoringEvents=_monitoringEvents - In the implementation block
@property (assign) BOOL scanning;                                                              //@synthesize scanning=_scanning - In the implementation block
@property (assign,nonatomic,__weak) WFClient * wifiClient;                                     //@synthesize wifiClient=_wifiClient - In the implementation block
-(id)initWithDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setCurrentNetwork:(WFNetworkScanRecord *)arg1 ;
-(void)setScanning:(BOOL)arg1 ;
-(NSNumber *)rssiThreshold;
-(void)setCurrentNetworkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(WFIPMonitor *)ipMonitor;
-(NSOperationQueue *)scanQueue;
-(WFNetworkScanRecord *)currentNetwork;
-(BOOL)scanning;
-(void)setRssiThreshold:(NSNumber *)arg1 ;
-(NSObject*<OS_dispatch_queue>)currentNetworkQueue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(void)_linkQualityChanged:(id)arg1 ;
-(NSOperationQueue *)joinQueue;
-(void)setIpState:(int)arg1 ;
-(BOOL)monitoringEvents;
-(void)disassociateFromCarPlayUserConfiguredNetwork;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(void)setHasNoGatewayIP:(BOOL)arg1 ;
-(NSRunLoop *)callbackRunLoop;
-(NSThread *)callbackThread;
-(void)setIpv4SelfAssigned:(BOOL)arg1 ;
-(void)_startMonitoringWiFiEvents;
-(void)_currentNetworkDidChangeWithReason:(unsigned long long)arg1 previousNetwork:(id)arg2 ;
-(void)_linkChangedWithInfo:(id)arg1 ;
-(void)cancelAllScans;
-(void)setIpMonitor:(WFIPMonitor *)arg1 ;
-(void)setDeviceScanChannels:(NSArray *)arg1 ;
-(void)_updateCurrentNetworkWithNetwork:(WiFiNetworkRef)arg1 forceUpdateNetwork:(BOOL)arg2 callback:(/*^block*/id)arg3 userInfo:(id)arg4 ;
-(void)asyncAssociateToNetwork:(id)arg1 profile:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setScanQueue:(NSOperationQueue *)arg1 ;
-(void)setWifiClient:(WFClient *)arg1 ;
-(NSString *)interfaceName;
-(WiFiDeviceClientRef)device;
-(id)_debugLQMString:(id)arg1 ;
-(void)disassociateFromCurrentNetwork;
-(void)setCurrentNetworkIssues:(NSSet *)arg1 ;
-(void)asyncHS20Supported:(/*^block*/id)arg1 ;
-(void)setMonitoringEvents:(BOOL)arg1 ;
-(BOOL)currentNetworkIsDirected;
-(void)setJoinQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)gasQueue;
-(void)asyncAssociateToNetwork:(id)arg1 password:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_updateCurrentNetworkWithNetwork:(WiFiNetworkRef)arg1 callback:(/*^block*/id)arg2 ;
-(WFClient *)wifiClient;
-(BOOL)ipv4SelfAssigned;
-(void)_startScanOperation:(id)arg1 ;
-(void)_resetCurrentNetworkStates;
-(void)asyncCurrentNetwork:(/*^block*/id)arg1 ;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)notifyNoNetworksFound;
-(void)setGasQueue:(NSOperationQueue *)arg1 ;
-(NSSet *)currentNetworkIssues;
-(void)_wifiScanComplete:(id)arg1 error:(int)arg2 ;
-(void)setScanQueueDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)_hostAPStateDidChange:(id)arg1 ;
-(BOOL)hasNoGatewayIP;
-(int)ipState;
-(NSObject*<OS_dispatch_queue>)scanQueueDispatchQueue;
-(void)setCurrentNetworkIsDirected:(BOOL)arg1 ;
-(void)_wifiManagerRestarted:(id)arg1 ;
-(void)asyncScanRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSArray *)deviceScanChannels;
-(void)dealloc;
-(void)_stopMonitoringWiFiEvents;
-(void)asyncGASQueryForNetworks:(id)arg1 elements:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
@end


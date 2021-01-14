/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>

@protocol OS_dispatch_queue, OS_nw_path_monitor;
@class NSObject, NSNetServiceBrowser, TVLNetworkInterface, NSString;

@interface TVLNetworkMonitor : NSObject <NSNetServiceBrowserDelegate> {

	BOOL _monitoring;
	unsigned long long _monitoringOptions;
	/*^block*/id _updateHandler;
	NSObject*<OS_dispatch_queue> _monitorQueue;
	NSNetServiceBrowser* _awdlServiceBrowser;
	NSObject*<OS_nw_path_monitor> _awdl_monitor;
	NSObject*<OS_nw_path_monitor> _wifi_monitor;
	NSObject*<OS_nw_path_monitor> _ethernet_monitor;
	TVLNetworkInterface* _awdl;
	TVLNetworkInterface* _wifi;
	TVLNetworkInterface* _ethernet;

}

@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                         //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,nonatomic) unsigned long long monitoringOptions;                        //@synthesize monitoringOptions=_monitoringOptions - In the implementation block
@property (nonatomic,copy) id updateHandler;                                              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> monitorQueue;                   //@synthesize monitorQueue=_monitorQueue - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * awdlServiceBrowser;                    //@synthesize awdlServiceBrowser=_awdlServiceBrowser - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_monitor> awdl_monitor;                  //@synthesize awdl_monitor=_awdl_monitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_monitor> wifi_monitor;                  //@synthesize wifi_monitor=_wifi_monitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_monitor> ethernet_monitor;              //@synthesize ethernet_monitor=_ethernet_monitor - In the implementation block
@property (nonatomic,retain) TVLNetworkInterface * awdl;                                  //@synthesize awdl=_awdl - In the implementation block
@property (nonatomic,retain) TVLNetworkInterface * wifi;                                  //@synthesize wifi=_wifi - In the implementation block
@property (nonatomic,retain) TVLNetworkInterface * ethernet;                              //@synthesize ethernet=_ethernet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopMonitoring;
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(BOOL)isMonitoring;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)updateHandler;
-(TVLNetworkInterface *)wifi;
-(NSObject*<OS_dispatch_queue>)monitorQueue;
-(void)setMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(TVLNetworkInterface *)awdl;
-(void)setWifi:(TVLNetworkInterface *)arg1 ;
-(void)setAwdl:(TVLNetworkInterface *)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)dealloc;
-(void)startMonitoringForInterfaceTypes:(unsigned long long)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setEthernet:(TVLNetworkInterface *)arg1 ;
-(NSObject*<OS_nw_path_monitor>)awdl_monitor;
-(NSObject*<OS_nw_path_monitor>)wifi_monitor;
-(NSObject*<OS_nw_path_monitor>)ethernet_monitor;
-(TVLNetworkInterface *)ethernet;
-(unsigned long long)monitoringOptions;
-(void)setMonitoringOptions:(unsigned long long)arg1 ;
-(NSNetServiceBrowser *)awdlServiceBrowser;
-(void)setAwdlServiceBrowser:(NSNetServiceBrowser *)arg1 ;
-(void)setAwdl_monitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
-(void)setWifi_monitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
-(void)setEthernet_monitor:(NSObject*<OS_nw_path_monitor>)arg1 ;
@end


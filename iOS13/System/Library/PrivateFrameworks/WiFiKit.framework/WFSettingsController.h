/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFNetworkSettingsViewControllerDataCoordinator.h>

@class WFNetworkSettingsViewController, WFMutableNetworkProfile, WFNetworkSettingsConfig, WFIPMonitor, NSOperationQueue, WFDetailsContext, WFNetworkScanRecord, NSString;

@interface WFSettingsController : NSObject <WFNetworkSettingsViewControllerDataCoordinator> {

	BOOL _monitorIPChanges;
	BOOL _cloudSyncRunning;
	BOOL _currentNetwork;
	WFNetworkSettingsViewController* _settingsViewController;
	WFMutableNetworkProfile* _profile;
	WFNetworkSettingsConfig* _config;
	WFIPMonitor* _ipMonitor;
	NSOperationQueue* _queue;
	WFDetailsContext* _detailsContext;
	WFNetworkScanRecord* _network;

}

@property (nonatomic,retain) WFMutableNetworkProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsConfig * config;                                      //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsViewController * settingsViewController;              //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (assign,nonatomic) BOOL monitorIPChanges;                                                 //@synthesize monitorIPChanges=_monitorIPChanges - In the implementation block
@property (nonatomic,retain) WFIPMonitor * ipMonitor;                                               //@synthesize ipMonitor=_ipMonitor - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL cloudSyncRunning;                                                 //@synthesize cloudSyncRunning=_cloudSyncRunning - In the implementation block
@property (nonatomic,retain) WFDetailsContext * detailsContext;                                     //@synthesize detailsContext=_detailsContext - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                         //@synthesize network=_network - In the implementation block
@property (assign,getter=isCurrentNetwork,nonatomic) BOOL currentNetwork;                           //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(WFNetworkSettingsConfig *)config;
-(void)setConfig:(WFNetworkSettingsConfig *)arg1 ;
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFMutableNetworkProfile *)profile;
-(void)setProfile:(WFMutableNetworkProfile *)arg1 ;
-(void)setCurrentNetwork:(BOOL)arg1 ;
-(WFNetworkSettingsViewController *)settingsViewController;
-(BOOL)isCurrentNetwork;
-(void)_ipStateDidChange:(id)arg1 ;
-(WFIPMonitor *)ipMonitor;
-(void)setDetailsContext:(WFDetailsContext *)arg1 ;
-(WFDetailsContext *)detailsContext;
-(void)setIpMonitor:(WFIPMonitor *)arg1 ;
-(id)initWithDetailsContext:(id)arg1 ;
-(id)_baseConfigForNetwork:(id)arg1 current:(BOOL)arg2 ;
-(void)_refreshSettingsConfig:(id)arg1 ;
-(void)_currentNetworkDidChange:(id)arg1 ;
-(void)_startMontoringIPChanges;
-(void)_stopMonitoringIPChanges;
-(id)_profileForNetwork:(id)arg1 ;
-(BOOL)cloudSyncRunning;
-(void)networkSettingsViewController:(id)arg1 saveConfig:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setSettingsViewController:(WFNetworkSettingsViewController *)arg1 ;
-(BOOL)monitorIPChanges;
-(void)setMonitorIPChanges:(BOOL)arg1 ;
-(void)setCloudSyncRunning:(BOOL)arg1 ;
@end


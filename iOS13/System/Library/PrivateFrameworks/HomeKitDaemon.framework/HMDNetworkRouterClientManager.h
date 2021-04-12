/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>

@protocol OS_dispatch_queue, HMDNetworkRouterFirewallRuleManager;
@class HMDHAPAccessory, HMFUnfairLock, NSObject, NSNotificationCenter, HMDHome, HMDNetworkRouterController, NSString;

@interface HMDNetworkRouterClientManager : NSObject <HMFLogging, HMDDevicePreferenceDataSource> {

	BOOL _started;
	BOOL _initialConfigureNeeded;
	BOOL _managedNetworkEnabled;
	BOOL _staleClientIdentifiersResetNeeded;
	BOOL _staleClientIdentifiersResetInProgress;
	BOOL _startPending;
	HMDHAPAccessory* _networkRouterAccessory;
	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSNotificationCenter* _notificationCenter;
	id<HMDNetworkRouterFirewallRuleManager> _firewallRuleManager;

}

@property (readonly) HMFUnfairLock * lock;                                                     //@synthesize lock=_lock - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                                //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) id<HMDNetworkRouterFirewallRuleManager> firewallRuleManager;              //@synthesize firewallRuleManager=_firewallRuleManager - In the implementation block
@property (__weak) HMDHAPAccessory * networkRouterAccessory;                                   //@synthesize networkRouterAccessory=_networkRouterAccessory - In the implementation block
@property (__weak,readonly) HMDHome * home; 
@property (readonly) HMDNetworkRouterController * routerController; 
@property (assign,nonatomic) BOOL initialConfigureNeeded;                                      //@synthesize initialConfigureNeeded=_initialConfigureNeeded - In the implementation block
@property (assign,nonatomic) BOOL started;                                                     //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL managedNetworkEnabled;                                       //@synthesize managedNetworkEnabled=_managedNetworkEnabled - In the implementation block
@property (assign,nonatomic) BOOL staleClientIdentifiersResetNeeded;                           //@synthesize staleClientIdentifiersResetNeeded=_staleClientIdentifiersResetNeeded - In the implementation block
@property (assign,nonatomic) BOOL staleClientIdentifiersResetInProgress;                       //@synthesize staleClientIdentifiersResetInProgress=_staleClientIdentifiersResetInProgress - In the implementation block
@property (assign,nonatomic) BOOL startPending;                                                //@synthesize startPending=_startPending - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMFUnfairLock *)lock;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(BOOL)started;
-(NSNotificationCenter *)notificationCenter;
-(void)_configure;
-(void)_stop;
-(void)setStarted:(BOOL)arg1 ;
-(id<HMDNetworkRouterFirewallRuleManager>)firewallRuleManager;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(void)handleAccessoryRemoved:(id)arg1 ;
-(id)initWithNetworkRouterAccessory:(id)arg1 workQueue:(id)arg2 firewallRuleManager:(id)arg3 notificationCenter:(id)arg4 ;
-(void)evaluateManagement;
-(void)replaceActiveNetworkRouterAccessory:(id)arg1 ;
-(void)handleAccessoryConfigured:(id)arg1 ;
-(void)_evaluateManagement;
-(HMDHAPAccessory *)networkRouterAccessory;
-(void)setNetworkRouterAccessory:(HMDHAPAccessory *)arg1 ;
-(void)setManagedNetworkEnabled:(BOOL)arg1 ;
-(BOOL)staleClientIdentifiersResetInProgress;
-(void)setStaleClientIdentifiersResetNeeded:(BOOL)arg1 ;
-(void)handleRouterAccessoryReachable:(id)arg1 ;
-(BOOL)initialConfigureNeeded;
-(void)setInitialConfigureNeeded:(BOOL)arg1 ;
-(void)_resetStaleClientIdentifiersBeforeStart;
-(void)setStartPending:(BOOL)arg1 ;
-(void)setStaleClientIdentifiersResetInProgress:(BOOL)arg1 ;
-(id)_transactionBlockForAccessoriesWithStaleClientIdentifier;
-(BOOL)staleClientIdentifiersResetNeeded;
-(BOOL)startPending;
-(void)__registerForNetworkRouterAccessoryReachable:(id)arg1 ;
-(void)handleAccessoryAdded:(id)arg1 ;
-(void)handleHomeNetworkProtectionChanged:(id)arg1 ;
-(void)handleFirewallRulesUpdated:(id)arg1 ;
-(void)handleNetworkProtectionGroupActivated:(id)arg1 ;
-(void)handleNetworkProtectionGroupDeactivated:(id)arg1 ;
-(void)_registerForNetworkProtectionChangesToGroup:(id)arg1 ;
-(void)_handleRouterAccessoryReachable:(id)arg1 ;
-(BOOL)managedNetworkEnabled;
-(void)_updateClientConfigurationForAllAccessories;
-(HMDNetworkRouterController *)routerController;
-(void)_startManagingAccessory:(id)arg1 ;
-(void)_registerInterestForFirewallRulesForAccessory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unregisterInterestForFirewallRulesForAccessory:(id)arg1 ;
-(void)_deregisterForChangesToManagedAccessory:(id)arg1 ;
-(void)_unregisterInterestForFirewallRulesForProductData:(id)arg1 firmwareVersion:(id)arg2 ;
-(void)_updateClientConfigurationForAccessory:(id)arg1 ;
-(void)_handleAccessoryConfigured:(id)arg1 ;
-(void)_unregisterForNetworkProtectionChangesToGroup:(id)arg1 ;
-(void)_registerForChangesToManagedAccessory:(id)arg1 ;
-(void)_handleUnreachableAccessory:(id)arg1 ;
-(void)_createClientConfigurationWithSavedPSKForAccessory:(id)arg1 ;
-(void)_updateExistingClientConfigurationForAccessory:(id)arg1 ;
-(void)_reconcileClientConfigurationForAccessory:(id)arg1 clientStatusList:(id)arg2 networkRouterUUID:(id)arg3 ;
-(void)_replaceNetworkClientIdentifierForAccessory:(id)arg1 networkClientIdentifier:(id)arg2 networkRouterUUID:(id)arg3 ;
-(void)_updateClientConfigurationForAccessory:(id)arg1 protectionMode:(long long)arg2 clientIdentifier:(id)arg3 ;
-(void)_replaceClientConfigurationForAccessory:(id)arg1 clientStatus:(id)arg2 ;
-(void)_createClientConfigurationForAccessory:(id)arg1 clientStatus:(id)arg2 ;
-(void)_createClientConfigurationForAccessory:(id)arg1 credential:(id)arg2 ;
-(void)_getNetworkConfigurationForAccessory:(id)arg1 targetProtectionMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchFirewallRulesForAccessory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAccessoryFirmwareVersionUpdated:(id)arg1 ;
-(void)handleNetworkProtectionGroupProtectionChanged:(id)arg1 ;
-(void)__deregisterForNetworkRouterAccessoryReachable:(id)arg1 ;
@end


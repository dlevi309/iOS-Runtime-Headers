/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator.h>

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator <NSObject>
@property (nonatomic,__weak,readonly) id<HMDNetworkRouterFirewallRuleManager> firewallRuleManager; 
@required
-(id<HMDNetworkRouterFirewallRuleManager>)firewallRuleManager;
-(void)startupWithCompletion:(/*^block*/id)arg1;
-(void)addInterestedAccessories:(id)arg1;
-(void)shutdownWithCompletion:(/*^block*/id)arg1;
-(void)removeInterestedAccessories:(id)arg1;
-(void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 error:(id*)arg4;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id*)arg6;
-(BOOL)removeAllLocalRulesWithError:(id*)arg1;
-(BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 error:(id*)arg3;
-(BOOL)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id*)arg3;
-(BOOL)removeAllOverridesWithError:(id*)arg1;
-(id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2;

@end


@protocol HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, OS_dispatch_queue;
@class NSCountedSet, NSNotificationCenter, NSObject, HMBLocalZone, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> {

	id<HMDNetworkRouterFirewallRuleManager> _firewallRuleManager;
	id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> _mirror;
	NSCountedSet* _watchedRecordIDs;
	NSNotificationCenter* _notificationCenter;
	id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> _cloudFetchScheduler;
	NSObject*<OS_dispatch_queue> _ownerQueue;
	HMBLocalZone* _mirroredLocalZone;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                                                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> cloudFetchScheduler;              //@synthesize cloudFetchScheduler=_cloudFetchScheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ownerQueue;                                                                 //@synthesize ownerQueue=_ownerQueue - In the implementation block
@property (nonatomic,readonly) NSCountedSet * watchedRecordIDs;                                                                         //@synthesize watchedRecordIDs=_watchedRecordIDs - In the implementation block
@property (nonatomic,retain) HMBLocalZone * mirroredLocalZone;                                                                          //@synthesize mirroredLocalZone=_mirroredLocalZone - In the implementation block
@property (nonatomic,retain) id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> mirror;                                          //@synthesize mirror=_mirror - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<HMDNetworkRouterFirewallRuleManager> firewallRuleManager;                                      //@synthesize firewallRuleManager=_firewallRuleManager - In the implementation block
+(id)logCategory;
+(id)ckContainerIdentifier;
+(id)__jsonValueForCKRecordValue:(id)arg1 ;
+(id)__jsonStringFromDictionary:(id)arg1 rawOutput:(BOOL)arg2 error:(id*)arg3 ;
+(id)__createProcessingOptionsWithLabel:(id)arg1 qualityOfService:(long long)arg2 ;
+(long long)ckContainerEnvironment;
+(BOOL)ckUseAnonymousAccount;
+(id)__createProcessingOptionsWithLabel:(id)arg1 ;
+(id)__jsonFromRecords:(id)arg1 rawOutput:(BOOL)arg2 error:(id*)arg3 ;
+(id)__jsonFromDeclarations:(id)arg1 rawOutput:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isRunning;
-(NSNotificationCenter *)notificationCenter;
-(id<HMDNetworkRouterFirewallRuleManager>)firewallRuleManager;
-(void)startupWithCompletion:(/*^block*/id)arg1 ;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror>)mirror;
-(id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchInterval:(double)arg3 cloudFetchRetryInterval:(double)arg4 ownerQueue:(id)arg5 ;
-(void)addInterestedAccessories:(id)arg1 ;
-(void)shutdownWithCompletion:(/*^block*/id)arg1 ;
-(void)removeInterestedAccessories:(id)arg1 ;
-(void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 error:(id*)arg4 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)removeAllLocalRulesWithError:(id*)arg1 ;
-(BOOL)addOverrides:(id)arg1 replace:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllOverridesWithError:(id*)arg1 ;
-(void)cloudFetchSchedulerFired:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 ownerQueue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)ownerQueue;
-(NSCountedSet *)watchedRecordIDs;
-(void)__maybeStartCloudFetchScheduler;
-(void)__stopCloudFetchScheduler;
-(void)__startupWithLocalDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)__startupWithMirroredLocalZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMBLocalZone *)mirroredLocalZone;
-(void)setMirroredLocalZone:(HMBLocalZone *)arg1 ;
-(void)__startupWithMirror:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMirror:(id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror>)arg1 ;
-(void)_fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 xpcActivity:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_fetchNetworkDeclarationsForAccessories:(id)arg1 options:(id)arg2 ignoreOverrides:(BOOL)arg3 error:(id*)arg4 ;
-(id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2 ;
-(void)_listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_fetchAllNetworkDeclarationDataForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_fetchAllOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>)cloudFetchScheduler;
-(void)__cloudFetchSchedulerFired:(/*^block*/id)arg1 ;
-(id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchScheduler:(id)arg3 ownerQueue:(id)arg4 ;
@end


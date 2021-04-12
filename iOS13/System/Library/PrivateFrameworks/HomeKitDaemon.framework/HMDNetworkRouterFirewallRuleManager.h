/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManager.h>
@class NSSet;


@protocol HMDNetworkRouterFirewallRuleManager <NSObject>
@property (nonatomic,readonly) NSSet * interestedAccessories; 
@required
-(void)fetchCloudChangesWithCompletion:(/*^block*/id)arg1;
-(void)startupWithCompletion:(/*^block*/id)arg1;
-(void)addInterestedAccessories:(id)arg1;
-(void)shutdownWithCompletion:(/*^block*/id)arg1;
-(void)removeInterestedAccessories:(id)arg1;
-(void)fetchRulesForAccessories:(id)arg1 completion:(/*^block*/id)arg2;
-(NSSet *)interestedAccessories;

@end

#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerDebug.h>

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator, OS_dispatch_queue, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory;
@class NSSet, NSMutableArray, NSCountedSet, NSNotificationCenter, NSObject, HMFUnfairLock, NSString;

@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug> {

	id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> _coordinator;
	NSMutableArray* _startupCompletions;
	NSMutableArray* _shutdownCompletions;
	NSCountedSet* _interestedAccessoriesSet;
	unsigned long long _operationsInProgressCount;
	NSNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> _coordinatorFactory;
	HMFUnfairLock* _propertyLock;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                                                             //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                                                            //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> coordinatorFactory;              //@synthesize coordinatorFactory=_coordinatorFactory - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * propertyLock;                                                                          //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,retain) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> coordinator;                              //@synthesize coordinator=_coordinator - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,retain) NSMutableArray * startupCompletions;                                                                     //@synthesize startupCompletions=_startupCompletions - In the implementation block
@property (nonatomic,retain) NSMutableArray * shutdownCompletions;                                                                    //@synthesize shutdownCompletions=_shutdownCompletions - In the implementation block
@property (nonatomic,readonly) NSCountedSet * interestedAccessoriesSet;                                                               //@synthesize interestedAccessoriesSet=_interestedAccessoriesSet - In the implementation block
@property (assign,nonatomic) unsigned long long operationsInProgressCount;                                                            //@synthesize operationsInProgressCount=_operationsInProgressCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * interestedAccessories; 
+(id)sharedInstance;
+(id)logCategory;
+(double)_intervalPreferenceForKey:(id)arg1 defaultValue:(double)arg2 ;
+(double)defaultCloudFetchInterval;
+(double)defaultCloudFetchRetryInterval;
-(id)init;
-(void)dealloc;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNotificationCenter *)notificationCenter;
-(void)setCoordinator:(id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator>)arg1 ;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator>)coordinator;
-(HMFUnfairLock *)propertyLock;
-(void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)removeAllLocalRulesWithCompletion:(/*^block*/id)arg1 ;
-(void)setOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCloudChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)startupWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 workQueue:(id)arg2 coordinatorFactory:(id)arg3 ;
-(void)_startupWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)startupCompletions;
-(NSMutableArray *)shutdownCompletions;
-(void)setStartupCompletions:(NSMutableArray *)arg1 ;
-(void)__startup;
-(id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory>)coordinatorFactory;
-(void)__dispatchStartupCompletionsWithError:(id)arg1 ;
-(NSCountedSet *)interestedAccessoriesSet;
-(void)addInterestedAccessories:(id)arg1 ;
-(void)_shutdownWithCompletion:(/*^block*/id)arg1 ;
-(void)setShutdownCompletions:(NSMutableArray *)arg1 ;
-(unsigned long long)operationsInProgressCount;
-(void)__shutdown;
-(void)__dispatchShutdownCompletionsWithError:(id)arg1 ;
-(void)shutdownWithCompletion:(/*^block*/id)arg1 ;
-(void)__dispatchCompletionsWithError:(id)arg1 isStartup:(BOOL)arg2 ;
-(void)setOperationsInProgressCount:(unsigned long long)arg1 ;
-(void)__operationStarted;
-(void)__operationFinished;
-(void)removeInterestedAccessories:(id)arg1 ;
-(void)_fetchCloudChangesIgnoringLastFetchedAccessories:(BOOL)arg1 forceChangeNotifications:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)__finishOperationWithCallbackBlock:(/*^block*/id)arg1 ;
-(void)__beginOperationWithBlock:(/*^block*/id)arg1 ;
-(void)_fetchRulesForAccessories:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dumpLocalRuleConfigurationsForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_addOverridesWithData:(id)arg1 replace:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRulesForAccessories:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)interestedAccessories;
-(void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end


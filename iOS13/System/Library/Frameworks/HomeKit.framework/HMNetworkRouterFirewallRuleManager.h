/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMHomeManager, HMFMessageDestination;

@interface HMNetworkRouterFirewallRuleManager : NSObject {

	HMHomeManager* _homeManager;
	HMFMessageDestination* _messageDestination;

}

@property (nonatomic,__weak,readonly) HMHomeManager * homeManager;                      //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) HMFMessageDestination * messageDestination;              //@synthesize messageDestination=_messageDestination - In the implementation block
-(HMHomeManager *)homeManager;
-(HMFMessageDestination *)messageDestination;
-(void)__sendMessage:(id)arg1 ;
-(void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_addOverrides:(id)arg1 replace:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchCloudChangesWithForceChangesFound:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHomeManager:(id)arg1 ;
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
-(void)fetchCloudChangesAndForceChangesFoundWithCompletion:(/*^block*/id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMHomeManager, HMFMessageDestination;

@interface HMNetworkRouterFirewallRuleManager : NSObject {

	HMHomeManager* _homeManager;
	HMFMessageDestination* _messageDestination;

}

@property (nonatomic,__weak,readonly) HMHomeManager * homeManager;                      //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) HMFMessageDestination * messageDestination;              //@synthesize messageDestination=_messageDestination - In the implementation block
-(void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllLocalRulesWithCompletion:(/*^block*/id)arg1 ;
-(void)_addOverrides:(id)arg1 replace:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchCloudChangesAndForceChangesFoundWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudChangesWithCompletion:(/*^block*/id)arg1 ;
-(HMFMessageDestination *)messageDestination;
-(void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 verifySignatures:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithHomeManager:(id)arg1 ;
-(void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)__sendMessage:(id)arg1 ;
-(void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(HMHomeManager *)homeManager;
-(void)_fetchCloudChangesWithForceChangesFound:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)addOverrides:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
@end


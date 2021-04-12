/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDNetworkRouterFirewallRuleManagerDebug <NSObject>
@required
-(void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeAllLocalRulesWithCompletion:(/*^block*/id)arg1;
-(void)removeAllOverridesWithCompletion:(/*^block*/id)arg1;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)setOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)addOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)arg1 completion:(/*^block*/id)arg2;

@end


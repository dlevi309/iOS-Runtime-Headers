/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDNetworkRouterFirewallRuleManagerDebug <NSObject>
@required
-(void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)removeAllLocalRulesWithCompletion:(/*^block*/id)arg1;
-(void)setOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeAllOverridesWithCompletion:(/*^block*/id)arg1;
-(void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3;
-(void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)arg1 completion:(/*^block*/id)arg2;

@end


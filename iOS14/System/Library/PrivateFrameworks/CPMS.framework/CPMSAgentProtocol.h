/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
*/


@protocol CPMSAgentProtocol <NSObject>
@required
+(id)sharedCPMSAgent;
+(BOOL)isCPMSSupported;
+(BOOL)isCPMSSupportedForAnyClient;
+(BOOL)isCPMSSupportedForClient:(long long)arg1;
-(BOOL)acknowledgePowerBudget:(id)arg1 forClientId:(long long)arg2 error:(id*)arg3;
-(BOOL)registerClientWithDescription:(id)arg1 error:(id*)arg2;
-(id)copyPowerBudgetForRequest:(id)arg1 forClient:(long long)arg2 error:(id*)arg3;
-(id)requestPowerBudget:(id)arg1 forClient:(long long)arg2 error:(id*)arg3;

@end


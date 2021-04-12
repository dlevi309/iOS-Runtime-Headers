/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
*/


@protocol CPMSAgentProtocol <NSObject>
@required
+(BOOL)isCPMSSupported;
+(id)sharedCPMSAgent;
+(BOOL)isCPMSSupportedForClient:(long long)arg1;
+(BOOL)isCPMSSupportedForAnyClient;
+(id)createCPMSAgentSharedInstance;
-(BOOL)acknowledgePowerBudget:(id)arg1 forClientId:(long long)arg2 error:(id*)arg3;
-(BOOL)registerClientWithDescription:(id)arg1 error:(id*)arg2;
-(id)requestPowerBudget:(id)arg1 forClient:(long long)arg2 error:(id*)arg3;

@end


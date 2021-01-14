/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDNetworkRouterFirewallRuleManagerClient;
@interface HMDNetworkRouterFirewallRuleManagerClientState : NSObject {

	id<HMDNetworkRouterFirewallRuleManagerClient> _client;
	/*^block*/id _startupCompletion;

}

@property (assign,nonatomic,__weak) id<HMDNetworkRouterFirewallRuleManagerClient> client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) id startupCompletion;                                                       //@synthesize startupCompletion=_startupCompletion - In the implementation block
-(id<HMDNetworkRouterFirewallRuleManagerClient>)client;
-(void)setClient:(id<HMDNetworkRouterFirewallRuleManagerClient>)arg1 ;
-(id)startupCompletion;
-(void)setStartupCompletion:(id)arg1 ;
@end


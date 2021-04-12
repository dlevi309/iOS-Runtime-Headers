/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterWANFirewall, HMDNetworkRouterWANFirewallRuleList, NSString;

@interface HMDNetworkRouterWANFirewallConfiguration : NSObject <NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterWANFirewall* _type;
	HMDNetworkRouterWANFirewallRuleList* _ruleList;

}

@property (nonatomic,retain) HMDNetworkRouterWANFirewall * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterWANFirewallRuleList * ruleList;              //@synthesize ruleList=_ruleList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)configurationFromFirewallRuleConfiguration:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterWANFirewall *)type;
-(void)setType:(HMDNetworkRouterWANFirewall *)arg1 ;
-(HMDNetworkRouterWANFirewallRuleList *)ruleList;
-(void)setRuleList:(HMDNetworkRouterWANFirewallRuleList *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithType:(id)arg1 ruleList:(id)arg2 ;
@end


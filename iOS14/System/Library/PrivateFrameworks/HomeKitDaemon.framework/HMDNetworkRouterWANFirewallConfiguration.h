/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterWANFirewall, HMDNetworkRouterWANFirewallRuleList, NSString;

@interface HMDNetworkRouterWANFirewallConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

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
+(id)configurationWithFullAccess;
+(id)configurationFromFirewallRuleConfiguration:(id)arg1 ;
-(id)init;
-(void)setType:(HMDNetworkRouterWANFirewall *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HMDNetworkRouterWANFirewall *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMDNetworkRouterWANFirewallRuleList *)ruleList;
-(void)setRuleList:(HMDNetworkRouterWANFirewallRuleList *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithType:(id)arg1 ruleList:(id)arg2 ;
@end


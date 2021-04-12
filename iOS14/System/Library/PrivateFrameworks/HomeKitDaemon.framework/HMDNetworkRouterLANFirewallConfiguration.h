/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterLANFirewall, HMDNetworkRouterLANFirewallRuleList, NSString;

@interface HMDNetworkRouterLANFirewallConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterLANFirewall* _type;
	HMDNetworkRouterLANFirewallRuleList* _ruleList;

}

@property (nonatomic,retain) HMDNetworkRouterLANFirewall * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANFirewallRuleList * ruleList;              //@synthesize ruleList=_ruleList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)configurationWithFullAccess;
+(id)configurationFromFirewallRuleConfiguration:(id)arg1 ;
-(id)init;
-(void)setType:(HMDNetworkRouterLANFirewall *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HMDNetworkRouterLANFirewall *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMDNetworkRouterLANFirewallRuleList *)ruleList;
-(void)setRuleList:(HMDNetworkRouterLANFirewallRuleList *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithType:(id)arg1 ruleList:(id)arg2 ;
@end


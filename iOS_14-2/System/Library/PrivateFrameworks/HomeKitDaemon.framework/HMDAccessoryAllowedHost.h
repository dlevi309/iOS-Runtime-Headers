/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDNetworkRouterFirewallRuleWAN, NSString, NSSet;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	HMDNetworkRouterFirewallRuleWAN* _cachedWANRule;
	NSString* _jsonWANRule;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWAN * wanRule; 
@property (readonly) NSString * name; 
@property (readonly) NSSet * addresses; 
@property (readonly) unsigned long long purpose; 
@property (readonly) NSString * jsonWANRule;                                           //@synthesize jsonWANRule=_jsonWANRule - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowedHostsFromFirewallRuleConfiguration:(id)arg1 ;
+(id)allowedHostsFromJSONFirewallWANRules:(id)arg1 ;
+(id)allowedHostForFullWANAccess;
-(NSSet *)addresses;
-(unsigned long long)purpose;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HMDNetworkRouterFirewallRuleWAN *)wanRule;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)jsonWANRule;
-(id)initWithJSONFirewallWANRule:(id)arg1 ;
-(id)initWithWANRule:(id)arg1 ;
-(void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1 ;
@end


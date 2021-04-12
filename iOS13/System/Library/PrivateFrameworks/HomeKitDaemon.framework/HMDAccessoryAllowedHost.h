/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HMDNetworkRouterFirewallRuleWAN, NSSet;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	NSString* _jsonWANRule;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWAN * wanRule; 
@property (readonly) NSString * name; 
@property (readonly) NSSet * addresses; 
@property (readonly) unsigned long long purpose; 
@property (readonly) NSString * jsonWANRule;                                           //@synthesize jsonWANRule=_jsonWANRule - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowedHostsFromJSONFirewallWANRules:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)purpose;
-(NSSet *)addresses;
-(id)attributeDescriptions;
-(NSString *)jsonWANRule;
-(id)initWithJSONFirewallWANRule:(id)arg1 ;
-(HMDNetworkRouterFirewallRuleWAN *)wanRule;
-(void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1 ;
@end


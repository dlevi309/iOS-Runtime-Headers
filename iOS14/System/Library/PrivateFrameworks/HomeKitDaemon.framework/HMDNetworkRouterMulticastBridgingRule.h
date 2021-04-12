/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterLANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterRuleDirection, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterIPAddress, HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterMulticastBridgingRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterRuleDirection* _direction;
	HMDNetworkRouterLANIdentifierList* _lanIdentifierList;
	HMDNetworkRouterIPAddress* _destinationIPAddress;
	HAPTLVUnsignedNumberValue* _destinationPort;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterRuleDirection * direction;                          //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANIdentifierList * lanIdentifierList;              //@synthesize lanIdentifierList=_lanIdentifierList - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * destinationIPAddress;                   //@synthesize destinationIPAddress=_destinationIPAddress - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * destinationPort;                        //@synthesize destinationPort=_destinationPort - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleLAN:(id)arg1 ;
-(HMDNetworkRouterRuleDirection *)direction;
-(id)init;
-(void)setDirection:(HMDNetworkRouterRuleDirection *)arg1 ;
-(void)addTo:(id)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 destinationPort:(id)arg4 ;
-(void)setLanIdentifierList:(HMDNetworkRouterLANIdentifierList *)arg1 ;
-(HMDNetworkRouterLANIdentifierList *)lanIdentifierList;
-(void)setDestinationIPAddress:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setDestinationPort:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HMDNetworkRouterIPAddress *)destinationIPAddress;
-(HAPTLVUnsignedNumberValue *)destinationPort;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterLANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterRuleDirection, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterIPAddress, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterMulticastBridgingRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterRuleDirection* _direction;
	HMDNetworkRouterLANIdentifierList* _lanIdentifierList;
	HMDNetworkRouterIPAddress* _destinationIPAddress;
	HMDTLVUnsignedNumberValue* _destinationPort;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterRuleDirection * direction;                          //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANIdentifierList * lanIdentifierList;              //@synthesize lanIdentifierList=_lanIdentifierList - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * destinationIPAddress;                   //@synthesize destinationIPAddress=_destinationIPAddress - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * destinationPort;                        //@synthesize destinationPort=_destinationPort - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleLAN:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterRuleDirection *)direction;
-(void)setDirection:(HMDNetworkRouterRuleDirection *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)addTo:(id)arg1 ;
-(id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 destinationPort:(id)arg4 ;
-(void)setLanIdentifierList:(HMDNetworkRouterLANIdentifierList *)arg1 ;
-(HMDNetworkRouterLANIdentifierList *)lanIdentifierList;
-(void)setDestinationIPAddress:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setDestinationPort:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDNetworkRouterIPAddress *)destinationIPAddress;
-(HMDTLVUnsignedNumberValue *)destinationPort;
@end


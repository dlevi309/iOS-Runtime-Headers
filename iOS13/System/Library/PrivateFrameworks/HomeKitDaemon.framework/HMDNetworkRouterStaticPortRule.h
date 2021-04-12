/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterLANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterRuleDirection, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterIPAddress, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterStaticPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterRuleDirection* _direction;
	HMDNetworkRouterLANIdentifierList* _lanIdentifierList;
	HMDNetworkRouterProtocol* _protocol;
	HMDNetworkRouterIPAddress* _destinationIPAddress;
	HMDTLVUnsignedNumberValue* _destinationPortStart;
	HMDTLVUnsignedNumberValue* _destinationPortEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterRuleDirection * direction;                          //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANIdentifierList * lanIdentifierList;              //@synthesize lanIdentifierList=_lanIdentifierList - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterProtocol * protocol;                                //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * destinationIPAddress;                   //@synthesize destinationIPAddress=_destinationIPAddress - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * destinationPortStart;                   //@synthesize destinationPortStart=_destinationPortStart - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * destinationPortEnd;                     //@synthesize destinationPortEnd=_destinationPortEnd - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleLAN:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDNetworkRouterProtocol *)protocol;
-(void)setProtocol:(HMDNetworkRouterProtocol *)arg1 ;
-(HMDNetworkRouterRuleDirection *)direction;
-(void)setDirection:(HMDNetworkRouterRuleDirection *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)addTo:(id)arg1 ;
-(id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 destinationIPAddress:(id)arg4 destinationPortStart:(id)arg5 destinationPortEnd:(id)arg6 ;
-(void)setLanIdentifierList:(HMDNetworkRouterLANIdentifierList *)arg1 ;
-(HMDNetworkRouterLANIdentifierList *)lanIdentifierList;
-(void)setDestinationIPAddress:(HMDNetworkRouterIPAddress *)arg1 ;
-(HMDNetworkRouterIPAddress *)destinationIPAddress;
-(void)setDestinationPortStart:(HMDTLVUnsignedNumberValue *)arg1 ;
-(void)setDestinationPortEnd:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)destinationPortStart;
-(HMDTLVUnsignedNumberValue *)destinationPortEnd;
@end


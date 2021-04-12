/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterLANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class HMDNetworkRouterRuleDirection, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterAdvertisementProtocol, HMDTLVUnsignedNumberValue, HMDNetworkRouterServiceType, NSString;

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterRuleDirection* _direction;
	HMDNetworkRouterLANIdentifierList* _lanIdentifierList;
	HMDNetworkRouterProtocol* _protocol;
	HMDNetworkRouterAdvertisementProtocol* _advertisementProtocol;
	HMDTLVUnsignedNumberValue* _flags;
	HMDNetworkRouterServiceType* _serviceType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterRuleDirection * direction;                                  //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANIdentifierList * lanIdentifierList;                      //@synthesize lanIdentifierList=_lanIdentifierList - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterProtocol * protocol;                                        //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterAdvertisementProtocol * advertisementProtocol;              //@synthesize advertisementProtocol=_advertisementProtocol - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterServiceType * serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleLAN:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDTLVUnsignedNumberValue *)flags;
-(HMDNetworkRouterProtocol *)protocol;
-(void)setProtocol:(HMDNetworkRouterProtocol *)arg1 ;
-(HMDNetworkRouterRuleDirection *)direction;
-(void)setDirection:(HMDNetworkRouterRuleDirection *)arg1 ;
-(HMDNetworkRouterServiceType *)serviceType;
-(void)setFlags:(HMDTLVUnsignedNumberValue *)arg1 ;
-(void)setServiceType:(HMDNetworkRouterServiceType *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)addTo:(id)arg1 ;
-(id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 advertisementProtocol:(id)arg4 flags:(id)arg5 serviceType:(id)arg6 ;
-(void)setAdvertisementProtocol:(HMDNetworkRouterAdvertisementProtocol *)arg1 ;
-(HMDNetworkRouterAdvertisementProtocol *)advertisementProtocol;
-(void)setLanIdentifierList:(HMDNetworkRouterLANIdentifierList *)arg1 ;
-(HMDNetworkRouterLANIdentifierList *)lanIdentifierList;
@end


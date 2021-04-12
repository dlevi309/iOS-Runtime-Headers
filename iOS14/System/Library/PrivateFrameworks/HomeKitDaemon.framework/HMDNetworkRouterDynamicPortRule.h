/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/HMDNetworkRouterLANRule.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterRuleDirection, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterAdvertisementProtocol, HAPTLVUnsignedNumberValue, HMDNetworkRouterServiceType, NSString;

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterRuleDirection* _direction;
	HMDNetworkRouterLANIdentifierList* _lanIdentifierList;
	HMDNetworkRouterProtocol* _protocol;
	HMDNetworkRouterAdvertisementProtocol* _advertisementProtocol;
	HAPTLVUnsignedNumberValue* _flags;
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
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterServiceType * serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleLAN:(id)arg1 ;
+(id)ruleForHAP;
-(HMDNetworkRouterRuleDirection *)direction;
-(void)setProtocol:(HMDNetworkRouterProtocol *)arg1 ;
-(id)init;
-(void)setDirection:(HMDNetworkRouterRuleDirection *)arg1 ;
-(HMDNetworkRouterProtocol *)protocol;
-(HAPTLVUnsignedNumberValue *)flags;
-(void)addTo:(id)arg1 ;
-(void)setServiceType:(HMDNetworkRouterServiceType *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setFlags:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HMDNetworkRouterServiceType *)serviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 advertisementProtocol:(id)arg4 flags:(id)arg5 serviceType:(id)arg6 ;
-(void)setAdvertisementProtocol:(HMDNetworkRouterAdvertisementProtocol *)arg1 ;
-(HMDNetworkRouterAdvertisementProtocol *)advertisementProtocol;
-(void)setLanIdentifierList:(HMDNetworkRouterLANIdentifierList *)arg1 ;
-(HMDNetworkRouterLANIdentifierList *)lanIdentifierList;
@end


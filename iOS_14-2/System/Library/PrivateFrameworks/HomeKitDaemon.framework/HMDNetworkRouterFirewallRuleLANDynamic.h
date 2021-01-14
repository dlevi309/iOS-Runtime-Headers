/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class NSString;

@interface HMDNetworkRouterFirewallRuleLANDynamic : HMDNetworkRouterFirewallRuleLAN {

	unsigned char _transportProtocol;
	unsigned char _advertisingProtocol;
	BOOL _advertisingOnly;
	NSString* _serviceType;

}

@property (nonatomic,readonly) unsigned char transportProtocol;                            //@synthesize transportProtocol=_transportProtocol - In the implementation block
@property (nonatomic,readonly) unsigned char advertisingProtocol;                          //@synthesize advertisingProtocol=_advertisingProtocol - In the implementation block
@property (getter=isAdvertisingOnly,nonatomic,readonly) BOOL advertisingOnly;              //@synthesize advertisingOnly=_advertisingOnly - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                                     //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)__decodeAdvertisingProtocol:(id)arg1 advertisingProtocol:(unsigned char*)arg2 error:(id*)arg3 ;
+(BOOL)__decodeFlags:(id)arg1 advertisingOnly:(BOOL*)arg2 error:(id*)arg3 ;
+(BOOL)__decodeServiceType:(id)arg1 serviceType:(id*)arg2 error:(id*)arg3 ;
+(id)__advertisingProtocolToString:(unsigned char)arg1 ;
+(id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(id)arg8 error:(id*)arg9 ;
-(unsigned char)transportProtocol;
-(id)attributeDescriptions;
-(NSString *)serviceType;
-(id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 transportProtocol:(unsigned char)arg8 advertisingProtocol:(unsigned char)arg9 advertisingOnly:(BOOL)arg10 serviceType:(id)arg11 ;
-(unsigned char)advertisingProtocol;
-(BOOL)isAdvertisingOnly;
-(id)prettyJSONDictionary;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN {

	unsigned short _port;
	HMFNetAddress* _ipAddress;

}

@property (nonatomic,readonly) HMFNetAddress * ipAddress;              //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) unsigned short port;                    //@synthesize port=_port - In the implementation block
+(id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(id)arg8 error:(id*)arg9 ;
-(unsigned short)port;
-(id)attributeDescriptions;
-(HMFNetAddress *)ipAddress;
-(id)prettyJSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9 ;
@end


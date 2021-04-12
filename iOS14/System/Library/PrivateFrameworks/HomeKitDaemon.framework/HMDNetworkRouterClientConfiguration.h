/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterCredential, HMDNetworkRouterWANFirewallConfiguration, HMDNetworkRouterLANFirewallConfiguration, NSUUID, NSString;

@interface HMDNetworkRouterClientConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _clientIdentifier;
	HAPTLVUnsignedNumberValue* _lanIdentifier;
	HMDNetworkRouterCredential* _credential;
	HMDNetworkRouterWANFirewallConfiguration* _wanFirewallConfiguration;
	HMDNetworkRouterLANFirewallConfiguration* _lanFirewallConfiguration;

}

@property (nonatomic,readonly) NSUUID * fingerprint; 
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * clientIdentifier;                                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * lanIdentifier;                                        //@synthesize lanIdentifier=_lanIdentifier - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterCredential * credential;                                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterWANFirewallConfiguration * wanFirewallConfiguration;              //@synthesize wanFirewallConfiguration=_wanFirewallConfiguration - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANFirewallConfiguration * lanFirewallConfiguration;              //@synthesize lanFirewallConfiguration=_lanFirewallConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)configurationWithClientIdentifier:(id)arg1 lanIdentifier:(long long)arg2 ;
+(id)configurationForOpenProtectionWithClientIdentifier:(id)arg1 ;
+(id)configurationForFirewallConfiguration:(id)arg1 hapAccessory:(BOOL)arg2 withClientIdentifier:(id)arg3 ;
-(NSUUID *)fingerprint;
-(void)setClientIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HMDNetworkRouterCredential *)credential;
-(id)init;
-(void)setCredential:(HMDNetworkRouterCredential *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAPTLVUnsignedNumberValue *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setLanIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setLanFirewallConfiguration:(HMDNetworkRouterLANFirewallConfiguration *)arg1 ;
-(void)setWanFirewallConfiguration:(HMDNetworkRouterWANFirewallConfiguration *)arg1 ;
-(HMDNetworkRouterLANFirewallConfiguration *)lanFirewallConfiguration;
-(HAPTLVUnsignedNumberValue *)lanIdentifier;
-(HMDNetworkRouterWANFirewallConfiguration *)wanFirewallConfiguration;
-(id)initWithClientIdentifier:(id)arg1 lanIdentifier:(id)arg2 credential:(id)arg3 wanFirewallConfiguration:(id)arg4 lanFirewallConfiguration:(id)arg5 ;
@end


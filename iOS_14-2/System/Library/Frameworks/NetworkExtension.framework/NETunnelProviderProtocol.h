/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NETunnelProviderProtocol : NEVPNProtocol {

	int _reassertTimeout;
	NSDictionary* _providerConfiguration;
	NSString* _providerBundleIdentifier;
	NSString* _pluginType;
	NSString* _designatedRequirement;
	NSString* _authenticationPluginType;
	NSDictionary* _vendorInfo;
	long long _authenticationMethod;

}

@property (readonly) NSString * pluginType;                         //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * designatedRequirement;                  //@synthesize designatedRequirement=_designatedRequirement - In the implementation block
@property (copy) NSString * authenticationPluginType;               //@synthesize authenticationPluginType=_authenticationPluginType - In the implementation block
@property (copy) NSDictionary * vendorInfo;                         //@synthesize vendorInfo=_vendorInfo - In the implementation block
@property (assign) long long authenticationMethod;                  //@synthesize authenticationMethod=_authenticationMethod - In the implementation block
@property (assign) int reassertTimeout;                             //@synthesize reassertTimeout=_reassertTimeout - In the implementation block
@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isLegacyPluginType:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)initWithPluginType:(id)arg1 ;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NSString *)pluginType;
-(long long)authenticationMethod;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(void)setDesignatedRequirement:(NSString *)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3 ;
-(void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(BOOL)arg2 ;
-(void)copyPasswordsFromKeychainInDomain:(long long)arg1 ;
-(void)setAuthenticationMethod:(long long)arg1 ;
-(void)initFromLegacyDictionaryExtra:(id)arg1 ;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(void)setAuthenticationPluginType:(NSString *)arg1 ;
-(NSDictionary *)vendorInfo;
-(NSString *)authenticationPluginType;
-(int)reassertTimeout;
-(void)setVendorInfo:(NSDictionary *)arg1 ;
-(void)setReassertTimeout:(int)arg1 ;
-(SCNetworkInterfaceRef)createInterface;
-(BOOL)setServiceProtocolsInService:(SCNetworkServiceRef)arg1 ;
-(BOOL)updateWithServiceProtocolsFromService:(SCNetworkServiceRef)arg1 ;
-(NSString *)designatedRequirement;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


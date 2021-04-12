/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NEDNSProxyProviderProtocol : NEVPNProtocol {

	NSDictionary* _providerConfiguration;
	NSString* _providerBundleIdentifier;
	NSString* _pluginType;
	NSString* _designatedRequirement;

}

@property (copy) NSString * pluginType;                             //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * designatedRequirement;                  //@synthesize designatedRequirement=_designatedRequirement - In the implementation block
@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithPluginType:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NSString *)pluginType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(void)setDesignatedRequirement:(NSString *)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(NSString *)designatedRequirement;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


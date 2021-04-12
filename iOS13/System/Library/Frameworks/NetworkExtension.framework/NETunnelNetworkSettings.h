/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NEDNSSettings, NEProxySettings;

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	NSString* _tunnelRemoteAddress;
	NEDNSSettings* _DNSSettings;
	NEProxySettings* _proxySettings;

}

@property (readonly) NSString * tunnelRemoteAddress;              //@synthesize tunnelRemoteAddress=_tunnelRemoteAddress - In the implementation block
@property (copy) NEDNSSettings * DNSSettings;                     //@synthesize DNSSettings=_DNSSettings - In the implementation block
@property (copy) NEProxySettings * proxySettings;                 //@synthesize proxySettings=_proxySettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NEProxySettings *)proxySettings;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setDNSSettings:(NEDNSSettings *)arg1 ;
-(void)setProxySettings:(NEProxySettings *)arg1 ;
-(id)initWithTunnelRemoteAddress:(id)arg1 ;
-(NSString *)tunnelRemoteAddress;
-(NEDNSSettings *)DNSSettings;
@end


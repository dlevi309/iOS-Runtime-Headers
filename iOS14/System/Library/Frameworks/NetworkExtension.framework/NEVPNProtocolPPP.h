/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NEIPv4Settings, NEIPv6Settings;

@interface NEVPNProtocolPPP : NEVPNProtocol {

	BOOL _verboseLoggingEnabled;
	long long _authenticationMethod;
	NEIPv4Settings* _IPv4Settings;
	NEIPv6Settings* _IPv6Settings;

}

@property (assign) long long authenticationMethod;              //@synthesize authenticationMethod=_authenticationMethod - In the implementation block
@property (assign) BOOL verboseLoggingEnabled;                  //@synthesize verboseLoggingEnabled=_verboseLoggingEnabled - In the implementation block
@property (copy) NEIPv4Settings * IPv4Settings;                 //@synthesize IPv4Settings=_IPv4Settings - In the implementation block
@property (copy) NEIPv6Settings * IPv6Settings;                 //@synthesize IPv6Settings=_IPv6Settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(NEIPv4Settings *)IPv4Settings;
-(NEIPv6Settings *)IPv6Settings;
-(long long)authenticationMethod;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAuthenticationMethod:(long long)arg1 ;
-(void)setVerboseLoggingEnabled:(BOOL)arg1 ;
-(void)setIPv4Settings:(NEIPv4Settings *)arg1 ;
-(void)setIPv6Settings:(NEIPv6Settings *)arg1 ;
-(BOOL)setServiceProtocolsInService:(SCNetworkServiceRef)arg1 ;
-(BOOL)updateWithServiceProtocolsFromService:(SCNetworkServiceRef)arg1 ;
-(BOOL)verboseLoggingEnabled;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


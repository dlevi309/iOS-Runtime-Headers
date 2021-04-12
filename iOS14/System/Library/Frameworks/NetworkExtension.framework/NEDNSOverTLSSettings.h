/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEDNSSettings.h>

@class NSString;

@interface NEDNSOverTLSSettings : NEDNSSettings {

	NSString* _serverName;

}

@property (copy) NSString * serverName;              //@synthesize serverName=_serverName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(long long)dnsProtocol;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


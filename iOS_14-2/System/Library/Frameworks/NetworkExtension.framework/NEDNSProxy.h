/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEDNSProxyProviderProtocol;

@interface NEDNSProxy : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	NEDNSProxyProviderProtocol* _protocol;

}

@property (getter=isEnabled) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (copy) NEDNSProxyProviderProtocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProtocol:(NEDNSProxyProviderProtocol *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NEDNSProxyProviderProtocol *)protocol;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


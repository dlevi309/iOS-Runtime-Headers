/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEDNSProxyProviderProtocol, NSArray;

@interface NEDNSProxy : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	NEDNSProxyProviderProtocol* _protocol;
	NSArray* _settings;

}

@property (getter=isEnabled) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (copy) NEDNSProxyProviderProtocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (copy) NSArray * settings;                                 //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NEDNSProxyProviderProtocol *)protocol;
-(void)setProtocol:(NEDNSProxyProviderProtocol *)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)settings;
-(void)setSettings:(NSArray *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end


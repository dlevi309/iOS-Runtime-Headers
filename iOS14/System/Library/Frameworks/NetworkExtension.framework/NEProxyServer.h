/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _authenticationRequired;
	NSString* _address;
	long long _port;
	NSString* _username;
	NSString* _password;
	long long _type;

}

@property (assign) long long type;                           //@synthesize type=_type - In the implementation block
@property (readonly) NSString * address;                     //@synthesize address=_address - In the implementation block
@property (readonly) long long port;                         //@synthesize port=_port - In the implementation block
@property (assign) BOOL authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (copy) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (copy) NSString * password;                        //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)port;
-(id)copyPassword;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(BOOL)authenticationRequired;
-(NSString *)password;
-(NSString *)username;
-(id)initWithType:(long long)arg1 address:(id)arg2 port:(long long)arg3 ;
-(void)syncWithKeychain;
-(id)copyProtectionSpace;
-(id)initWithAddress:(id)arg1 port:(long long)arg2 ;
-(BOOL)needToUpdateKeychain;
-(NSString *)address;
-(void)setPassword:(NSString *)arg1 ;
-(long long)type;
-(void)removeFromKeychain;
-(id)initWithCoder:(id)arg1 ;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


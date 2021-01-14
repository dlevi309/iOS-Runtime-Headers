/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <MediaSetup/MediaSetup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface CMSAuthenticationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _clientID;
	NSString* _clientSecret;
	NSURL* _authorizationURL;
	NSString* _scope;

}

@property (readonly) NSString * clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (readonly) NSString * clientSecret;               //@synthesize clientSecret=_clientSecret - In the implementation block
@property (readonly) NSURL * authorizationURL;              //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (readonly) NSString * scope;                      //@synthesize scope=_scope - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)authConfigurationWithClientID:(id)arg1 clientSecret:(id)arg2 authorizationURL:(id)arg3 scope:(id)arg4 ;
+(id)authConfigurationFromMSAuthData:(id)arg1 ;
-(NSString *)clientID;
-(NSString *)scope;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)authorizationURL;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)clientSecret;
-(id)initWithClientID:(id)arg1 clientSecret:(id)arg2 authorizationURL:(id)arg3 scope:(id)arg4 ;
@end


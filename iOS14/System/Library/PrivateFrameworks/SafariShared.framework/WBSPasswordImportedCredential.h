/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding> {

	NSString* _user;
	NSString* _password;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * user;                  //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3 ;
-(id)urlCredentialWithPersistence:(unsigned long long)arg1 ;
-(id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSURL *)url;
-(id)description;
-(NSString *)user;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


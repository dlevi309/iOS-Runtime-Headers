/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSURL *)url;
-(id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3 ;
-(id)urlCredentialWithPersistence:(unsigned long long)arg1 ;
-(id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1 ;
@end


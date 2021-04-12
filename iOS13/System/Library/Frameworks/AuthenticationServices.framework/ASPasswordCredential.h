/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString;

@interface ASPasswordCredential : NSObject <ASAuthorizationCredential> {

	NSString* _user;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * user;                  //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)credentialWithUser:(id)arg1 password:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(id)initWithUser:(id)arg1 password:(id)arg2 ;
@end


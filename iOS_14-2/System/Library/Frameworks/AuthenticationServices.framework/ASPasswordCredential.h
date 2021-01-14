/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(id)initWithUser:(id)arg1 password:(id)arg2 ;
-(NSString *)user;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


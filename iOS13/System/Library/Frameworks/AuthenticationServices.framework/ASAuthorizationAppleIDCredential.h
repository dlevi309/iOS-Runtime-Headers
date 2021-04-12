/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString, NSArray, NSData, NSPersonNameComponents;

@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential> {

	NSString* _user;
	NSArray* _authorizedScopes;
	NSString* _state;
	NSData* _authorizationCode;
	NSData* _identityToken;
	NSString* _email;
	NSPersonNameComponents* _fullName;
	long long _realUserStatus;
	NSData* _accessToken;
	NSData* _refreshToken;

}

@property (nonatomic,copy) NSData * accessToken;                             //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSData * refreshToken;                            //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSData * identityToken;                           //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy) NSData * authorizationCode;                       //@synthesize authorizationCode=_authorizationCode - In the implementation block
@property (nonatomic,copy) NSString * state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * fullName;                //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) long long realUserStatus;                       //@synthesize realUserStatus=_realUserStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;              //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSPersonNameComponents *)fullName;
-(NSData *)identityToken;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSData *)accessToken;
-(void)setFullName:(NSPersonNameComponents *)arg1 ;
-(void)setIdentityToken:(NSData *)arg1 ;
-(NSArray *)authorizedScopes;
-(NSData *)authorizationCode;
-(NSData *)refreshToken;
-(void)setRefreshToken:(NSData *)arg1 ;
-(id)initWithUser:(id)arg1 authorizedScopes:(id)arg2 ;
-(void)setAuthorizationCode:(NSData *)arg1 ;
-(void)setRealUserStatus:(long long)arg1 ;
-(long long)realUserStatus;
@end


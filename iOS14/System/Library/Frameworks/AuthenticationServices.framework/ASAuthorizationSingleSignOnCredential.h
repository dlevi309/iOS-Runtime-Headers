/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString, NSData, NSArray, NSHTTPURLResponse;

@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential> {

	NSString* _state;
	NSData* _accessToken;
	NSData* _identityToken;
	NSArray* _authorizedScopes;
	NSHTTPURLResponse* _authenticatedResponse;

}

@property (nonatomic,copy,readonly) NSString * state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                                   //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityToken;                                 //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;                             //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (nonatomic,copy,readonly) NSHTTPURLResponse * authenticatedResponse;              //@synthesize authenticatedResponse=_authenticatedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)emptyCredential;
-(NSData *)accessToken;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)authorizedScopes;
-(NSString *)description;
-(NSData *)identityToken;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAuthenticatedResponse:(id)arg1 ;
-(NSHTTPURLResponse *)authenticatedResponse;
@end


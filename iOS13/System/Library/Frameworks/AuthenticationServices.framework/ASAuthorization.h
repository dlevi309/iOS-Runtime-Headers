/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol ASAuthorizationProvider, ASAuthorizationCredential;
@interface ASAuthorization : NSObject {

	id<ASAuthorizationProvider> _provider;
	id<ASAuthorizationCredential> _credential;

}

@property (nonatomic,readonly) id<ASAuthorizationProvider> provider;                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<ASAuthorizationCredential> credential;              //@synthesize credential=_credential - In the implementation block
+(id)new;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id<ASAuthorizationProvider>)provider;
-(id<ASAuthorizationCredential>)credential;
-(id)initWithProvider:(id)arg1 credential:(id)arg2 ;
@end


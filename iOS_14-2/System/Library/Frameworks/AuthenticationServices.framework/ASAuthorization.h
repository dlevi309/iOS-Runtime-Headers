/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<ASAuthorizationCredential>)credential;
-(id)init;
-(id<ASAuthorizationProvider>)provider;
-(id)debugDescription;
-(id)description;
-(id)initWithProvider:(id)arg1 credential:(id)arg2 ;
@end


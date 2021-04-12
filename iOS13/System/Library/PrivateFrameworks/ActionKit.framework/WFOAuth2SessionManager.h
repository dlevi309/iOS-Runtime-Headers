/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSURL, NSString, NSURLSession;

@interface WFOAuth2SessionManager : NSObject {

	NSURL* _tokenURL;
	NSURL* _authorizationURL;
	NSString* _clientID;
	NSString* _clientSecret;
	NSString* _authenticationMethod;
	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tokenURL;                        //@synthesize tokenURL=_tokenURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * authorizationURL;                //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientID;                     //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientSecret;                 //@synthesize clientSecret=_clientSecret - In the implementation block
@property (nonatomic,readonly) NSString * authenticationMethod;              //@synthesize authenticationMethod=_authenticationMethod - In the implementation block
+(id)combinedScopeFromScopes:(id)arg1 ;
-(NSURLSession *)session;
-(NSString *)authenticationMethod;
-(NSString *)clientID;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)clientSecret;
-(NSURL *)tokenURL;
-(NSURL *)authorizationURL;
-(id)authorizationSessionWithResponseType:(id)arg1 scopes:(id)arg2 redirectURI:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithSessionConfiguration:(id)arg1 tokenURL:(id)arg2 authorizationURL:(id)arg3 authenticationMethod:(id)arg4 clientID:(id)arg5 clientSecret:(id)arg6 ;
-(void)authenticateWithScopes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateWithUsername:(id)arg1 password:(id)arg2 scopes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)authenticateWithCode:(id)arg1 redirectURI:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)authenticateWithRefreshCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateWithParameters:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateWithRequest:(id)arg1 refreshToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)authorizationSessionWithAuthorizationURL:(id)arg1 responseType:(id)arg2 scopes:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
@end


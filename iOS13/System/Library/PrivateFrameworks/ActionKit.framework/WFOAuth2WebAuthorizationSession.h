/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFOAuth2AuthorizationSession.h>

@class ASWebAuthenticationSession, NSURL, WFOAuth2SessionManager, NSString;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {

	ASWebAuthenticationSession* _authenticationSession;
	NSURL* _authorizationURL;
	NSURL* _redirectURI;
	WFOAuth2SessionManager* _sessionManager;
	NSString* _responseType;
	NSString* _state;
	/*^block*/id _completionHandler;
	NSString* _responseKey;

}

@property (nonatomic,readonly) WFOAuth2SessionManager * sessionManager;                         //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseType;                                    //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,readonly) NSString * state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * responseKey;                                          //@synthesize responseKey=_responseKey - In the implementation block
@property (nonatomic,copy,readonly) NSURL * authorizationURL;                                   //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redirectURI;                                        //@synthesize redirectURI=_redirectURI - In the implementation block
@property (nonatomic,readonly) ASWebAuthenticationSession * authenticationSession;              //@synthesize authenticationSession=_authenticationSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)state;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)responseType;
-(WFOAuth2SessionManager *)sessionManager;
-(ASWebAuthenticationSession *)authenticationSession;
-(NSString *)responseKey;
-(NSURL *)authorizationURL;
-(BOOL)resumeSessionWithURL:(id)arg1 ;
-(NSURL *)redirectURI;
-(id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)resumeSessionWithResponseObject:(id)arg1 ;
@end


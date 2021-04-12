/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFOAuth2AuthorizationSession.h>

@class NSURL, WFOAuth2SessionManager, NSString, ASWebAuthenticationSession, WFWebAuthenticationSessionPresentationContext;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {

	NSURL* _authorizationURL;
	NSURL* _redirectURI;
	WFOAuth2SessionManager* _sessionManager;
	NSString* _responseType;
	NSString* _state;
	/*^block*/id _completionHandler;
	ASWebAuthenticationSession* _authenticationSession;
	WFWebAuthenticationSessionPresentationContext* _presentationContext;
	NSString* _responseKey;

}

@property (nonatomic,readonly) WFOAuth2SessionManager * sessionManager;                                        //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseType;                                                   //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,readonly) NSString * state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) ASWebAuthenticationSession * authenticationSession;                               //@synthesize authenticationSession=_authenticationSession - In the implementation block
@property (nonatomic,retain) WFWebAuthenticationSessionPresentationContext * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,readonly) NSString * responseKey;                                                         //@synthesize responseKey=_responseKey - In the implementation block
@property (nonatomic,copy,readonly) NSURL * authorizationURL;                                                  //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redirectURI;                                                       //@synthesize redirectURI=_redirectURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFOAuth2SessionManager *)sessionManager;
-(void)setCompletionHandler:(id)arg1 ;
-(WFWebAuthenticationSessionPresentationContext *)presentationContext;
-(id)completionHandler;
-(ASWebAuthenticationSession *)authenticationSession;
-(NSURL *)authorizationURL;
-(NSString *)state;
-(NSString *)responseKey;
-(NSString *)responseType;
-(void)setPresentationContext:(WFWebAuthenticationSessionPresentationContext *)arg1 ;
-(void)setAuthenticationSession:(ASWebAuthenticationSession *)arg1 ;
-(BOOL)resumeSessionWithURL:(id)arg1 ;
-(NSURL *)redirectURI;
-(id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)authenticationSessionWithUserInterface:(id)arg1 ;
-(BOOL)resumeSessionWithResponseObject:(id)arg1 ;
@end


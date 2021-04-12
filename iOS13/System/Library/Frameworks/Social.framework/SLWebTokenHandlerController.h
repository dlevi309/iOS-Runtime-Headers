/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol OS_dispatch_queue, SLWebClient;
@class NSObject;

@interface SLWebTokenHandlerController : NSObject {

	NSObject*<OS_dispatch_queue> _webClientQueue;
	id<SLWebClient> _webClient;

}

@property (readonly) id<SLWebClient> webClient;              //@synthesize webClient=_webClient - In the implementation block
+(id)emailAddressFromIdToken:(id)arg1 ;
-(void)_fetchNamesForToken:(id)arg1 idToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensWithCompletion:(/*^block*/id)arg4 ;
-(void)_fetchNamesForToken:(id)arg1 usingFallbackURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithWebClient:(id)arg1 ;
-(void)exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensAndUsernameWithCompletion:(/*^block*/id)arg4 ;
-(id<SLWebClient>)webClient;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/SL_OOPAuthFlowDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol SLWebClient;
@class NSURLRequest, NSString;

@interface SLWebAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {

	NSURLRequest* _requestWithAuthorizationCode;
	/*^block*/id _completion;
	NSString* _yahooJapanUserName;
	id<SLWebClient> _webClient;

}

@property (readonly) id<SLWebClient> webClient;                     //@synthesize webClient=_webClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebClient:(id)arg1 ;
-(id<SLWebClient>)webClient;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1 ;
-(id)authURLForUsername:(id)arg1 ;
-(id)requestForAuthURL:(id)arg1 ;
-(id)initialRedirectURL;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1 ;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1 ;
@end


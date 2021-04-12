/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol WFTumblrViewControllerDelegate;
@class WKWebView, TMTumblrAuthenticator, NSString;

@interface WFTumblrViewController : UIViewController <WKNavigationDelegate> {

	WKWebView* _webView;
	id<WFTumblrViewControllerDelegate> _delegate;
	TMTumblrAuthenticator* _authenticator;

}

@property (nonatomic,retain) TMTumblrAuthenticator * authenticator;                           //@synthesize authenticator=_authenticator - In the implementation block
@property (assign,nonatomic,__weak) WKWebView * webView;                                      //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<WFTumblrViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(TMTumblrAuthenticator *)authenticator;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id<WFTumblrViewControllerDelegate>)delegate;
-(void)setAuthenticator:(TMTumblrAuthenticator *)arg1 ;
-(void)setDelegate:(id<WFTumblrViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)cancel;
-(void)setWebView:(WKWebView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithOAuthConsumerKey:(id)arg1 OAuthConsumerSecret:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<WFTumblrViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTumblrViewControllerDelegate>)arg1 ;
-(void)cancel;
-(TMTumblrAuthenticator *)authenticator;
-(void)setAuthenticator:(TMTumblrAuthenticator *)arg1 ;
-(void)loadView;
-(WKWebView *)webView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(id)initWithOAuthConsumerKey:(id)arg1 OAuthConsumerSecret:(id)arg2 ;
@end


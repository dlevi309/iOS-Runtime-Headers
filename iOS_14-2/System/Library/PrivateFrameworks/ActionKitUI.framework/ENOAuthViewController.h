/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol ENOAuthViewControllerDelegate;
@class NSURL, NSString, UIWebView, UIActivityIndicatorView;

@interface ENOAuthViewController : UIViewController <UIWebViewDelegate> {

	BOOL _isSwitchingAllowed;
	id<ENOAuthViewControllerDelegate> _delegate;
	NSURL* _authorizationURL;
	NSString* _oauthCallbackPrefix;
	UIWebView* _webView;
	NSString* _currentProfileName;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSURL * authorizationURL;                                       //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,retain) NSString * oauthCallbackPrefix;                                 //@synthesize oauthCallbackPrefix=_oauthCallbackPrefix - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * currentProfileName;                                    //@synthesize currentProfileName=_currentProfileName - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                    //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL isSwitchingAllowed;                                        //@synthesize isSwitchingAllowed=_isSwitchingAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<ENOAuthViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWebView *)webView;
-(UIActivityIndicatorView *)activityIndicator;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id<ENOAuthViewControllerDelegate>)delegate;
-(void)cancel:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setDelegate:(id<ENOAuthViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(NSURL *)authorizationURL;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)dealloc;
-(void)loadWebView;
-(void)setAuthorizationURL:(NSURL *)arg1 ;
-(NSString *)currentProfileName;
-(id)initWithAuthorizationURL:(id)arg1 oauthCallbackPrefix:(id)arg2 profileName:(id)arg3 allowSwitching:(BOOL)arg4 delegate:(id)arg5 ;
-(void)switchProfile:(id)arg1 ;
-(void)updateUIForNewProfile:(id)arg1 withAuthorizationURL:(id)arg2 ;
-(NSString *)oauthCallbackPrefix;
-(void)setOauthCallbackPrefix:(NSString *)arg1 ;
-(void)setCurrentProfileName:(NSString *)arg1 ;
-(BOOL)isSwitchingAllowed;
-(void)setIsSwitchingAllowed:(BOOL)arg1 ;
@end


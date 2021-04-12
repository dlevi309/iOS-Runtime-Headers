/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSURL, NSString;

@interface PKPaymentSetupWebViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	NSURL* _URL;
	long long _context;

}

@property (assign,nonatomic) long long context;                     //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)webView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)handleDone:(id)arg1 ;
-(void)_webViewDidLoad:(BOOL)arg1 withError:(id)arg2 ;
-(id)initWithURL:(id)arg1 context:(long long)arg2 ;
@end


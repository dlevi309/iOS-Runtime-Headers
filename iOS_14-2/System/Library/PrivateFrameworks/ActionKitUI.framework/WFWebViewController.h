/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol WFWebViewControllerDelegate;
@class WKWebView;

@interface WFWebViewController : UIViewController {

	id<WFWebViewControllerDelegate> _delegate;
	WKWebView* _webView;

}

@property (nonatomic,retain) WKWebView * webView;                                          //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<WFWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(WKWebView *)webView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<WFWebViewControllerDelegate>)delegate;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)done;
-(void)updateNavigationItems;
-(void)setDelegate:(id<WFWebViewControllerDelegate>)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)loadView;
-(void)cancel;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpaceUI.framework/CTCarrierSpaceUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate;
@class UIView, WKWebView, LoadingIndicatorViewController, NSString;

@interface CTCarrierSpaceUIPlanPurchaseWebViewController : UIViewController <WKScriptMessageHandler, WKNavigationDelegate> {

	id<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate> _delegate;
	UIView* _contentView;
	WKWebView* _webView;
	LoadingIndicatorViewController* _loadingViewController;

}

@property (nonatomic,retain) UIView * contentView;                                                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) LoadingIndicatorViewController * loadingViewController;                                 //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(WKWebView *)webView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(LoadingIndicatorViewController *)loadingViewController;
-(void)setLoadingViewController:(LoadingIndicatorViewController *)arg1 ;
-(void)_accountUpdatedWithStatus:(id)arg1 ;
-(void)_swapOutLoadingView;
-(void)loadFileURL:(id)arg1 ;
@end


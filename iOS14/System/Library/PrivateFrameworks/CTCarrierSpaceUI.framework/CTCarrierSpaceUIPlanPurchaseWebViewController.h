/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(WKWebView *)webView;
-(id<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate>)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)viewDidLoad;
-(void)loadRequest:(id)arg1 ;
-(void)setLoadingViewController:(LoadingIndicatorViewController *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(LoadingIndicatorViewController *)loadingViewController;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)loadView;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(UIView *)contentView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)_accountUpdatedWithStatus:(id)arg1 ;
-(void)_swapOutLoadingView;
-(void)loadFileURL:(id)arg1 ;
@end


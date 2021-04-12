/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RemoteUIWebViewControllerDelegate;
@class UIWebView, UIToolbar, _UIBackdropView, NSString;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	UIToolbar* _toolbar;
	/*^block*/id _loadCompletion;
	_UIBackdropView* _statusBarBackdrop;
	BOOL _scalesPageToFit;
	id<RemoteUIWebViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RemoteUIWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIToolbar * toolbar; 
@property (nonatomic,readonly) UIWebView * webView; 
@property (assign,nonatomic) BOOL scalesPageToFit;                                               //@synthesize scalesPageToFit=_scalesPageToFit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<RemoteUIWebViewControllerDelegate>)delegate;
-(void)setDelegate:(id<RemoteUIWebViewControllerDelegate>)arg1 ;
-(UIWebView *)webView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIToolbar *)toolbar;
-(BOOL)scalesPageToFit;
-(void)setScalesPageToFit:(BOOL)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)loadURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donePressed:(id)arg1 ;
-(void)loadURL:(id)arg1 ;
@end


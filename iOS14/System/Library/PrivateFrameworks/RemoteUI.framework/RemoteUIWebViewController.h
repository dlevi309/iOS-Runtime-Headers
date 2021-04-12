/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIWebView *)webView;
-(void)donePressed:(id)arg1 ;
-(UIToolbar *)toolbar;
-(void)setScalesPageToFit:(BOOL)arg1 ;
-(BOOL)scalesPageToFit;
-(id<RemoteUIWebViewControllerDelegate>)delegate;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setDelegate:(id<RemoteUIWebViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)loadURL:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)loadURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


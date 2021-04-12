/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol BCWebViewControllerDelegate;
@class WKWebView, NSString, BCInvalidCertificatView, BCProgressIndicatorView, BCServerErrorView, NSURL;

@interface BCWebViewController : UIViewController <WKNavigationDelegate> {

	BOOL _wasCallbackCaptured;
	id<BCWebViewControllerDelegate> _delegate;
	WKWebView* _webkitView;
	NSString* _callbackURI;
	BCInvalidCertificatView* _invalidCertificatView;
	BCProgressIndicatorView* _progressIndicatorView;
	BCServerErrorView* _serverErrorView;
	NSURL* _originURL;

}

@property (nonatomic,retain) BCInvalidCertificatView * invalidCertificatView;              //@synthesize invalidCertificatView=_invalidCertificatView - In the implementation block
@property (nonatomic,retain) BCProgressIndicatorView * progressIndicatorView;              //@synthesize progressIndicatorView=_progressIndicatorView - In the implementation block
@property (nonatomic,retain) BCServerErrorView * serverErrorView;                          //@synthesize serverErrorView=_serverErrorView - In the implementation block
@property (nonatomic,retain) NSURL * originURL;                                            //@synthesize originURL=_originURL - In the implementation block
@property (assign,nonatomic) BOOL wasCallbackCaptured;                                     //@synthesize wasCallbackCaptured=_wasCallbackCaptured - In the implementation block
@property (assign,nonatomic,__weak) id<BCWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WKWebView * webkitView;                                       //@synthesize webkitView=_webkitView - In the implementation block
@property (nonatomic,retain) NSString * callbackURI;                                       //@synthesize callbackURI=_callbackURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BCWebViewControllerDelegate>)delegate;
-(void)setDelegate:(id<BCWebViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reload;
-(void)loadView;
-(void)viewDidLoad;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)setupObservers;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)loadURL:(id)arg1 ;
-(void)setOriginURL:(NSURL *)arg1 ;
-(NSURL *)originURL;
-(BCProgressIndicatorView *)progressIndicatorView;
-(void)setProgressIndicatorView:(BCProgressIndicatorView *)arg1 ;
-(void)removeObservers;
-(WKWebView *)webkitView;
-(void)setWasCallbackCaptured:(BOOL)arg1 ;
-(void)dismissErrorViews;
-(void)setupProgressIndicator;
-(void)setInvalidCertificatView:(BCInvalidCertificatView *)arg1 ;
-(void)setServerErrorView:(BCServerErrorView *)arg1 ;
-(BCServerErrorView *)serverErrorView;
-(BCInvalidCertificatView *)invalidCertificatView;
-(BOOL)wasCallbackCaptured;
-(NSString *)callbackURI;
-(BOOL)isCertificatRelatedError:(id)arg1 ;
-(void)presentCertificatErrorForHost:(id)arg1 ;
-(void)presentServerError;
-(id)initWithCallbackURI:(id)arg1 ;
-(void)viewWillDisappear;
-(void)setWebkitView:(WKWebView *)arg1 ;
-(void)setCallbackURI:(NSString *)arg1 ;
@end


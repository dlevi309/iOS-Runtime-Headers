/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class NSURL, HMHTMLDocument, WKWebView, NAFuture, NSString;

@interface HUWebViewController : UIViewController <WKNavigationDelegate, HUPreloadableViewController> {

	BOOL _showsShareButton;
	BOOL _zoomEnabled;
	BOOL _scrollEnabled;
	NSURL* _URL;
	HMHTMLDocument* _document;
	WKWebView* _webView;
	NAFuture* _loadingFuture;

}

@property (nonatomic,readonly) NAFuture * loadingFuture;                    //@synthesize loadingFuture=_loadingFuture - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) HMHTMLDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                         //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) BOOL showsShareButton;                         //@synthesize showsShareButton=_showsShareButton - In the implementation block
@property (assign,nonatomic) BOOL zoomEnabled;                              //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (assign,nonatomic) BOOL scrollEnabled;                            //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)loadView;
-(WKWebView *)webView;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_share:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(HMHTMLDocument *)document;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(BOOL)zoomEnabled;
-(BOOL)scrollEnabled;
-(id)hu_preloadContent;
-(BOOL)showsShareButton;
-(NAFuture *)loadingFuture;
-(void)setShowsShareButton:(BOOL)arg1 ;
-(id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2 ;
-(void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2 ;
-(BOOL)_shouldShare;
@end


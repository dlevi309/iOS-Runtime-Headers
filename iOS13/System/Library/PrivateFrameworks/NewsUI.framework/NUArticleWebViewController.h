/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/NULoadable.h>

@protocol NULoadingDelegate;
@class FCArticle, WKWebView, SWCrashRetryThrottler, NSString;

@interface NUArticleWebViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegatePrivate, NULoadable> {

	id<NULoadingDelegate> _loadingDelegate;
	FCArticle* _article;
	WKWebView* _webView;
	SWCrashRetryThrottler* _webCrashRetryThrottler;

}

@property (nonatomic,readonly) FCArticle * article;                                         //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                         //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) SWCrashRetryThrottler * webCrashRetryThrottler;              //@synthesize webCrashRetryThrottler=_webCrashRetryThrottler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;                  //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
+(id)webViewConfiguration;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WKWebView *)webView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(FCArticle *)article;
-(id)initWithArticle:(id)arg1 ;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(SWCrashRetryThrottler *)webCrashRetryThrottler;
@end


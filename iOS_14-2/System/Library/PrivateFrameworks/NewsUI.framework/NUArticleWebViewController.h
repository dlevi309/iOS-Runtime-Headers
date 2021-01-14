/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/NULoadable.h>

@protocol NULoadingDelegate, FCHeadlineProviding;
@class WKWebView, SWCrashRetryThrottler, NSString;

@interface NUArticleWebViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegatePrivate, NULoadable> {

	id<NULoadingDelegate> _loadingDelegate;
	id<FCHeadlineProviding> _headline;
	WKWebView* _webView;
	SWCrashRetryThrottler* _webCrashRetryThrottler;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                            //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                         //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) SWCrashRetryThrottler * webCrashRetryThrottler;              //@synthesize webCrashRetryThrottler=_webCrashRetryThrottler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;                  //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
+(id)webViewConfiguration;
-(WKWebView *)webView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<FCHeadlineProviding>)headline;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithHeadline:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(SWCrashRetryThrottler *)webCrashRetryThrottler;
@end


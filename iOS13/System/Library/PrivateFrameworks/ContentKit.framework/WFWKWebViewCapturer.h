/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, WKNavigation, WFWebResource, NSString;

@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate> {

	WKWebView* _webView;
	WKNavigation* _pageNavigation;
	WFWebResource* _webResource;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) WKWebView * webView;                        //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) WKNavigation * pageNavigation;              //@synthesize pageNavigation=_pageNavigation - In the implementation block
@property (nonatomic,retain) WFWebResource * webResource;                //@synthesize webResource=_webResource - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadWebResource:(id)arg1 withSize:(CGSize)arg2 configuration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(WFWebResource *)webResource;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(id)initWithSize:(CGSize)arg1 configuration:(id)arg2 ;
-(void)loadWebResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WKNavigation *)pageNavigation;
-(void)setPageNavigation:(WKNavigation *)arg1 ;
-(void)setWebResource:(WFWebResource *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcher.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, NSURL, NSString;

@interface LPURLFetcher : LPFetcher <WKNavigationDelegate> {

	/*^block*/id _completionHandler;
	WKWebView* _webView;
	NSURL* _URL;
	Class _responseClass;

}

@property (nonatomic,retain) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) Class responseClass;                   //@synthesize responseClass=_responseClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)responseClass;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
-(void)_completedWithData:(id)arg1 MIMEType:(id)arg2 error:(id)arg3 ;
-(void)setResponseClass:(Class)arg1 ;
-(NSURL *)URL;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)cancel;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end


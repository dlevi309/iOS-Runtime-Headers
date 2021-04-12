/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, WKWebView, NSString;

@interface SGDOMParser : NSObject <WKNavigationDelegate> {

	NSObject*<OS_dispatch_semaphore> _loadedSem;
	WKWebView* _webView;
	NSString* _html;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)webView;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(id)parseHTML:(id)arg1 ;
-(id)_parseDocument:(id)arg1 ;
-(void)runJavascriptOnWebView:(id)arg1 withCallback:(/*^block*/id)arg2 ;
@end


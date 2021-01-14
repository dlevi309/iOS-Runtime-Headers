/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@class WKWebView, NSString;

@interface EDMailDropWebViewScriptHandler : NSObject <WKScriptMessageHandler> {

	WKWebView* _webView;
	NSString* _name;
	/*^block*/id _handler;

}

@property (assign,nonatomic,__weak) WKWebView * webView;              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(void)setHandler:(id)arg1 ;
-(NSString *)name;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(id)handler;
-(void)setWebView:(WKWebView *)arg1 ;
@end


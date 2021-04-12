/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@class WKWebView, NSString;

@interface _MFMessageContentViewScriptHandler : NSObject <WKScriptMessageHandler> {

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
-(NSString *)name;
-(id)handler;
-(void)setName:(NSString *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
@end


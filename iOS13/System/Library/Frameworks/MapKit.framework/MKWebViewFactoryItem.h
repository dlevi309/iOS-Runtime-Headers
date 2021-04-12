/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class MKWebBridgeConfiguration, WKWebView, MKWebViewMessageHandlerProxy;

@interface MKWebViewFactoryItem : NSObject {

	MKWebBridgeConfiguration* _bridgeConfiguration;
	WKWebView* _webView;
	MKWebViewMessageHandlerProxy* _messageHandlerProxy;

}

@property (nonatomic,copy,readonly) MKWebBridgeConfiguration * bridgeConfiguration;              //@synthesize bridgeConfiguration=_bridgeConfiguration - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) MKWebViewMessageHandlerProxy * messageHandlerProxy;               //@synthesize messageHandlerProxy=_messageHandlerProxy - In the implementation block
-(WKWebView *)webView;
-(id)initWithBridgeConfiguration:(id)arg1 webView:(id)arg2 messageHandlerProxy:(id)arg3 ;
-(MKWebViewMessageHandlerProxy *)messageHandlerProxy;
-(MKWebBridgeConfiguration *)bridgeConfiguration;
@end


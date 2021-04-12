/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFInjectedJavaScriptWebProcessController;
@class WKWebView;

@interface _SFInjectedJavaScriptController : NSObject {

	WKWebView* _webView;
	id<SFInjectedJavaScriptWebProcessController> _activityProxy;

}
-(id)initWithWebView:(id)arg1 ;
-(void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_webProcessActivityProxy;
@end


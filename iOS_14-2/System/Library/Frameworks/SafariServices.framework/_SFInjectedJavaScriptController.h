/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFInjectedJavaScriptWebProcessController;
@class WKWebView;

@interface _SFInjectedJavaScriptController : NSObject {

	WKWebView* _webView;
	id<SFInjectedJavaScriptWebProcessController> _activityProxy;

}
-(id)_webProcessActivityProxy;
-(id)initWithWebView:(id)arg1 ;
-(void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end


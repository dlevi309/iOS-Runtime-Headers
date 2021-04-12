/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class _WKApplicationManifest, WKWebView;

@interface _SFApplicationManifestFetcher : NSObject {

	/*^block*/id _completionHandler;
	_WKApplicationManifest* _manifest;
	WKWebView* _webView;
	long long _state;

}
-(id)initWithWebView:(id)arg1 ;
-(void)getApplicationManifestWithCompletionHandler:(/*^block*/id)arg1 ;
@end


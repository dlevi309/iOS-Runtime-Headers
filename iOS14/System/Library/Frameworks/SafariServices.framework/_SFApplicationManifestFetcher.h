/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


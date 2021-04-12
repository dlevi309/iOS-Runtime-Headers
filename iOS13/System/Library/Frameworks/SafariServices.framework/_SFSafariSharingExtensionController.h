/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFSharingExtensionWebProcessController;
@class WKWebView;

@interface _SFSafariSharingExtensionController : NSObject {

	WKWebView* _webView;
	id<SFSharingExtensionWebProcessController> _extensionControllerProxy;

}
-(id)initWithWebView:(id)arg1 ;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2 ;
-(void)runJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(id)_extensionControllerProxy;
@end


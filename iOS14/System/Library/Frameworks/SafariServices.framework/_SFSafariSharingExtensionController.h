/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFSharingExtensionWebProcessController;
@class WKWebView;

@interface _SFSafariSharingExtensionController : NSObject {

	WKWebView* _webView;
	id<SFSharingExtensionWebProcessController> _extensionControllerProxy;

}
-(void)runJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(id)initWithWebView:(id)arg1 ;
-(id)_extensionControllerProxy;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2 ;
@end


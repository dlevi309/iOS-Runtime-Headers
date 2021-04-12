/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface, NSMutableDictionary;

@interface SFWebProcessPlugInPageExtensionController : NSObject {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	_WKRemoteObjectInterface* _extensionControllerInterface;
	NSMutableDictionary* _extensionToScriptWorldMap;

}
-(void)dealloc;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(void)_setUpExtensionControllerInterface;
-(void)clearExtensionScriptWorlds;
-(void)_clearExtensionControllerInterface;
-(void)evaluateJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithBrowserContextController:(id)arg1 ;
@end


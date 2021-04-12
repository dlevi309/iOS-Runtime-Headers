/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface, NSMutableDictionary;

@interface SFWebProcessPlugInPageExtensionController : NSObject {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	_WKRemoteObjectInterface* _extensionControllerInterface;
	NSMutableDictionary* _extensionToScriptWorldMap;

}
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(id)initWithBrowserContextController:(id)arg1 ;
-(void)_setUpExtensionControllerInterface;
-(void)_clearExtensionControllerInterface;
-(void)clearExtensionScriptWorlds;
-(void)evaluateJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2 ;
-(void)dealloc;
@end


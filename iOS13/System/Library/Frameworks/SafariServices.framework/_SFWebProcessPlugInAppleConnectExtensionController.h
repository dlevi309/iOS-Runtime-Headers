/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFAppleConnectExtensionMessageReceiver.h>

@protocol _SFAppleConnectExtensionContentScriptMessageReceiver;
@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface, WKWebProcessPlugInScriptWorld, NSString;

@interface _SFWebProcessPlugInAppleConnectExtensionController : NSObject <_SFAppleConnectExtensionMessageReceiver> {

	_SFWebProcessPlugInPageController* _pageController;
	id<_SFAppleConnectExtensionContentScriptMessageReceiver> _appleConnectExtensionContentScriptMessageReceiver;
	_WKRemoteObjectInterface* _extensionMessageReceiverInterface;
	WKWebProcessPlugInScriptWorld* _isolatedWorld;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithPageController:(id)arg1 ;
-(void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2 ;
-(id)_appleConnectExtensionContentScriptMessageReceiver;
-(void)injectAppleConnectBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
@end


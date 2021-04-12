/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFAppleConnectExtensionContentScriptMessageReceiver.h>
#import <libobjc.A.dylib/_SFAppleConnectExtensionPageDelegate.h>

@protocol _SFAppleConnectExtensionMessageReceiver, _SFAppleConnectExtensionUIDelegate;
@class _WKRemoteObjectInterface, WKWebView, NSString;

@interface _SFAppleConnectExtensionPageController : NSObject <_SFAppleConnectExtensionContentScriptMessageReceiver, _SFAppleConnectExtensionPageDelegate> {

	id<_SFAppleConnectExtensionMessageReceiver> _appleConnectExtensionMessageReceiver;
	_WKRemoteObjectInterface* _contentScriptMessageReceiverInterface;
	WKWebView* _webView;
	id<_SFAppleConnectExtensionUIDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFAppleConnectExtensionUIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<_SFAppleConnectExtensionUIDelegate>)delegate;
-(void)setDelegate:(id<_SFAppleConnectExtensionUIDelegate>)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)dismissExtensionViewController:(id)arg1 ;
-(void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)presentExtensionViewController:(id)arg1 ;
-(void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2 ;
-(id)_appleConnectExtensionMessageReceiver;
@end


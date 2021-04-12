/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol WebFrameLoadDelegate <NSObject>
@optional
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 willCloseFrame:(id)arg2;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
-(void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
-(void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 windowScriptObjectAvailable:(id)arg2;
-(void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2 forFrame:(id)arg3;

@end


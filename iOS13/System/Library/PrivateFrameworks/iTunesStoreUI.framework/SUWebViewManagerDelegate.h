/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUWebViewManagerDelegate <NSObject>
@optional
-(id)newScriptInterfaceForWebViewManager:(id)arg1;
-(id)viewControllerForWebViewManager:(id)arg1;
-(void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;
-(void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;
-(void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2;
-(void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;
-(void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;
-(void)webViewManagerDidFinishLoad:(id)arg1;
-(void)webViewManagerDidStartLoad:(id)arg1;
-(void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(CGRect)arg2;

@end


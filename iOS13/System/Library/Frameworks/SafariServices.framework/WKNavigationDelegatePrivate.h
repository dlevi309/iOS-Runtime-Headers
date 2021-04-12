/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>
@optional
-(void)_webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)_webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 userInfo:(id)arg3 decisionHandler:(/*^block*/id)arg4;
-(void)_webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 userInfo:(id)arg4 decisionHandler:(/*^block*/id)arg5;
-(void)_webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 userInfo:(id)arg3;
-(void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;
-(void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
-(void)_webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3;
-(void)_webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3;
-(void)_webViewDidCancelClientRedirect:(id)arg1;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
-(void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
-(void)_webView:(id)arg1 authenticationChallenge:(id)arg2 shouldAllowLegacyTLS:(/*^block*/id)arg3;
-(void)_webView:(id)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
-(void)_webViewWebProcessDidCrash:(id)arg1;
-(void)_webViewWebProcessDidBecomeResponsive:(id)arg1;
-(void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;
-(id)_webCryptoMasterKeyForWebView:(id)arg1;
-(void)_webViewDidBeginNavigationGesture:(id)arg1;
-(void)_webViewWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)_webView:(id)arg1 willSnapshotBackForwardListItem:(id)arg2;
-(void)_webViewDidRemoveNavigationGestureSnapshot:(id)arg1;
-(void)_webView:(id)arg1 URL:(id)arg2 contentRuleListIdentifiers:(id)arg3 notifications:(id)arg4;
-(void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4;
-(void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;
-(void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;
-(void)_webViewDidRequestPasswordForQuickLookDocument:(id)arg1;
-(void)_webView:(id)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end


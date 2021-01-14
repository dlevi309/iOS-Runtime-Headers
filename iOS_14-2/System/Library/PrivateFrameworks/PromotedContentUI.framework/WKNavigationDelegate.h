/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
*/


@protocol WKNavigationDelegate <NSObject>
@optional
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 decisionHandler:(/*^block*/id)arg4;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)webViewWebContentProcessDidTerminate:(id)arg1;
-(void)webView:(id)arg1 authenticationChallenge:(id)arg2 shouldAllowDeprecatedTLS:(/*^block*/id)arg3;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _WKWebAuthenticationPanelDelegate <NSObject>
@optional
-(void)panel:(id)arg1 updateWebAuthenticationPanel:(long long)arg2;
-(void)panel:(id)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;
-(void)panel:(id)arg1 requestPINWithRemainingRetries:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)panel:(id)arg1 selectAssertionResponse:(id)arg2 source:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)panel:(id)arg1 decidePolicyForLocalAuthenticatorWithCompletionHandler:(/*^block*/id)arg2;

@end


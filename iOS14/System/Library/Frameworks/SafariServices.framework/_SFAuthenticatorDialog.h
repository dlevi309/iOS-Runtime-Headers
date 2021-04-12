/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _WKWebAuthenticationPanel;


@protocol _SFAuthenticatorDialog
@property (nonatomic,readonly) _WKWebAuthenticationPanel * panel; 
@property (assign,nonatomic) BOOL isForUpdateOnly; 
@required
-(_WKWebAuthenticationPanel *)panel;
-(BOOL)isForUpdateOnly;
-(void)updateWebAuthenticationPanel:(long long)arg1;
-(void)requestPINWithRemainingRetries:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectAssertionResponse:(id)arg1 source:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(/*^block*/id)arg1;
-(void)setIsForUpdateOnly:(BOOL)arg1;

@end


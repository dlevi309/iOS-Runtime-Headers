/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@protocol AMSURLProtocolDelegate <NSObject>
@optional
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)AMSURLSession:(id)arg1 task:(id)arg2 shouldFailWithServerError:(id)arg3;
-(void)AMSURLSession:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(void)AMSURLSession:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)AMSURLSession:(id)arg1 shouldFailWithServerError:(id)arg2;
-(BOOL)AMSURLSession:(id)arg1 shouldHandleAuthenticationForAccount:(id)arg2 dialogDictionary:(id)arg3;
-(BOOL)AMSURLSession:(id)arg1 shouldHandleDialogDictionary:(id)arg2;

@end


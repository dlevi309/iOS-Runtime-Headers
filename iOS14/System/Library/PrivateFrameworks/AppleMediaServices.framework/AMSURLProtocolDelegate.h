/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSURLProtocolDelegate <NSObject>
@optional
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)AMSURLSession:(id)arg1 task:(id)arg2 shouldFailWithServerError:(id)arg3;
-(void)AMSURLSession:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(void)AMSURLSession:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)AMSURLSession:(id)arg1 shouldFailWithServerError:(id)arg2;
-(BOOL)AMSURLSession:(id)arg1 shouldHandleAuthenticationForAccount:(id)arg2 dialogDictionary:(id)arg3;
-(BOOL)AMSURLSession:(id)arg1 shouldHandleDialogDictionary:(id)arg2;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4;

@end


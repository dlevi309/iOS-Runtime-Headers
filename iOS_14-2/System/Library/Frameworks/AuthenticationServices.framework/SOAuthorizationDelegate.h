/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@protocol SOAuthorizationDelegate <NSObject>
@optional
-(void)authorizationDidCancel:(id)arg1;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
-(void)authorizationDidNotHandle:(id)arg1;
-(void)authorizationDidComplete:(id)arg1;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
-(void)authorization:(id)arg1 presentViewController:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end


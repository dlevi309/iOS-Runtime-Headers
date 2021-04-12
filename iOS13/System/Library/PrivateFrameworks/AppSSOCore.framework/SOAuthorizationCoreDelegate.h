/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@protocol SOAuthorizationCoreDelegate <NSObject>
@optional
-(void)authorizationDidNotHandle:(id)arg1;
-(void)authorizationDidCancel:(id)arg1;
-(void)authorizationDidComplete:(id)arg1;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2;

@end


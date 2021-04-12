/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

@required
-(void)cancelAuthenticationChallenge:(id)arg1;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end


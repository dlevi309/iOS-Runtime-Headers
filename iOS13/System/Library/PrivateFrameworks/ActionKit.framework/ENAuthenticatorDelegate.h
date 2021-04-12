/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol ENAuthenticatorDelegate <NSObject>
@required
-(id)userStoreClientForBootstrapping;
-(void)authenticatorDidAuthenticateWithCredentials:(id)arg1 authInfo:(id)arg2;
-(void)authenticatorDidFailWithError:(id)arg1;

@end


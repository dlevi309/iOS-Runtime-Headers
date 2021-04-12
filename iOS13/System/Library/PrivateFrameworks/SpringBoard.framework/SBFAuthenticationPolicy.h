/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBFAuthenticationPolicy <NSObject>
@optional
-(void)cachePasscode:(id)arg1;
-(void)clearPasscodeCache;
-(void)passcodeAuthenticationFailedWithError:(id)arg1;

@required
-(BOOL)usesSecureMode;
-(void)wipeDeviceWithReason:(id)arg1;
-(BOOL)shouldClearBlockStateOnSync;
-(BOOL)allowAuthenticationRevocation;

@end


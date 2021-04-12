/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


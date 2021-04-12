/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@interface LKLogoutSupport : NSObject
-(id)init;
-(BOOL)isCurrentUserAnonymous;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logoutToLoginUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_canLogoutToLoginSession;
-(void)logoutToLoginWindowWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)logoutWarningMessage;
@end


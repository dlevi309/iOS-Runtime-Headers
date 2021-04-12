/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@interface LKLogoutSupport : NSObject
-(id)init;
-(BOOL)isCurrentUserAnonymous;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logoutToLoginWindowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logoutToLoginUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_canLogoutToLoginSession;
-(id)logoutWarningMessage;
@end


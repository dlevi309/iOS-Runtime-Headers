/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@protocol LKLoginDaemonProtocol <LKLoginControllerProtocol,LKLoginPerformanceTestProtocol>
@required
-(void)checkInWithCurrentEnvironment:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)isReadyToLoginWithCompletionHandler:(/*^block*/id)arg1;
-(void)isReadyToLogoutWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateGlobalDefaultsValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


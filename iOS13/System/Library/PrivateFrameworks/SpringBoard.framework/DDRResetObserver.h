/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol DDRResetObserver <NSObject>
@optional
-(void)resetService:(id)arg1 willBeginDataResetWithMode:(long long)arg2;
-(void)resetService:(id)arg1 didBeginDataResetWithMode:(long long)arg2;
-(void)resetService:(id)arg1 didCompleteDataResetMode:(long long)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4;

@end


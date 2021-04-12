/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol DDRResetObserver <NSObject>
@optional
-(void)resetService:(id)arg1 willBeginDataResetWithMode:(long long)arg2;
-(void)resetService:(id)arg1 didCompleteDataResetMode:(long long)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4;
-(void)resetService:(id)arg1 didBeginDataResetWithMode:(long long)arg2;

@end


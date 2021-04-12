/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/


@protocol TSClockClient <NSObject>
@optional
-(void)didResetClock:(id)arg1;
-(void)didChangeClockMasterForClock:(id)arg1;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1;
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didProcessSync:(id)arg1;
-(void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/


@protocol TSClockClient <NSObject>
@optional
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
-(void)didChangeClockMasterForClock:(id)arg1;
-(void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1;
-(void)didResetClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didProcessSync:(id)arg1;

@end


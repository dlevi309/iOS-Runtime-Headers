/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SAThreadState.h>

@interface SAThreadStateMicrostackshot : SAThreadState {

	unsigned char _microstackshotFlags;
	unsigned short _cpuSpeed100Mhz;
	unsigned short _cpuNum;

}
+(id)stateWithMicrostackshot:(const micro_snapshot*)arg1 thread:(const thread_snapshot*)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 ;
-(BOOL)isUserActive;
-(BOOL)isMicrostackshot;
-(BOOL)isInterruptRecord;
-(BOOL)isTimerArmingRecord;
-(BOOL)isIORecord;
-(BOOL)isUserMode;
-(BOOL)isBatteryAndUserActivityValid;
-(BOOL)isOnBattery;
-(unsigned)cpuSpeedMhz;
-(unsigned)cpuNum;
-(unsigned char)microstackshotFlags;
-(id)initWithMicrostackshot:(const micro_snapshot*)arg1 thread:(const thread_snapshot*)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 ;
-(id)initWithMicrostackshotFlags:(unsigned char)arg1 ;
@end


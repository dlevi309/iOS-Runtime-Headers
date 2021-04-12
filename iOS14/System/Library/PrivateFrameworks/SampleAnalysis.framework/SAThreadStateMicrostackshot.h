/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SAThreadState.h>

@interface SAThreadStateMicrostackshot : SAThreadState {

	unsigned char _microstackshotFlags;
	unsigned short _cpuSpeed100Mhz;

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
-(unsigned char)microstackshotFlags;
@end


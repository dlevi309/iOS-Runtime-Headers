/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSClock.h>

@interface TSMachAbsoluteNanoseconds : TSClock {

	mach_timebase_info _timebaseInfo;

}
+(id)machAbsoluteNanosecondsClock;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(id)clockName;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1 ;
-(unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSTimeLineFilter.h>

@protocol OS_dispatch_queue;
@class NSObject, TSIntervalFilter;

@interface TSIntervalTimeLineFilter : TSTimeLineFilter {

	unsigned long long _AAnchor[8];
	unsigned long long _BAnchor[8];
	long long _AEntries[8];
	long long _BEntries[8];
	NSObject*<OS_dispatch_queue> _syncQueue;
	long long _validIndex;
	TSIntervalFilter* _aIntervalFilter;
	TSIntervalFilter* _bIntervalFilter;

}
-(void)dealloc;
-(void)addTimestamps:(SCD_Struct_TS0)arg1 ;
-(SCD_Struct_TS0)rateRatio;
-(unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1 ;
-(unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1 ;
-(unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1 ;
-(unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1 ;
-(void)resetFilter;
-(BOOL)canConvertTime;
-(void)changeToNewFilterSize:(unsigned char)arg1 ;
-(id)initWithExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 filterSize:(unsigned char)arg3 ;
-(void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 ;
-(void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 multiIntervalCount:(unsigned)arg3 ;
@end


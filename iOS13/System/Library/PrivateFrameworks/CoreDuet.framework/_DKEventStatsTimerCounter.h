/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)counterInCollection:(id)arg1 withEventName:(id)arg2 ;
-(unsigned long long)count;
-(id)eventName;
-(void)addTimingWithTimeInterval:(double)arg1 ;
-(void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(_DKEventStatsCounterInternal *)internal;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
@end


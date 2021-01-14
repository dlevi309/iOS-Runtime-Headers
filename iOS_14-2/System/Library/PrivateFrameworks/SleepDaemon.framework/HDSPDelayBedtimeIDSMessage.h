/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPEventRecordMessage.h>

@class NSDate;

@interface HDSPDelayBedtimeIDSMessage : HDSPEventRecordMessage

@property (nonatomic,readonly) NSDate * bedtimeDelayedUntil; 
-(id)dateDescription;
-(id)initWithBedtimeDelayedUntilDate:(id)arg1 timeout:(double)arg2 ;
-(NSDate *)bedtimeDelayedUntil;
@end


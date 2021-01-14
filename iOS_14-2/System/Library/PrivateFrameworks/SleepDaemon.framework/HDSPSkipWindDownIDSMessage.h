/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPEventRecordMessage.h>

@class NSDate;

@interface HDSPSkipWindDownIDSMessage : HDSPEventRecordMessage

@property (nonatomic,readonly) NSDate * windDownSkippedDate; 
-(id)dateDescription;
-(NSDate *)windDownSkippedDate;
-(id)initWithWindDownSkippedDate:(id)arg1 timeout:(double)arg2 ;
@end


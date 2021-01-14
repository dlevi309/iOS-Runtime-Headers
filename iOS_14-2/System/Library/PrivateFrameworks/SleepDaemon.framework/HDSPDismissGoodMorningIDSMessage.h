/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPEventRecordMessage.h>

@class NSDate;

@interface HDSPDismissGoodMorningIDSMessage : HDSPEventRecordMessage

@property (nonatomic,readonly) NSDate * goodMorningDismissed; 
-(id)dateDescription;
-(id)initWithGoodMorningDismissedDate:(id)arg1 timeout:(double)arg2 ;
-(NSDate *)goodMorningDismissed;
@end


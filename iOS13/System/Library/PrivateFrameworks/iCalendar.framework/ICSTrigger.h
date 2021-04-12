/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(id)initWithDuration:(id)arg1 ;
-(BOOL)isDurationBased;
-(void)fixAlarmTrigger;
-(id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2 ;
-(id)travelRelativeDuration;
@end


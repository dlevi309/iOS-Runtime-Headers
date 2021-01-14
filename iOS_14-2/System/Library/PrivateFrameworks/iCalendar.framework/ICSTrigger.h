/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
-(id)initWithDate:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(id)initWithDuration:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(BOOL)isDurationBased;
-(void)fixAlarmTrigger;
-(id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2 ;
-(id)travelRelativeDuration;
@end


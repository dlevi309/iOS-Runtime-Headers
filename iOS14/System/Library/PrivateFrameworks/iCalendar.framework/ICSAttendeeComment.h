/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue;

@interface ICSAttendeeComment : ICSProperty

@property (nonatomic,retain) NSString * x_calendarserver_attendee_ref; 
@property (nonatomic,retain) ICSDateValue * x_calendarserver_dtstamp; 
-(void)setComment:(id)arg1 ;
-(NSString *)x_calendarserver_attendee_ref;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(id)initWithComment:(id)arg1 ;
-(void)setX_calendarserver_attendee_ref:(NSString *)arg1 ;
-(void)setX_calendarserver_dtstamp:(ICSDateValue *)arg1 ;
-(ICSDateValue *)x_calendarserver_dtstamp;
@end


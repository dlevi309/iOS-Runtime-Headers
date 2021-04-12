/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, ICSDuration, ICSUserAddress, NSString;

@interface ICSFreeBusy : ICSComponent

@property (retain) NSArray * attendee; 
@property (retain) ICSDate * created; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (retain) ICSDuration * duration; 
@property (nonatomic,retain) NSArray * freebusy; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSString * summary; 
@property (retain) NSString * uid; 
@property (nonatomic,retain) NSString * x_calendarserver_mask_uid; 
@property (nonatomic,retain) NSString * x_calendarserver_extended_freebusy; 
+(id)name;
-(NSArray *)freebusy;
-(void)setFreebusy:(NSArray *)arg1 ;
-(NSString *)x_calendarserver_mask_uid;
-(void)setX_calendarserver_mask_uid:(NSString *)arg1 ;
-(NSString *)x_calendarserver_extended_freebusy;
-(void)setX_calendarserver_extended_freebusy:(NSString *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSString, ICSDuration, ICSUserAddress, NSURL;

@interface ICSAvailability : ICSComponent

@property (retain) ICSDate * created; 
@property (retain) NSString * uid; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDuration * duration; 
@property (retain) ICSDate * dtstart; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * last_modified; 
@property (assign) unsigned long long sequence; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSString * summary; 
@property (retain) NSURL * url; 
+(id)name;
@end


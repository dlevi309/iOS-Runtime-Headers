/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * end; 
@property (nonatomic,retain) SACalendar * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarRange;
+(id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(SACalendar *)start;
-(id)groupIdentifier;
-(SACalendar *)end;
-(void)setStart:(SACalendar *)arg1 ;
-(void)setEnd:(SACalendar *)arg1 ;
-(id)encodedClassName;
@end


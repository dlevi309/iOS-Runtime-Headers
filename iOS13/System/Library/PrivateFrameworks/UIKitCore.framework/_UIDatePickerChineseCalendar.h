/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar;

@interface _UIDatePickerChineseCalendar : NSCalendar {

	NSCalendar* realCalendar;

}

@property (assign) NSCalendar * realCalendar; 
+(id)cyclicalFromRelated:(id)arg1 ;
+(id)relatedFromCyclical:(id)arg1 ;
-(id)calendarIdentifier;
-(void)setTimeZone:(id)arg1 ;
-(id)dateFromComponents:(id)arg1 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(void)setRealCalendar:(NSCalendar *)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(NSCalendar *)realCalendar;
@end


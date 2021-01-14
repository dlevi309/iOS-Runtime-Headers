/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setTimeZone:(id)arg1 ;
-(id)calendarIdentifier;
-(id)dateFromComponents:(id)arg1 ;
-(NSCalendar *)realCalendar;
-(void)setRealCalendar:(NSCalendar *)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithCalendar:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
@end


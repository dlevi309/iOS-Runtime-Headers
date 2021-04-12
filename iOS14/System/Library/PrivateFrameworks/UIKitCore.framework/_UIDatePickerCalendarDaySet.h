/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSCalendar, NSMutableDictionary;

@interface _UIDatePickerCalendarDaySet : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _loadedDays;

}
-(id)loadedDays;
-(id)_createDaysForMonth:(id)arg1 ;
-(id)_partialDaysForMonth:(id)arg1 atBeginningOfMonth:(BOOL)arg2 count:(unsigned long long)arg3 ;
-(void)cleanupDaysKeepingDaysForMonths:(id)arg1 ;
-(id)daysForMonth:(id)arg1 includingOverlapDays:(BOOL)arg2 ;
-(id)initWithCalendar:(id)arg1 ;
@end


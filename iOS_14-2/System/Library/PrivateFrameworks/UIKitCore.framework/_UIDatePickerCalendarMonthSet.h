/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSCalendar, _UIDatePickerCalendarMonth, NSMutableIndexSet, NSMutableOrderedSet;

@interface _UIDatePickerCalendarMonthSet : NSObject {

	NSCalendar* _calendar;
	unsigned long long _rangeLength;
	_UIDatePickerCalendarMonth* _referenceMonth;
	NSMutableIndexSet* _loadedMonthOffsets;
	NSMutableOrderedSet* _loadedMonths;

}
-(unsigned long long)_shiftReferenceMonthToFitOffsetMonthsIfNecessary:(_UISignedRange)arg1 ;
-(void)insertMonthsAroundMonth:(id)arg1 loadedIndexRange:(NSRange*)arg2 ;
-(void)_ensureReferenceMonthWithFallbackMonth:(id)arg1 ;
-(id)monthAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfMonth:(id)arg1 ;
-(id)_monthAtOffset:(long long)arg1 ;
-(_UISignedRange)_offsetRangeForMonth:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 rangeLength:(unsigned long long)arg2 ;
-(void)reloadWithMonthsAroundMonth:(id)arg1 ;
-(id)loadedMonths;
-(NSRange)_loadOffsetRange:(_UISignedRange)arg1 ;
-(void)_clearLoadedData;
@end


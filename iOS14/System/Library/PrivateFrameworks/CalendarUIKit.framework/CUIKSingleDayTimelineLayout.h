/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;
#import <CalendarUIKit/CalendarUIKit-Structs.h>
@class NSArray, NSMutableArray, NSDate, NSCalendar;

@interface CUIKSingleDayTimelineLayout : NSObject {

	NSArray* _occurrences;
	unsigned long long _currentOccurrenceIndex;
	id<CUIKSingleDayTimelineViewItem> _currentOccurrence;
	NSMutableArray* _partitions;
	NSMutableArray* _occurrenceBuckets;
	NSMutableArray* _collidingOccurrences;
	NSDate* _startOfDay;
	NSDate* _endOfDay;
	double _startOfDayAbsoluteTime;
	double _endOfDayAbsoluteTime;
	CGRect _frame;
	NSCalendar* _calendar;
	id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;

}
-(id)initWithOccurrences:(id)arg1 startOfDay:(id)arg2 endOfDay:(id)arg3 geometryDelegate:(id)arg4 screenUtilsDelegate:(id)arg5 calendar:(id)arg6 ;
-(double)_topOfOccurrence:(id)arg1 ;
-(void)_mergePartitions;
-(double)_adjustedEndTimeForOccurrence:(id)arg1 ;
-(double)_adjustedStartTimeForOccurrence:(id)arg1 ;
-(unsigned long long)_enumerationOptions;
-(double)_endOfCollisionZoneForY:(double)arg1 occurrence:(id)arg2 ;
-(void)_stampOccurrenceFrames;
-(double)_effectiveEndTimeForOccurrence:(id)arg1 ;
-(BOOL)_inputIsInvalid;
-(void)_findCollidingOccurrences;
-(void)_reclaimSpaceFromStackedOccurrences;
-(void)_generateNewPartitions;
-(void)_capVisibleTextForBucket:(id)arg1 ;
-(CGRect)_rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2 ;
-(void)_initializeFirstGridStripe;
-(BOOL)isRightToLeftLayout;
-(void)_calculateVerticalFrameAspectsForOccurrence:(id)arg1 ;
-(double)_combinedWidthOfPartitions;
-(void)applyLayoutToOccurrences;
-(void)_popOccurrencesInPartition:(id)arg1 endingBeforeTime:(double)arg2 ;
-(void)_putCollidingOccurrencesIntoBuckets;
@end


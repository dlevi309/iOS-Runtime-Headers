/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject {

	NSMutableArray* _cachedSpans;

}
+(id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)init;
-(id)description;
-(id)spans;
-(id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)insertSpans:(id)arg1 ;
-(BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(long long)_currentMaxSpanTypeIn:(id)arg1 ;
-(id)cachedSpansFromSpans:(id)arg1 ;
-(id)_eliminateOverlapsInResults:(id)arg1 ;
-(id)deDupSpans:(id)arg1 ;
-(void)sanitizeAndInsertResults:(id)arg1 inRange:(id)arg2 ;
@end


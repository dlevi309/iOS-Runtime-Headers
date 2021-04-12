/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject {

	NSMutableArray* _cachedSpans;

}
+(id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)spans;
-(id)init;
-(id)description;
-(void)insertSpans:(id)arg1 ;
-(id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(long long)_currentMaxSpanTypeIn:(id)arg1 ;
-(id)cachedSpansFromSpans:(id)arg1 ;
-(id)_eliminateOverlapsInResults:(id)arg1 ;
-(id)deDupSpans:(id)arg1 ;
-(void)sanitizeAndInsertResults:(id)arg1 inRange:(id)arg2 ;
@end


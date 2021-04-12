/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CalSearchDataSink <NSObject>
@optional
-(BOOL)calSearchShouldStopSearching:(id)arg1;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;

@required
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4;
-(void)calSearchComplete:(id)arg1;

@end


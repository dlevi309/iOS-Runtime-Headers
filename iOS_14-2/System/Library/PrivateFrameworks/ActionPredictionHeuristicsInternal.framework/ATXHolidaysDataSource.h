/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXHolidaysDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)holidaysFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_holidayCalendarForEventStore:(id)arg1 ;
@end


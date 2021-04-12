/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice, PPEventStore;

@interface ATXExtraordinaryEventsDataSource : NSObject {

	ATXHeuristicDevice* _device;
	PPEventStore* _extraordinaryEventStore;

}
+(id)_endOfDayAfterDate:(id)arg1 numberOfDays:(long long)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)_ekEventForHighlight:(id)arg1 eventStore:(id)arg2 ;
-(id)_fetchExtraordinaryEvents;
-(void)getEventsWithProminentFeature:(id)arg1 callback:(/*^block*/id)arg2 ;
@end


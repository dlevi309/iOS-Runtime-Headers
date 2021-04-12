/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol OS_dispatch_queue;
@class CalDateRange, NSDictionary, NSObject, NSDate;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {

	CalDateRange* _cachedDateRange;
	CalDateRange* _cachedCentralYear;
	NSDictionary* _cachedFirstsOfMonths;
	NSDictionary* _cachedFirstsOfYears;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentGeneration;
	NSDate* _currentRequest;
	BOOL _loadPending;
	/*^block*/id _significantDatesChangedHandler;

}

@property (nonatomic,copy) id significantDatesChangedHandler;              //@synthesize significantDatesChangedHandler=_significantDatesChangedHandler - In the implementation block
-(id)init;
-(void)_invalidateCaches;
-(id)firstOfOverlayYearsForCalendarMonth:(id)arg1 ;
-(void)_requestDate:(id)arg1 ;
-(void)setSignificantDatesChangedHandler:(id)arg1 ;
-(void)_load;
-(id)significantDatesChangedHandler;
-(id)firstOfOverlayMonthsForCalendarMonth:(id)arg1 ;
-(void)dealloc;
@end


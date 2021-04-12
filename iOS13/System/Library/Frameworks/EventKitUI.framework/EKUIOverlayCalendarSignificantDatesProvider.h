/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_load;
-(id)firstOfOverlayMonthsForCalendarMonth:(id)arg1 ;
-(id)firstOfOverlayYearsForCalendarMonth:(id)arg1 ;
-(void)_invalidateCaches;
-(void)_requestDate:(id)arg1 ;
-(id)significantDatesChangedHandler;
-(void)setSignificantDatesChangedHandler:(id)arg1 ;
@end


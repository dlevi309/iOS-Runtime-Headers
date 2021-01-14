/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSCalendar, UICollectionViewDiffableDataSource, _UIDatePickerCalendarMonthSet, _UIDatePickerCalendarDaySet;

@interface _UIDatePickerCalendarViewDataSourceController : NSObject {

	NSCalendar* _calendar;
	UICollectionViewDiffableDataSource* _dataSource;
	_UIDatePickerCalendarMonthSet* _loadedMonthSet;
	_UIDatePickerCalendarDaySet* _loadedDaySet;

}
-(id)_loadedDays;
-(void)_reloadDataSourceWithScrollPosition:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadDataSourceAroundMonth:(id)arg1 ;
-(long long)cleanupDataSourceWithScrollPositionIfNecessary:(id)arg1 ;
-(long long)prepareDataSourceWithScrollPositionIfNecessary:(id)arg1 ;
-(id)_loadedMonths;
@end


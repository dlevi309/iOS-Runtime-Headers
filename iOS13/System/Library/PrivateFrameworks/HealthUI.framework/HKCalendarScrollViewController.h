/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/HKCalendarWeekViewDelegate.h>
#import <libobjc.A.dylib/HKDateCacheObserver.h>

@protocol HKCalendarScrollViewControllerDelegate;
@class NSCalendar, HKDateCache, HKMonthDayCell, NSDate, NSMutableArray, UIScrollView, NSString;

@interface HKCalendarScrollViewController : HKViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver> {

	unsigned long long _numberOfRows;
	NSCalendar* _calendar;
	HKDateCache* _dateCache;
	HKMonthDayCell* _selectedCell;
	NSDate* _initiallyCenteredDate;
	NSMutableArray* _weekViews;
	BOOL _needsInitialOffset;
	double _topInset;
	id<HKCalendarScrollViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) double topInset;                                                         //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic,__weak) id<HKCalendarScrollViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<HKCalendarScrollViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKCalendarScrollViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
-(UIScrollView *)scrollView;
-(void)setSelectedCell:(id)arg1 ;
-(CGRect)_visibleContentRect;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(void)week:(id)arg1 cellSelected:(id)arg2 ;
-(id)initWithSelectedDate:(id)arg1 ;
-(void)scrollToDate:(id)arg1 animateIfPossible:(BOOL)arg2 ;
-(id)_weekViewContainingTitleForThisMonth;
-(void)_selectTodayCell;
-(void)_createWeekViews;
-(CGPoint)_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(double)_heightOfAllWeekCells;
-(void)_selectCellForDate:(id)arg1 ;
-(void)updateVisibleAccessoryViews;
-(id)_weekForDate:(id)arg1 ;
-(id)_weekViewForToday;
-(void)_pulseCircle;
-(id)_currentlyCenteredVisibleWeek;
-(id)_startDateToTileWeekViews:(id)arg1 ;
-(CGPoint)_centerPointToCenterDate:(id)arg1 ;
-(BOOL)_dateIsVisible:(id)arg1 ;
-(unsigned long long)_firstVisibleWeekIndex;
-(void)_findCenteredWeekAndUpdateTitleIfNecessary;
-(void)_refreshViewsAndUpdateToday;
-(void)scrollToToday;
@end


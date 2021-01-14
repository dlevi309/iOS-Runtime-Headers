/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineLayoutScreenUtils.h>
#import <libobjc.A.dylib/EKDayOccurrenceViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol EKDayViewContentDelegate;
@class EKDayGridView, UIView, NSMutableArray, EKEvent, EKCalendarDate, NSCalendar, UITraitCollection, UIColor, NSTimeZone, NSString;

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, EKDayOccurrenceViewDelegate, UIGestureRecognizerDelegate> {

	EKDayGridView* _grid;
	UIView* _saturdayDarkeningView;
	UIView* _sundayDarkeningView;
	unsigned long long _daysToDisplay;
	NSMutableArray* _lastLayoutWidthForDay;
	BOOL _loadingOccurrences;
	BOOL _putSelectionOnTop;
	BOOL _hasCustomOccurrencePadding;
	EKEvent* _selectedEvent;
	NSMutableArray* _dayStarts;
	NSMutableArray* _itemsForPreloadByDay;
	NSMutableArray* _itemsForPreloadByDayByEndDate;
	NSMutableArray* _itemsByDay;
	NSMutableArray* _itemsByDayByEndDate;
	CGRect _latestVisibleRect;
	double* _visiblePinnedStackHeightAbove;
	double* _visiblePinnedStackHeightBelow;
	NSMutableArray* _geometryDelegates;
	NSMutableArray* _reusableViews;
	BOOL _dataLoaded;
	long long _sizeClass;
	BOOL _shouldLayoutInReverse;
	BOOL _shouldAnimateLayout;
	NSMutableArray* _temporaryViewCacheByDay;
	long long _saveTemporaryViewsEntryCount;
	BOOL _offscreenOccurrencePinningEnabled;
	BOOL _allowsOccurrenceSelection;
	BOOL _eventsFillGrid;
	BOOL _usesSmallText;
	BOOL _darkensWeekends;
	BOOL _reduceLayoutProcessingForAnimation;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	NSCalendar* _calendar;
	UITraitCollection* _stagedTraitCollection;
	id<EKDayViewContentDelegate> _delegate;
	double _fixedDayWidth;
	UIColor* _occurrenceTitleColor;
	UIColor* _occurrenceTimeColor;
	UIColor* _occurrenceLocationColor;
	UIColor* _occurrenceTextBackgroundColor;
	long long _occurrenceBackgroundStyle;
	EKEvent* _dimmedOccurrence;
	UIEdgeInsets _occurrencePadding;

}

@property (nonatomic,retain) UITraitCollection * stagedTraitCollection;                 //@synthesize stagedTraitCollection=_stagedTraitCollection - In the implementation block
@property (nonatomic,copy) EKCalendarDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,__weak) id<EKDayViewContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL offscreenOccurrencePinningEnabled;                    //@synthesize offscreenOccurrencePinningEnabled=_offscreenOccurrencePinningEnabled - In the implementation block
@property (assign,nonatomic) BOOL allowsOccurrenceSelection;                            //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL eventsFillGrid;                                       //@synthesize eventsFillGrid=_eventsFillGrid - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText;                                        //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) BOOL darkensWeekends;                                      //@synthesize darkensWeekends=_darkensWeekends - In the implementation block
@property (assign,nonatomic) BOOL reduceLayoutProcessingForAnimation;                   //@synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation - In the implementation block
@property (assign,nonatomic) double fixedDayWidth;                                      //@synthesize fixedDayWidth=_fixedDayWidth - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTitleColor;                            //@synthesize occurrenceTitleColor=_occurrenceTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTimeColor;                             //@synthesize occurrenceTimeColor=_occurrenceTimeColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceLocationColor;                         //@synthesize occurrenceLocationColor=_occurrenceLocationColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor;                   //@synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor - In the implementation block
@property (assign,nonatomic) long long occurrenceBackgroundStyle;                       //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets occurrencePadding;                            //@synthesize occurrencePadding=_occurrencePadding - In the implementation block
@property (nonatomic,readonly) double firstEventSecond; 
@property (setter=selectEvent:,nonatomic,retain) EKEvent * selectedEvent; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence;                                //@synthesize dimmedOccurrence=_dimmedOccurrence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)grid;
-(EKEvent *)dimmedOccurrence;
-(BOOL)reduceLayoutProcessingForAnimation;
-(id)selectedCopyViewForDayOccurrenceView:(id)arg1 ;
-(void)setOccurrenceLocationColor:(UIColor *)arg1 ;
-(BOOL)showsLeftBorder;
-(NSTimeZone *)timeZone;
-(EKCalendarDate *)endDate;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(BOOL)usesSmallText;
-(id)occurrenceViews;
-(void)setOccurrenceBackgroundStyle:(long long)arg1 ;
-(void)setReduceLayoutProcessingForAnimation:(BOOL)arg1 ;
-(void)selectEvent:(id)arg1 ;
-(UIColor *)occurrenceTitleColor;
-(UIColor *)occurrenceTextBackgroundColor;
-(BOOL)eventsFillGrid;
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(void)loadOccurrences:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(EKEvent *)selectedEvent;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(UIColor *)occurrenceLocationColor;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
-(UIColor *)occurrenceTimeColor;
-(void)setOccurrenceTitleColor:(UIColor *)arg1 ;
-(long long)occurrenceBackgroundStyle;
-(void)setOccurrenceTimeColor:(UIColor *)arg1 ;
-(void)setEventsFillGrid:(BOOL)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(UIColor *)arg1 ;
-(void)setViewsDimmed:(BOOL)arg1 forEvent:(id)arg2 ;
-(id<EKDayViewContentDelegate>)delegate;
-(EKCalendarDate *)startDate;
-(id)lastDisplayedSecond;
-(void)setOccurrencePadding:(UIEdgeInsets)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(NSCalendar *)calendar;
-(BOOL)_getBottomPinRegion:(double*)arg1 dayIndex:(unsigned long long*)arg2 forPoint:(CGPoint)arg3 ;
-(void)setFixedDayWidth:(double)arg1 ;
-(NSRange)_dayRangeForEvent:(id)arg1 useProposedTime:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 ;
-(void)dayOccurrenceViewSelected:(id)arg1 atPoint:(CGPoint)arg2 wasTapped:(BOOL)arg3 ;
-(NSRange)_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 numberOfDaysToDisplay:(unsigned long long)arg6 ;
-(void)setDarkensWeekends:(BOOL)arg1 ;
-(void)applyLoadedOccurrencesWithBatching:(BOOL)arg1 animated:(BOOL)arg2 reverse:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg1 ;
-(double)_dayWidth;
-(void)setDelegate:(id<EKDayViewContentDelegate>)arg1 ;
-(void)applyLoadedOccurrenceBatchStartingAtIndex:(long long)arg1 batchSize:(long long)arg2 fromArray:(id)arg3 withStartDate:(id)arg4 animated:(BOOL)arg5 reverse:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(CGPoint)pointForDate:(double)arg1 ;
-(void)layoutSubviews;
-(void)loadAndLayoutOccurrences:(id)arg1 reverse:(BOOL)arg2 ;
-(void)_layoutDay:(unsigned long long)arg1 isLoadingAsync:(BOOL)arg2 ;
-(double)fixedDayWidth;
-(void)prepareForReuseIsReload:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_doOffscreenOccurrences;
-(void)applyContentItem:(id)arg1 toView:(id)arg2 ;
-(double)RoundToScreenScaleForFloat:(double)arg1 ;
-(void)setHoursToPadTop:(double)arg1 ;
-(BOOL)darkensWeekends;
-(void)setStagedTraitCollection:(UITraitCollection *)arg1 ;
-(void)movePreloadedItemsToVisible;
-(id)dayStarts;
-(void)rectBecameVisible:(CGRect)arg1 ;
-(double)firstEventSecond;
-(CGRect)RoundRectToScreenScaleForRect:(CGRect)arg1 ;
-(BOOL)eventsIntersectRect:(CGRect)arg1 ;
-(UITraitCollection *)stagedTraitCollection;
-(void)setStartDateWithDateComponents:(id)arg1 ;
-(id)itemsForPreloadByDay;
-(double)RoundToScreenScale:(double)arg1 ;
-(void)_computeDayStartsAndEnds;
-(UIEdgeInsets)insetsForInterfaceLayout:(UIEdgeInsets)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(BOOL)_layoutDayIfNeeded:(long long)arg1 isLoadingAsync:(BOOL)arg2 ;
-(void)saveTemporaryViews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)allVisibleItems;
-(void)setOffscreenOccurrencePinningEnabled:(BOOL)arg1 ;
-(id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2 ;
-(double)dateForPoint:(CGPoint)arg1 ;
-(UIEdgeInsets)occurrencePadding;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)offscreenOccurrencePinningEnabled;
-(void)_adjustViewsForPinning;
-(void)setNeedsLayout;
-(void)_layoutDaysIfVisible;
-(id)visibleItemsByDay;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(unsigned long long)_dayIndexForAllIndex:(unsigned long long)arg1 ;
-(void)clearTemporaryViews;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/EKDayAllDayViewDelegate.h>
#import <libobjc.A.dylib/EKDayViewContentDelegate.h>
#import <libobjc.A.dylib/EKDayTimeViewDelegate.h>

@protocol OS_dispatch_queue, EKDayViewDelegate, EKDayViewDataSource;
@class UIImageView, UIView, NSArray, NSDate, EKDayAllDayView, EKDayViewContent, EKDayTimeView, UIScrollView, NSTimer, UIPinchGestureRecognizer, UITapGestureRecognizer, NSObject, NSDateComponents, NSCalendar, EKEvent, UIColor, UIVisualEffect, NSString;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate> {

	long long _orientation;
	double _dayStart;
	double _dayEnd;
	double _nextDSTTransition;
	BOOL _scrollbarShowsInside;
	BOOL _scrollingToOccurrence;
	BOOL _settingDate;
	BOOL _userScrolling;
	BOOL _scrollToOccurrencesOnNextReload;
	UIImageView* _topVerticalGridExtension;
	UIImageView* _bottomVerticalGridExtension;
	UIView* _bottomLine;
	NSArray* _existingTimedOcurrences;
	NSDate* _lastInspectedOccurrenceOnDate;
	CGSize _scrolledToFirstVisibleSecondForSize;
	EKDayAllDayView* _allDayView;
	EKDayViewContent* _dayContent;
	EKDayTimeView* _timeView;
	UIScrollView* _scroller;
	NSTimer* _timeMarkerTimer;
	CGPoint _lastPinchDistance;
	CGPoint _lastPinchPoint1;
	double _lastPinchScale;
	BOOL _pinching;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	long long _targetSizeClass;
	BOOL _layoutWhenJoiningViewHierarchy;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	BOOL _allowsOccurrenceSelection;
	BOOL _alignsMidnightToTop;
	BOOL _showOnlyAllDayArea;
	BOOL _isNowVisible;
	BOOL _scrollEventsInToViewIgnoresVisibility;
	BOOL _shouldEverShowTimeIndicators;
	BOOL _sizeTimeViewUsingOnlyHourText;
	BOOL _usesVibrantGridDrawing;
	BOOL _allowPinchingHourHeights;
	int _outlineStyle;
	id<EKDayViewDelegate> _delegate;
	id<EKDayViewDataSource> _dataSource;
	NSDateComponents* _displayDate;
	NSCalendar* _calendar;
	double _additionalLeftPadding;
	double _topYBoundaryForOccurrenceText;
	double _topContentInset;
	double _bottomContentInset;
	double _todayScrollSecondBuffer;
	double _scrollAnimationDurationOverride;
	double _hourScale;

}

@property (assign,nonatomic,__weak) id<EKDayViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKDayViewDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDateComponents * displayDate;                            //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double dayStart;                                       //@synthesize dayStart=_dayStart - In the implementation block
@property (nonatomic,readonly) double dayEnd;                                         //@synthesize dayEnd=_dayEnd - In the implementation block
@property (assign,nonatomic) int firstVisibleSecond; 
@property (assign,nonatomic) BOOL allowsOccurrenceSelection;                          //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) BOOL alignsMidnightToTop;                                //@synthesize alignsMidnightToTop=_alignsMidnightToTop - In the implementation block
@property (assign,nonatomic) BOOL showOnlyAllDayArea;                                 //@synthesize showOnlyAllDayArea=_showOnlyAllDayArea - In the implementation block
@property (assign,nonatomic) double additionalLeftPadding;                            //@synthesize additionalLeftPadding=_additionalLeftPadding - In the implementation block
@property (nonatomic,readonly) double scrollBarOffset; 
@property (nonatomic,readonly) NSArray * occurrenceViews; 
@property (assign,nonatomic) double topYBoundaryForOccurrenceText;                    //@synthesize topYBoundaryForOccurrenceText=_topYBoundaryForOccurrenceText - In the implementation block
@property (nonatomic,readonly) NSArray * allOccurrenceViews; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence; 
@property (nonatomic,readonly) EKDayAllDayView * allDayView; 
@property (nonatomic,readonly) EKDayViewContent * dayContent; 
@property (nonatomic,readonly) EKDayTimeView * timeView; 
@property (nonatomic,readonly) double leftContentInset; 
@property (assign,nonatomic) double topContentInset;                                  //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                               //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (assign,nonatomic) BOOL isNowVisible;                                       //@synthesize isNowVisible=_isNowVisible - In the implementation block
@property (assign,nonatomic) BOOL scrollEventsInToViewIgnoresVisibility;              //@synthesize scrollEventsInToViewIgnoresVisibility=_scrollEventsInToViewIgnoresVisibility - In the implementation block
@property (assign,nonatomic) BOOL shouldEverShowTimeIndicators;                       //@synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators - In the implementation block
@property (assign,nonatomic) BOOL animatesTimeMarker; 
@property (assign,nonatomic) BOOL showsTimeLine; 
@property (assign,nonatomic) BOOL showsTimeMarker; 
@property (assign,nonatomic) BOOL showsTimeLabel; 
@property (assign,nonatomic) BOOL eventsFillGrid; 
@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL allowsScrolling; 
@property (assign,nonatomic) BOOL sizeTimeViewUsingOnlyHourText;                      //@synthesize sizeTimeViewUsingOnlyHourText=_sizeTimeViewUsingOnlyHourText - In the implementation block
@property (assign,nonatomic) int outlineStyle;                                        //@synthesize outlineStyle=_outlineStyle - In the implementation block
@property (assign,nonatomic) long long occurrenceBackgroundStyle; 
@property (assign,nonatomic) NSRange hoursToRender; 
@property (nonatomic,retain) UIColor * timeViewTextColor; 
@property (nonatomic,retain) UIColor * gridLineColor; 
@property (nonatomic,retain) UIColor * occurrenceTitleColor; 
@property (nonatomic,retain) UIColor * occurrenceTimeColor; 
@property (nonatomic,retain) UIColor * occurrenceLocationColor; 
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor; 
@property (assign,nonatomic) BOOL usesVibrantGridDrawing;                             //@synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing - In the implementation block
@property (assign,nonatomic) BOOL allowPinchingHourHeights;                           //@synthesize allowPinchingHourHeights=_allowPinchingHourHeights - In the implementation block
@property (assign,nonatomic) double todayScrollSecondBuffer;                          //@synthesize todayScrollSecondBuffer=_todayScrollSecondBuffer - In the implementation block
@property (nonatomic,retain) UIVisualEffect * gridVisualEffect; 
@property (nonatomic,retain) UIVisualEffect * timeViewVisualEffect; 
@property (assign,nonatomic) long long orientation;                                   //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double scrollAnimationDurationOverride;                  //@synthesize scrollAnimationDurationOverride=_scrollAnimationDurationOverride - In the implementation block
@property (assign,nonatomic) double hourScale;                                        //@synthesize hourScale=_hourScale - In the implementation block
@property (nonatomic,readonly) double scrollOffset; 
@property (assign,nonatomic) CGPoint normalizedContentOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<EKDayViewDelegate>)delegate;
-(void)setDelegate:(id<EKDayViewDelegate>)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id<EKDayViewDataSource>)dataSource;
-(void)setDataSource:(id<EKDayViewDataSource>)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)removeFromSuperview;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)reloadData;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_scrollViewWillBeginDragging:(id)arg1 ;
-(id)verticalScrollView;
-(EKDayTimeView *)timeView;
-(void)setAllowsScrolling:(BOOL)arg1 ;
-(int)outlineStyle;
-(void)setOutlineStyle:(int)arg1 ;
-(BOOL)allowsScrolling;
-(double)_verticalOffset;
-(long long)_sizeClass;
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(void)setEventsFillGrid:(BOOL)arg1 ;
-(NSArray *)occurrenceViews;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 ;
-(id)dayViewContent:(id)arg1 selectedCopyViewForOccurrenceView:(id)arg2 ;
-(BOOL)usesVibrantGridDrawing;
-(long long)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(long long)arg1 ;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(void)setOccurrenceTitleColor:(UIColor *)arg1 ;
-(void)setOccurrenceTimeColor:(UIColor *)arg1 ;
-(void)setOccurrenceLocationColor:(UIColor *)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(UIColor *)arg1 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(BOOL)eventsFillGrid;
-(UIColor *)occurrenceTitleColor;
-(UIColor *)occurrenceTimeColor;
-(UIColor *)occurrenceLocationColor;
-(UIColor *)occurrenceTextBackgroundColor;
-(EKEvent *)dimmedOccurrence;
-(void)_localeChanged;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3 displayDate:(id)arg4 backgroundColor:(id)arg5 opaque:(BOOL)arg6 scrollbarShowsInside:(BOOL)arg7 ;
-(void)setTodayScrollSecondBuffer:(double)arg1 ;
-(void)setShouldEverShowTimeIndicators:(BOOL)arg1 ;
-(void)setHourScale:(double)arg1 ;
-(void)setAnimatesTimeMarker:(BOOL)arg1 ;
-(EKDayViewContent *)dayContent;
-(void)setScrollAnimationDurationOverride:(double)arg1 ;
-(void)setTopContentInset:(double)arg1 ;
-(void)setBottomContentInset:(double)arg1 ;
-(void)setAlignsMidnightToTop:(BOOL)arg1 ;
-(void)setDisplayDate:(NSDateComponents *)arg1 ;
-(void)reloadDataSynchronously;
-(void)bringEventToFront:(id)arg1 ;
-(double)dayStart;
-(void)setHoursToRender:(NSRange)arg1 ;
-(void)scrollToDate:(id)arg1 offset:(double)arg2 animated:(BOOL)arg3 whenFinished:(/*^block*/id)arg4 ;
-(void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/id)arg3 ;
-(double)dayEnd;
-(NSRange)hoursToRender;
-(double)scaledHourHeight;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(CGRect)_scrollerRect;
-(void)_dayViewPinched:(id)arg1 ;
-(void)_doubleTap:(id)arg1 ;
-(void)_timeViewTapped:(id)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)_createAllDayViewWithSizeClass:(long long)arg1 ;
-(void)_adjustForDateOrCalendarChange;
-(BOOL)showsTimeLine;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(double)scrollBarOffset;
-(BOOL)sizeTimeViewUsingOnlyHourText;
-(double)additionalLeftPadding;
-(void)updateMarkerPosition;
-(void)_disposeAllDayView;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(void)stopScrolling;
-(void)setShowsTimeLine:(BOOL)arg1 ;
-(BOOL)animatesTimeMarker;
-(BOOL)showsTimeMarker;
-(BOOL)_isTimeMarkerFullyUnobstructed;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(CGRect)currentTimeRectInView:(id)arg1 requireThumb:(BOOL)arg2 ;
-(int)_secondAtPosition:(double)arg1 ;
-(int)firstVisibleSecond;
-(double)_positionOfSecond:(int)arg1 ;
-(void)firstVisibleSecondChanged;
-(UIVisualEffect *)gridVisualEffect;
-(void)setGridVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setUsesVibrantGridDrawing:(BOOL)arg1 ;
-(void)_scrollToSecond:(int)arg1 offset:(double)arg2 animated:(BOOL)arg3 whenFinished:(/*^block*/id)arg4 ;
-(double)todayScrollSecondBuffer;
-(BOOL)alignsMidnightToTop;
-(void)_clearVerticalGridExtensionImageCache;
-(id)_generateVerticalGridExtensionImage;
-(BOOL)scrollEventsInToViewIgnoresVisibility;
-(void)setScrollEventsInToViewIgnoresVisibility:(BOOL)arg1 ;
-(void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/id)arg3 ;
-(void)loadData:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg1 ;
-(void)scrollToEvent:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)maximumHourScale;
-(double)minimumHourScale;
-(CGPoint)_pinchDistanceForGestureRecognizer:(id)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3 ;
-(BOOL)_showingAllDaySection;
-(double)_adjustSecondForwardForDSTHole:(double)arg1 ;
-(double)leftContentInset;
-(double)_adjustSecondBackwardForDSTHole:(double)arg1 ;
-(double)_scrollZoneTop;
-(double)_scrollRate;
-(double)highlightedHour;
-(void)setAllDayLabelHighlighted:(BOOL)arg1 ;
-(BOOL)isAllDayLabelHighlighted;
-(void)allDayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)allDayViewDidLayoutSubviews:(id)arg1 ;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2 ;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2 ;
-(void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1 ;
-(void)adjustForSignificantTimeChange;
-(void)setShowsTimeLabel:(BOOL)arg1 ;
-(BOOL)showsTimeLabel;
-(BOOL)isNowVisible;
-(UIColor *)timeViewTextColor;
-(void)setTimeViewTextColor:(UIColor *)arg1 ;
-(UIColor *)gridLineColor;
-(void)setGridLineColor:(UIColor *)arg1 ;
-(UIVisualEffect *)timeViewVisualEffect;
-(void)setTimeViewVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setAllowPinchingHourHeights:(BOOL)arg1 ;
-(void)setTopYBoundaryForOccurrenceText:(double)arg1 ;
-(EKDayAllDayView *)allDayView;
-(double)scrollOffset;
-(CGPoint)normalizedContentOffset;
-(void)setNormalizedContentOffset:(CGPoint)arg1 ;
-(void)scrollToNowAnimated:(BOOL)arg1 whenFinished:(/*^block*/id)arg2 ;
-(void)dayContentView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2 ;
-(NSArray *)allOccurrenceViews;
-(void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2 ;
-(void)setShowOnlyAllDayArea:(BOOL)arg1 ;
-(void)resetLastSelectedOccurrencePoint;
-(BOOL)eventOccursOnThisDay:(id)arg1 ;
-(double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 ;
-(CGRect)rectForEvent:(id)arg1 ;
-(BOOL)containsOccurrences;
-(void)_notifyDelegateOfFinishedScrollingToOccurrence;
-(void)setScrollerYInset:(double)arg1 keepingYPointVisible:(double)arg2 ;
-(void)relayoutExistingTimedOccurrences;
-(void)resetOccurrenceViewColors;
-(void)dayViewContentDidCompleteAsyncLoadAndLayout:(id)arg1 ;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(BOOL)scrollTowardPoint:(CGPoint)arg1 ;
-(double)allDayRegionHeight;
-(void)highlightHour:(double)arg1 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2 ;
-(NSDateComponents *)displayDate;
-(BOOL)showOnlyAllDayArea;
-(void)setAdditionalLeftPadding:(double)arg1 ;
-(double)topYBoundaryForOccurrenceText;
-(double)topContentInset;
-(double)bottomContentInset;
-(void)setIsNowVisible:(BOOL)arg1 ;
-(BOOL)shouldEverShowTimeIndicators;
-(void)setSizeTimeViewUsingOnlyHourText:(BOOL)arg1 ;
-(BOOL)allowPinchingHourHeights;
-(double)scrollAnimationDurationOverride;
-(double)hourScale;
@end


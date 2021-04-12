/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BlockableScrollViewDelegate.h>
#import <libobjc.A.dylib/EKDayOccurrenceViewDelegate.h>
#import <libobjc.A.dylib/EKDayViewDataSource.h>
#import <libobjc.A.dylib/EKDayViewDelegate.h>
#import <libobjc.A.dylib/EKEventGestureControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OS_dispatch_queue, EKDayViewControllerDelegate, EKDayViewControllerDataSource;
@class UIView, UIScrollView, EKDayView, EKDayOccurrenceView, EKDayViewWithGutters, NSDateComponents, CalendarOccurrencesCollection, EKEventGestureController, ScrollSpringFactory, NSObject, NSCalendar, EKEventEditViewController, NSTimer, NSArray, NSString;

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, EKDayOccurrenceViewDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate> {

	UIView* _clipView;
	UIScrollView* _horizontalScrollingView;
	EKDayView* _previousDay;
	EKDayView* _currentDay;
	EKDayView* _nextDay;
	EKDayOccurrenceView* _proposedTimeView;
	EKDayViewWithGutters* _previousDayWithGutter;
	EKDayViewWithGutters* _currentDayWithGutter;
	EKDayViewWithGutters* _nextDayWithGutter;
	unsigned _scrollViewAnimating : 1;
	unsigned _hasPendingNextDate : 1;
	NSDateComponents* _pendingNextDate;
	unsigned _hasPendingPreviousDate : 1;
	NSDateComponents* _pendingPreviousDate;
	unsigned _decelerating : 1;
	unsigned _settingDateFromScrolling : 1;
	CalendarOccurrencesCollection* _occurrences;
	CalendarOccurrencesCollection* _previousDayOccurrences;
	CalendarOccurrencesCollection* _nextDayOccurrences;
	EKEventGestureController* _eventGestureController;
	ScrollSpringFactory* _decelerationSpringFactory;
	NSDateComponents* _originalDisplayDate;
	double _dayStart;
	double _dayEnd;
	BOOL _needsReload;
	BOOL _shouldScrollToNowOnViewWillAppear;
	BOOL _instigatedDateChange;
	BOOL _viewAppeared;
	BOOL _adjustingForDeceleration;
	BOOL _fingerDown;
	BOOL _requiresFullDayRelayout;
	int _springAnimatedDecelerationsInProgress;
	int _sizeTransitionsInProgress;
	BOOL _correctAfterScroll;
	NSDateComponents* _targetDateComponents;
	BOOL _needToCompleteScrollingAnimation;
	BOOL _needToCompleteDeceleration;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	NSObject*<OS_dispatch_queue> _protectionQueue;
	long long _targetSizeClass;
	BOOL _showsBanner;
	BOOL _allowsDaySwitching;
	BOOL _allowsSelection;
	BOOL _alwaysAnimate;
	BOOL _disableGestureDayChange;
	BOOL _disableNotifyDateChangeDuringTracking;
	BOOL _animateAllDayAreaHeight;
	BOOL _shouldAutoscrollAfterAppearance;
	BOOL _notifyWhenTapOtherEventDuringDragging;
	BOOL _preloadExtraDays;
	BOOL _transitionedToSameDay;
	int _startingFirstVisibleSecond;
	id<EKDayViewControllerDelegate> _delegate;
	id<EKDayViewControllerDataSource> _dataSource;
	NSDateComponents* _displayDate;
	NSCalendar* _calendar;
	double _gutterWidth;
	UIView* _gestureOccurrenceSuperview;
	EKEventEditViewController* _currentEditor;
	NSTimer* _showNowTimer;
	CGPoint _normalizedContentOffset;

}

@property (nonatomic,copy) NSDateComponents * pendingNextDate;                                 //@synthesize pendingNextDate=_pendingNextDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * pendingPreviousDate;                             //@synthesize pendingPreviousDate=_pendingPreviousDate - In the implementation block
@property (nonatomic,retain) NSTimer * showNowTimer;                                           //@synthesize showNowTimer=_showNowTimer - In the implementation block
@property (assign,nonatomic) BOOL transitionedToSameDay;                                       //@synthesize transitionedToSameDay=_transitionedToSameDay - In the implementation block
@property (assign,nonatomic,__weak) id<EKDayViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<EKDayViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDateComponents * displayDate;                                     //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                              //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) BOOL showsBanner;                                                 //@synthesize showsBanner=_showsBanner - In the implementation block
@property (assign,nonatomic) BOOL allowsDaySwitching;                                          //@synthesize allowsDaySwitching=_allowsDaySwitching - In the implementation block
@property (assign,nonatomic) BOOL allowsSelection;                                             //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (assign,nonatomic) BOOL alwaysAnimate;                                               //@synthesize alwaysAnimate=_alwaysAnimate - In the implementation block
@property (assign,nonatomic) BOOL disableGestureDayChange;                                     //@synthesize disableGestureDayChange=_disableGestureDayChange - In the implementation block
@property (assign,nonatomic) BOOL disableNotifyDateChangeDuringTracking;                       //@synthesize disableNotifyDateChangeDuringTracking=_disableNotifyDateChangeDuringTracking - In the implementation block
@property (assign,nonatomic) BOOL animateAllDayAreaHeight;                                     //@synthesize animateAllDayAreaHeight=_animateAllDayAreaHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoscrollAfterAppearance;                             //@synthesize shouldAutoscrollAfterAppearance=_shouldAutoscrollAfterAppearance - In the implementation block
@property (assign,nonatomic) BOOL notifyWhenTapOtherEventDuringDragging;                       //@synthesize notifyWhenTapOtherEventDuringDragging=_notifyWhenTapOtherEventDuringDragging - In the implementation block
@property (assign,nonatomic) BOOL preloadExtraDays;                                            //@synthesize preloadExtraDays=_preloadExtraDays - In the implementation block
@property (assign,nonatomic) double gutterWidth;                                               //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (nonatomic,retain) UIView * gestureOccurrenceSuperview;                              //@synthesize gestureOccurrenceSuperview=_gestureOccurrenceSuperview - In the implementation block
@property (nonatomic,readonly) UIView * effectiveEventGestureSuperview; 
@property (nonatomic,retain) EKEventEditViewController * currentEditor;                        //@synthesize currentEditor=_currentEditor - In the implementation block
@property (nonatomic,readonly) EKDayView * currentDayView; 
@property (assign,nonatomic) int startingFirstVisibleSecond;                                   //@synthesize startingFirstVisibleSecond=_startingFirstVisibleSecond - In the implementation block
@property (nonatomic,readonly) UIView * currentAllDayView; 
@property (nonatomic,readonly) NSArray * currentDayContentGridViewSubviews; 
@property (nonatomic,readonly) BOOL currentDayContainsOccurrences; 
@property (assign,nonatomic) BOOL scrollEventsInToViewIgnoresVisibility; 
@property (assign,nonatomic) CGPoint normalizedContentOffset;                                  //@synthesize normalizedContentOffset=_normalizedContentOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)showsBanner;
-(id)gestureController;
-(BOOL)scrollEventsInToViewIgnoresVisibility;
-(void)setGutterWidth:(double)arg1 ;
-(NSDateComponents *)displayDate;
-(id)verticalScrollView;
-(void)bringEventToFront:(id)arg1 ;
-(void)_scrollDayViewAfterRelayoutDays;
-(UIView *)effectiveEventGestureSuperview;
-(void)layoutContainerView:(id)arg1 ;
-(double)horizontalOffsetForPagingForEventGestureController:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(CGPoint)normalizedContentOffset;
-(id)eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)showTimelineHighlightForTime:(id)arg1 ;
-(void)hideTimelineHighlight;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(double)gutterWidth;
-(void)setTimeZone:(id)arg1 ;
-(NSDateComponents *)pendingNextDate;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)createOccurrenceViewForEventGestureController:(id)arg1 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2 ;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg1 ;
-(void)setCurrentEditor:(EKEventEditViewController *)arg1 ;
-(unsigned long long)firstVisibleSecond;
-(void)setNormalizedContentOffset:(CGPoint)arg1 ;
-(NSArray *)currentDayContentGridViewSubviews;
-(void)blockableScrollViewDidChangeFrameSize;
-(double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2 ;
-(id)_createGutterDayViewWithDayView:(id)arg1 ;
-(id)init;
-(void)eventGestureController:(id)arg1 requestsPresentationOfViewController:(id)arg2 ;
-(void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2 ;
-(void)setScrollEventsInToViewIgnoresVisibility:(BOOL)arg1 ;
-(BOOL)shouldAutoscrollAfterAppearance;
-(id<EKDayViewControllerDelegate>)delegate;
-(BOOL)alwaysAnimate;
-(void)_scrollToNowOnScrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollDayViewAppropriatelyWithAnimation:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setNotifyWhenTapOtherEventDuringDragging:(BOOL)arg1 ;
-(BOOL)transitionedToSameDay;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cutAnimationTailAfterDelayForDecelerationFromUserInput;
-(void)eventGestureController:(id)arg1 adjustDraggingView:(id)arg2 forAllDay:(BOOL)arg3 ;
-(void)setNeedsReload;
-(id)createOccurrenceViewForEventGestures;
-(void)__cutLongTailCallbackForScrollAnimationFromExternalSource;
-(double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3 ;
-(void)setPendingNextDate:(NSDateComponents *)arg1 ;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)loadDataBetweenStart:(id)arg1 end:(id)arg2 withTrigger:(int)arg3 completionForCurrentDayReload:(/*^block*/id)arg4 ;
-(BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(CGPoint)arg5 ;
-(void)_notifyDelegateOfSelectedDateChange;
-(NSCalendar *)calendar;
-(BOOL)_shouldRespondToApplicationDidBecomeActiveStateChange;
-(BOOL)_isResizing;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2 ;
-(void)_didRespondToApplicationDidBecomeActiveStateChange;
-(id)initWithTargetSizeClass:(long long)arg1 ;
-(BOOL)_canScrollToNow;
-(id<EKDayViewControllerDataSource>)dataSource;
-(BOOL)_isCurrentDayToday;
-(int)startingFirstVisibleSecond;
-(BOOL)currentDayContainsOccurrences;
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2 ;
-(void)setShowsBanner:(BOOL)arg1 ;
-(void)applicationWillResignActive;
-(void)_relayoutDays;
-(void)loadData:(BOOL)arg1 withTrigger:(int)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)createEventForEventGestureController:(id)arg1 ;
-(UIView *)currentAllDayView;
-(void)_performDisplayedOccurrencesChangedDelegateMethodWithTrigger:(int)arg1 ;
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1 ;
-(void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2 ;
-(BOOL)disableGestureDayChange;
-(BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(BOOL)_shouldScrollToNow;
-(BOOL)disableNotifyDateChangeDuringTracking;
-(void)setDelegate:(id<EKDayViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_relayoutDaysDuringScrollingAndPerformDayChanges:(BOOL)arg1 ;
-(void)applicationDidBecomeActive;
-(void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(void)setDataSource:(id<EKDayViewControllerDataSource>)arg1 ;
-(long long)_effectiveInterfaceOrientationForSize:(CGSize)arg1 ;
-(void)setShowNowTimer:(NSTimer *)arg1 ;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)animateAllDayAreaHeight;
-(BOOL)preloadExtraDays;
-(id)_eventGestureSuperview;
-(void)reloadData;
-(void)setPreloadExtraDays:(BOOL)arg1 ;
-(void)validateInterfaceOrientationWithFutureOrientation:(long long)arg1 ;
-(id)horizontalScrollView;
-(void)_relayoutDaysDuringScrolling;
-(void)eventGestureControllerDidEndDragSession:(id)arg1 ;
-(void)setGestureOccurrenceSuperview:(UIView *)arg1 ;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)_setDayView:(id)arg1 toDate:(id)arg2 ;
-(void)_completeDecelerationIfNeeded;
-(void)_cutAnimationTailAfterDelayForScrollAnimationFromExternalSource;
-(double)_weightedAllDayHeightForView:(id)arg1 visibleRect:(CGRect)arg2 ;
-(void)_setHorizontalContentOffsetUsingSpringAnimation:(CGPoint)arg1 ;
-(UIView *)gestureOccurrenceSuperview;
-(void)setDisableNotifyDateChangeDuringTracking:(BOOL)arg1 ;
-(void)setAnimateAllDayAreaHeight:(BOOL)arg1 ;
-(BOOL)_delegateRespondsToDisplayedOccurrencesChangedMethod;
-(id)currentPresentationController;
-(void)dayView:(id)arg1 didUpdateScrollPosition:(CGPoint)arg2 ;
-(NSDateComponents *)pendingPreviousDate;
-(BOOL)allowsSelection;
-(void)reloadDataIfNeeded;
-(void)setDisplayDate:(NSDateComponents *)arg1 ;
-(id)dayView:(id)arg1 selectedCopyViewForOccurrence:(id)arg2 ;
-(void)editorDidCancelEditingEvent:(id)arg1 ;
-(BOOL)_isCalendarDate:(id)arg1 sameDayAsComponents:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_occurrencesForDayView:(id)arg1 ;
-(BOOL)allowsDaySwitching;
-(void)externallyEndedGestureDragging;
-(void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_cancelAllLongTailCuttingCallbacks;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(void)eventGestureController:(id)arg1 requestsShowEvent:(id)arg2 ;
-(double)_showNowDelay;
-(void)_updateAllDayAreaHeight;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)notifyWhenTapOtherEventDuringDragging;
-(void)editorDidSaveEvent:(id)arg1 ;
-(void)_showNowAfterScrollViewDidEndDecelerating:(id)arg1 ;
-(void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2 ;
-(void)dayViewDidCompleteAsyncLoadAndLayout:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setNextAndPreviousFirstVisibleSecondToCurrent;
-(void)_scrollViewDidEndDecelerating:(id)arg1 ;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2 ;
-(double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)_stopShowNowTimer;
-(BOOL)_isViewInVisibleRect:(id)arg1 ;
-(void)loadView;
-(BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(long long)arg5 ;
-(void)_cleanUpTargetDateComponents;
-(void)_showNowTimerFired:(id)arg1 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3 ;
-(void)setDisableGestureDayChange:(BOOL)arg1 ;
-(void)_highlightDayViewDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(NSTimer *)showNowTimer;
-(void)setAlwaysAnimate:(BOOL)arg1 ;
-(BOOL)_shouldEndGestureEditingOnTap;
-(EKDayView *)currentDayView;
-(void)setTransitionedToSameDay:(BOOL)arg1 ;
-(id)_eventsForDay:(id)arg1 ;
-(void)setStartingFirstVisibleSecond:(int)arg1 ;
-(CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(void)scrollToNow:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)__cutLongCallbackTailForDecelerationFromUserInput;
-(void)setShouldAutoscrollAfterAppearance:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 gutterWidth:(double)arg2 ;
-(void)setAllowsDaySwitching:(BOOL)arg1 ;
-(id)touchTrackingViewForEventGestureController:(id)arg1 ;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1 ;
-(BOOL)blockableScrollViewShouldAllowScrolling;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3 ;
-(void)setPendingPreviousDate:(NSDateComponents *)arg1 ;
-(BOOL)dayViewShouldDrawSynchronously:(id)arg1 ;
-(EKEventEditViewController *)currentEditor;
-(id)preferredEventToSelectOnDate:(id)arg1 ;
-(double)timedRegionOriginForEventGestureController:(id)arg1 ;
-(void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)_completeScrollingAnimationIfNeeded;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 includeNextAndPreviousDays:(BOOL)arg2 ;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2 ;
-(void)dayViewDidTapEmptySpace:(id)arg1 ;
-(void)dealloc;
-(void)updateFrameForProposedTimeView;
-(void)cleanUpAfterGestureFailureForEventGestureController:(id)arg1 ;
-(void)editorDidDeleteEvent:(id)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)_setDisplayDateInternal:(id)arg1 ;
-(BOOL)_canShowNowAfterScrollViewDidEndDecelerating:(id)arg1 ;
@end


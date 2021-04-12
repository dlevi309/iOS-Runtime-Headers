/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol _UIDatePickerCalendarDateViewDelegate;
@class NSDateFormatter, UIStackView, UICollectionView, NSLayoutConstraint, UICollectionViewDiffableDataSource, _UIDatePickerCalendarViewDataSourceController, _UIDatePickerLinkedLabel, NSCalendar, NSLocale, _UIDatePickerDateRange, NSString, _UIDatePickerCalendarMonth, _UIDatePickerCalendarDay;

@interface _UIDatePickerCalendarDateView : UIView <UICollectionViewDelegate> {

	struct {
		unsigned needsCollectionViewSelectionUpdate : 1;
		unsigned needsCollectionViewScrollPositionUpdate : 1;
		unsigned needsUpdateSizing : 1;
		unsigned isIgnoringScrollCallbacks : 1;
		unsigned renderOverhangDays : 1;
	}  _flags;
	NSDateFormatter* _cellFormatter;
	UIStackView* _weekdayStackView;
	UICollectionView* _collectionView;
	NSLayoutConstraint* _collectionViewHeightConstraint;
	UICollectionViewDiffableDataSource* _dataSource;
	_UIDatePickerCalendarViewDataSourceController* _dataSourceController;
	CGPoint _frozenContentOffset;
	CGSize _lastKnownSize;
	_UIDatePickerLinkedLabel* _daySizingLabel;
	_UIDatePickerLinkedLabel* _weekdaySizingLabel;
	id<_UIDatePickerCalendarDateViewDelegate> _delegate;
	NSCalendar* _calendar;
	NSLocale* _locale;
	_UIDatePickerDateRange* _dateRange;
	NSString* _customFontDesign;
	_UIDatePickerCalendarMonth* _visibleMonth;
	_UIDatePickerCalendarDay* _selectedDate;

}

@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarDateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                                //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) _UIDatePickerDateRange * dateRange;                                   //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                            //@synthesize customFontDesign=_customFontDesign - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarMonth * visibleMonth;                              //@synthesize visibleMonth=_visibleMonth - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarDay * selectedDate;                                //@synthesize selectedDate=_selectedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_setSelectedDate:(id)arg1 animated:(BOOL)arg2 updateVisibleMonth:(BOOL)arg3 updateCollectionView:(BOOL)arg4 notifyDelegate:(BOOL)arg5 ;
-(NSLocale *)locale;
-(void)_setVisibleMonth:(id)arg1 animated:(BOOL)arg2 updateDataSource:(BOOL)arg3 updateCollectionView:(BOOL)arg4 notifyDelegate:(BOOL)arg5 ;
-(void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 selectedDay:(id)arg4 visibleMonth:(id)arg5 ;
-(_UIDatePickerDateRange *)dateRange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<_UIDatePickerCalendarDateViewDelegate>)delegate;
-(NSCalendar *)calendar;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(_UIDatePickerCalendarDay *)selectedDate;
-(void)setDelegate:(id<_UIDatePickerCalendarDateViewDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(_UIDatePickerCalendarMonth *)visibleMonth;
-(void)_setupDateFormatter;
-(void)_setupViewHierarchy;
-(void)_reloadDateFormatters;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSString *)customFontDesign;
-(void)setVisibleMonth:(_UIDatePickerCalendarMonth *)arg1 ;
-(void)_reloadPossibleDayValues;
-(id)_cellForCollectionView:(id)arg1 indexPath:(id)arg2 day:(id)arg3 ;
-(void)_setNeedsUpdateSizing;
-(void)_shouldDifferentiateWithoutColorUpdated:(id)arg1 ;
-(void)_setNeedsCollectionViewScrollPositionUpdate;
-(void)_reloadWeekdays;
-(void)_updateCollectionViewSelection:(BOOL)arg1 ;
-(void)_reloadCollectionViewLayout;
-(void)_updateCollectionViewScrollPosition:(BOOL)arg1 ;
-(void)_cleanupDataIfNecessary;
-(void)_performIgnoringScrollCallbacks:(/*^block*/id)arg1 ;
-(double)__dayAndWeekdayLabelWidth;
-(void)_reloadDataSourceController;
-(void)_notifyDelegateAboutDataChange;
-(void)_setNeedsCollectionViewSelectionUpdate;
-(void)_freezeContentOffset;
-(void)_updateCollectionViewContentInsets;
-(void)_restoreContentOffsetWithPageOffset:(long long)arg1 ;
-(void)_notifyDelegateAboutVisibilityChange;
-(void)_updateVisibleMonthIfNecessary;
-(void)_performIfNotIgnoringScrollCallbacks:(/*^block*/id)arg1 ;
-(void)setSelectedDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleMonth:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(void)_reload;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelectedDate:(_UIDatePickerCalendarDay *)arg1 ;
-(void)_updateSizing;
@end


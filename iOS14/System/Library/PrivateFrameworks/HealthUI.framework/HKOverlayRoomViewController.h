/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKDisplayTypeSectionedContextViewDelegate.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>
#import <libobjc.A.dylib/HKSampleTypeDateRangeControllerObserver.h>
#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@protocol HKOverlayRoomViewControllerLayoutDelegate, OS_dispatch_queue;
@class HKOverlayRoomApplicationItems, HKDisplayType, NSDate, HKInteractiveChartOverlayViewController, HKValueRange, NSDateInterval, HKOverlayContextLocation, HKDisplayTypeSectionedContextView, NSArray, NSObject, NSString;

@interface HKOverlayRoomViewController : HKViewController <HKDisplayTypeSectionedContextViewDelegate, HKInteractiveChartViewObserver, HKSampleTypeDateRangeControllerObserver, HKSampleTypeUpdateControllerObserver> {

	BOOL _shouldSelectInitialOverlay;
	BOOL _userHasOverriddenPreferredOverlay;
	HKOverlayRoomApplicationItems* _applicationItems;
	HKDisplayType* _primaryDisplayType;
	NSDate* _displayDate;
	long long _controllerMode;
	HKInteractiveChartOverlayViewController* _chartController;
	HKValueRange* _initialVisibleDateRange;
	id<HKOverlayRoomViewControllerLayoutDelegate> _layoutDelegate;
	long long _currentChartTimeScope;
	NSDateInterval* _currentChartDateInterval;
	HKOverlayContextLocation* _currentSelectedContextLocation;
	HKDisplayTypeSectionedContextView* _sectionedContextView;
	NSArray* _overlayContextSections;
	HKOverlayContextLocation* _initialSelectedContextLocation;
	NSObject*<OS_dispatch_queue> _contextUpdateQueue;

}

@property (nonatomic,retain) HKOverlayRoomApplicationItems * applicationItems;                                 //@synthesize applicationItems=_applicationItems - In the implementation block
@property (assign,nonatomic) long long currentChartTimeScope;                                                  //@synthesize currentChartTimeScope=_currentChartTimeScope - In the implementation block
@property (nonatomic,copy) NSDateInterval * currentChartDateInterval;                                          //@synthesize currentChartDateInterval=_currentChartDateInterval - In the implementation block
@property (nonatomic,retain) HKOverlayContextLocation * currentSelectedContextLocation;                        //@synthesize currentSelectedContextLocation=_currentSelectedContextLocation - In the implementation block
@property (assign,nonatomic) long long controllerMode;                                                         //@synthesize controllerMode=_controllerMode - In the implementation block
@property (nonatomic,retain) HKInteractiveChartOverlayViewController * chartController;                        //@synthesize chartController=_chartController - In the implementation block
@property (nonatomic,retain) HKDisplayTypeSectionedContextView * sectionedContextView;                         //@synthesize sectionedContextView=_sectionedContextView - In the implementation block
@property (assign,nonatomic) BOOL userHasOverriddenPreferredOverlay;                                           //@synthesize userHasOverriddenPreferredOverlay=_userHasOverriddenPreferredOverlay - In the implementation block
@property (nonatomic,retain) HKDisplayType * primaryDisplayType;                                               //@synthesize primaryDisplayType=_primaryDisplayType - In the implementation block
@property (nonatomic,retain) NSArray * overlayContextSections;                                                 //@synthesize overlayContextSections=_overlayContextSections - In the implementation block
@property (nonatomic,retain) HKOverlayContextLocation * initialSelectedContextLocation;                        //@synthesize initialSelectedContextLocation=_initialSelectedContextLocation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> contextUpdateQueue;                                  //@synthesize contextUpdateQueue=_contextUpdateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSDate * displayDate;                                                      //@synthesize displayDate=_displayDate - In the implementation block
@property (assign,nonatomic) BOOL shouldSelectInitialOverlay;                                                  //@synthesize shouldSelectInitialOverlay=_shouldSelectInitialOverlay - In the implementation block
@property (nonatomic,retain) HKValueRange * initialVisibleDateRange;                                           //@synthesize initialVisibleDateRange=_initialVisibleDateRange - In the implementation block
@property (assign,nonatomic,__weak) id<HKOverlayRoomViewControllerLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)displayDate;
-(id<HKOverlayRoomViewControllerLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<HKOverlayRoomViewControllerLayoutDelegate>)arg1 ;
-(NSString *)description;
-(void)viewDidLoad;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 ;
-(long long)controllerMode;
-(HKOverlayRoomApplicationItems *)applicationItems;
-(BOOL)supportsShowAllFilters;
-(id)_currentIndexPath;
-(id)createChartOverlayViewController;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(void)dealloc;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(HKDisplayType *)primaryDisplayType;
-(void)_setupPrimaryDisplayType;
-(void)_setupInterface;
-(void)_setupOverlayContextItems;
-(void)_refreshContextItemsAndUpdateChart:(BOOL)arg1 ;
-(HKDisplayTypeSectionedContextView *)sectionedContextView;
-(NSArray *)overlayContextSections;
-(BOOL)userHasOverriddenPreferredOverlay;
-(void)_selectPreferredItem;
-(HKOverlayContextLocation *)initialSelectedContextLocation;
-(HKOverlayContextLocation *)currentSelectedContextLocation;
-(void)_updateChartForOverlaySelection:(id)arg1 previousSelection:(id)arg2 ;
-(void)setPrimaryDisplayType:(HKDisplayType *)arg1 ;
-(void)setChartController:(HKInteractiveChartOverlayViewController *)arg1 ;
-(HKInteractiveChartOverlayViewController *)chartController;
-(HKValueRange *)initialVisibleDateRange;
-(void)setInitialVisibleDateRange:(HKValueRange *)arg1 ;
-(id)_makeSeparatorView;
-(void)setSectionedContextView:(HKDisplayTypeSectionedContextView *)arg1 ;
-(id)_contextViewBackgroundColor;
-(void)_layoutNoVerticalExpansion:(id)arg1 ;
-(id)showAllFiltersButtonTitle;
-(void)_showAllFilters:(id)arg1 ;
-(void)_pinView:(id)arg1 toSafeAreaOf:(id)arg2 ;
-(void)setOverlayContextSections:(NSArray *)arg1 ;
-(void)setInitialSelectedContextLocation:(HKOverlayContextLocation *)arg1 ;
-(void)_updateContextTiles;
-(id)_findNavigationController;
-(long long)currentChartTimeScope;
-(id)_currentChartEffectiveVisibleRange;
-(void)setShouldSelectInitialOverlay:(BOOL)arg1 ;
-(void)setCurrentSelectedContextLocation:(HKOverlayContextLocation *)arg1 ;
-(long long)_contextItemCount;
-(NSObject*<OS_dispatch_queue>)contextUpdateQueue;
-(void)setUserHasOverriddenPreferredOverlay:(BOOL)arg1 ;
-(void)setCurrentChartTimeScope:(long long)arg1 ;
-(void)setCurrentChartDateInterval:(NSDateInterval *)arg1 ;
-(NSDateInterval *)currentChartDateInterval;
-(void)_selectContextItemAtLocation:(id)arg1 animated:(BOOL)arg2 ;
-(void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_refreshUpdatedItemsWithChartUpdate:(BOOL)arg1 invalidateChartItems:(BOOL)arg2 ;
-(BOOL)_shouldUpdateContextItemsForChanges:(id)arg1 ;
-(void)_invalidateContextItems;
-(void)contextView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)contextView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)contextViewDidInvalidateLayout:(id)arg1 ;
-(void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3 ;
-(void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2 ;
-(void)newDataArrivedWithValueRange:(id)arg1 ;
-(void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2 ;
-(void)reloadOverlayContextItems;
-(void)refreshOverlayContextItems;
-(void)setApplicationItems:(HKOverlayRoomApplicationItems *)arg1 ;
-(void)setControllerMode:(long long)arg1 ;
-(BOOL)shouldSelectInitialOverlay;
-(void)setContextUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end


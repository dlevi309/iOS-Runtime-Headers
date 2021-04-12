/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKMonthViewControllerDelegate.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@protocol WDDataListViewControllerDataProvider;
@class WDProfile, UIBarButtonItem, UIActivityIndicatorView, _UIContentUnavailableView, UITapGestureRecognizer, HKDisplayType, NSDate, NSString;

@interface WDDataListViewController : HKTableViewController <HKMonthViewControllerDelegate, WDUserActivityResponder> {

	WDProfile* _profile;
	UIBarButtonItem* _deleteAllButtonItem;
	UIActivityIndicatorView* _spinner;
	long long _cellStyle;
	_UIContentUnavailableView* _noContentView;
	UITapGestureRecognizer* _navigationBarTapGestureRecognizer;
	BOOL _showOriginalAppProvenance;
	id<WDDataListViewControllerDataProvider> _dataProvider;
	HKDisplayType* _displayType;
	NSDate* _scrollToDate;

}

@property (nonatomic,retain) NSDate * scrollToDate;                                                //@synthesize scrollToDate=_scrollToDate - In the implementation block
@property (nonatomic,readonly) id<WDDataListViewControllerDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) HKDisplayType * displayType;                                        //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) WDProfile * profile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(HKDisplayType *)displayType;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_updateNavigationTitle;
-(id<WDDataListViewControllerDataProvider>)dataProvider;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)_rightBarButtonItems;
-(void)dealloc;
-(void)monthViewController:(id)arg1 didSelectDate:(id)arg2 ;
-(void)didTapBackButtonForMonthViewController:(id)arg1 ;
-(void)_reloadAllData;
-(void)_updateActivityForViewDidAppear;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 dataProvider:(id)arg3 usingInsetStyling:(BOOL)arg4 ;
-(void)_displayTypeStringsChanged:(id)arg1 ;
-(void)_deleteAllButtonTapped:(id)arg1 ;
-(void)_updateRightBarButtonItems;
-(BOOL)_dataProviderEnabled;
-(long long)_closestRowToDate:(id)arg1 ;
-(void)_reloadAllDataScrolledToDate:(id)arg1 ;
-(void)_tapGestureRecognizerAction:(id)arg1 ;
-(void)_dataProviderDidUpdate;
-(NSDate *)scrollToDate;
-(void)setScrollToDate:(NSDate *)arg1 ;
-(BOOL)_shouldShowSpinnerRowInSection:(long long)arg1 ;
-(BOOL)_hasSpinnerRowRowAtIndexPath:(id)arg1 ;
-(id)_quantityCellForTableView:(id)arg1 dataObjectSource:(id)arg2 ;
-(id)_defaultCellForTableView:(id)arg1 cellStyle:(long long)arg2 indexPath:(id)arg3 object:(id)arg4 ;
-(id)_overridenDisplayImageForSource:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 fetchError:(id)arg4 ;
-(void)_loadIconForSourceObject:(id)arg1 onCell:(id)arg2 ofTableView:(id)arg3 ;
-(BOOL)isEditEnabled;
-(id)_sampleAtIndexPath:(id)arg1 ;
-(void)_deleteWorkoutSamplesConfirmationPlural:(BOOL)arg1 deleteBlock:(/*^block*/id)arg2 ;
-(void)_deleteAssociatedSamplesConfirmationPlural:(BOOL)arg1 deleteBlock:(/*^block*/id)arg2 ;
-(void)resetDataAndScrollToDate:(id)arg1 ;
-(void)_deleteAllWithOptions:(unsigned long long)arg1 ;
-(id)_deleteAllDataAlertMessage;
-(id)_sampleTypesForDeleteAll;
-(void)_calendarDateSelectorButtonTapped:(id)arg1 ;
@end


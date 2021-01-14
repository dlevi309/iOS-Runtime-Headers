/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKTravelRouteEstimationControllerDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>

@class EKCalendarItem, EKEventStore, UITableView, NSIndexPath, UISwitch, NSString, EKTravelRouteEstimationController, UIView, UITableViewCell, NSDate, EKStructuredLocation;

@interface EKEventTravelTimeEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKTravelRouteEstimationControllerDelegate, EKEditItemViewControllerDelegate> {

	CGRect _initFrame;
	EKCalendarItem* _calendarItem;
	EKEventStore* _eventStore;
	UITableView* _table;
	NSIndexPath* _checkedItem;
	UISwitch* _switchControl;
	long long _travelTimeSelectedChoice;
	double _customTravelTimeDuration;
	BOOL _estimationGroupIsShowing;
	BOOL _customTimesGroupIsShowing;
	BOOL _externallySetValueGroupIsShowing;
	BOOL _isAnimatingTableSections;
	BOOL _pendingReloadData;
	NSString* _routeEstimationErrorMessage;
	BOOL _isOriginSelectionVisible;
	BOOL _suppressErrors;
	BOOL _estimatedRowIsChecked;
	EKTravelRouteEstimationController* _routeEstimationControler;
	long long _selectedRoutingMode;
	long long _originalSelectedRoutingMode;
	double _originalSelectedTravelTime;
	UIView* _shadowView;
	UITableViewCell* _sampleSizingCell;
	double _selectedTravelTime;
	NSDate* _arrivalDate;
	EKStructuredLocation* _originStructuredLocation;
	EKStructuredLocation* _destinationStructuredLocation;

}

@property (assign,nonatomic) double selectedTravelTime;                                         //@synthesize selectedTravelTime=_selectedTravelTime - In the implementation block
@property (assign,nonatomic) long long selectedRoutingMode; 
@property (nonatomic,retain) NSDate * arrivalDate;                                              //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * originStructuredLocation;                   //@synthesize originStructuredLocation=_originStructuredLocation - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * destinationStructuredLocation;              //@synthesize destinationStructuredLocation=_destinationStructuredLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_travelTimeLocalizedString;
+(id)_startingLocationLocalizedString;
+(id)_cannotProvideDirectionsLocalizedString;
+(id)_directionsCouldNotBeFoundLocalizedString;
+(id)_okLocalizedString;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)_routeEstimationControler;
-(void)_handleOriginLocationErrorsWithAlert:(BOOL)arg1 ;
-(void)_travelTimeActivationSwitchChanged:(id)arg1 ;
-(BOOL)_showingOptionsInitialState;
-(void)_updateVisibleSections;
-(void)_autoselectFromAvailableChoices;
-(void)_layoutShadowView;
-(BOOL)_showingOptions;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)_numberOfEstimatedTravelTimeResultRows;
-(unsigned long long)_customTravelTimeSection;
-(void)_locationsChanged;
-(id)_indexPathForSelectedTravelTime;
-(void)setTravelTimeSelectedChoice:(long long)arg1 ;
-(void)_setEstimationActive:(BOOL)arg1 ;
-(void)_showRouteEstimationAlert;
-(void)_handleEstimationControllerTravelTimeLookupErrors;
-(BOOL)_shouldAutoSelectEstimatedTravelTimeOnLookupCompletion;
-(id)_errorStringForMapKitErrorCode:(unsigned long long)arg1 ;
-(void)setTravelTimeSelectedChoiceToFirstValidEstimatedRow;
-(BOOL)setTravelTimeSelectedChoiceEstimatedRowAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_externallySetValueTravelTimeSection;
-(unsigned long long)_toggleSwitchSection;
-(unsigned long long)_estimatedTravelTimeSection;
-(long long)_cellStyleForIndexPath:(id)arg1 ;
-(id)_stringForOriginLocation;
-(void)_originLocationButtonWasTapped;
-(long long)travelTimeSelectedChoice;
-(void)_updateTableView;
-(NSDate *)arrivalDate;
-(void)_checkItemAtIndexPath:(id)arg1 ;
-(NSString *)description;
-(void)_contentCategorySizeChanged:(id)arg1 ;
-(void)routeEstimationControllerDidBeginOriginLocationLookup:(id)arg1 ;
-(void)viewDidLoad;
-(void)setCell:(id)arg1 checked:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4 ;
-(void)setSelectedTravelTime:(double)arg1 ;
-(void)setSelectedRoutingMode:(long long)arg1 ;
-(void)setOriginStructuredLocation:(EKStructuredLocation *)arg1 ;
-(void)setDestinationStructuredLocation:(EKStructuredLocation *)arg1 ;
-(double)selectedTravelTime;
-(long long)selectedRoutingMode;
-(EKStructuredLocation *)originStructuredLocation;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)editItemEventToDetach;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(EKStructuredLocation *)destinationStructuredLocation;
-(void)routeEstimationControllerDidFinishOriginLocationLookup:(id)arg1 ;
-(void)routeEstimationControllerDidBeginTravelTimeLookup:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)routeEstimationControllerDidFinishTravelTimeLookup:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end


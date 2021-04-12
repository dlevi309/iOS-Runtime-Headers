/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDHealthDataCategoryViewController.h>
#import <libobjc.A.dylib/HKDisplayTypeContextViewDelegate.h>
#import <libobjc.A.dylib/HKInteractiveChartViewObserver.h>
#import <libobjc.A.dylib/HKHeartRateQueryHandler.h>

@class NSArray, HKHeartRateQueryUtility, NSUUID, NSDateInterval, NSDate, NSString;

@interface WDHeartRoomViewController : WDHealthDataCategoryViewController <HKDisplayTypeContextViewDelegate, HKInteractiveChartViewObserver, HKHeartRateQueryHandler> {

	long long _preferredSelectedContext;
	NSArray* _heartRateContextResults;
	NSArray* _heartRateContextItems;
	HKHeartRateQueryUtility* _heartRateQueryUtility;
	NSUUID* _heartRateQueryUUID;
	long long _currentHeartChartTimeScope;
	NSDateInterval* _currentHeartChartDateInterval;
	long long _currentSelectedContextIndex;
	NSDate* _displayDate;

}

@property (nonatomic,retain) NSArray * heartRateContextResults;                            //@synthesize heartRateContextResults=_heartRateContextResults - In the implementation block
@property (nonatomic,readonly) NSArray * defaultHeartRateContextResults; 
@property (nonatomic,retain) NSArray * heartRateContextItems;                              //@synthesize heartRateContextItems=_heartRateContextItems - In the implementation block
@property (nonatomic,retain) HKHeartRateQueryUtility * heartRateQueryUtility;              //@synthesize heartRateQueryUtility=_heartRateQueryUtility - In the implementation block
@property (nonatomic,copy) NSUUID * heartRateQueryUUID;                                    //@synthesize heartRateQueryUUID=_heartRateQueryUUID - In the implementation block
@property (assign,nonatomic) long long currentHeartChartTimeScope;                         //@synthesize currentHeartChartTimeScope=_currentHeartChartTimeScope - In the implementation block
@property (nonatomic,copy) NSDateInterval * currentHeartChartDateInterval;                 //@synthesize currentHeartChartDateInterval=_currentHeartChartDateInterval - In the implementation block
@property (assign,nonatomic) long long currentSelectedContextIndex;                        //@synthesize currentSelectedContextIndex=_currentSelectedContextIndex - In the implementation block
@property (nonatomic,copy) NSDate * displayDate;                                           //@synthesize displayDate=_displayDate - In the implementation block
@property (assign,nonatomic) long long preferredSelectedContext;                           //@synthesize preferredSelectedContext=_preferredSelectedContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)viewDidLoad;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(NSDate *)displayDate;
-(id)initWithProfile:(id)arg1 displayDate:(id)arg2 ;
-(void)setPreferredSelectedContext:(long long)arg1 ;
-(BOOL)_shouldShowChartSection;
-(void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3 ;
-(void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2 ;
-(void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2 ;
-(void)_showChartRowIfNecessary;
-(id)contextItemsFromDisplayTypeContextResults:(id)arg1 ;
-(void)setHeartRateContextItems:(NSArray *)arg1 ;
-(void)setupHeartChartViewController;
-(NSArray *)defaultHeartRateContextResults;
-(void)setHeartRateContextResults:(NSArray *)arg1 ;
-(NSArray *)heartRateContextItems;
-(void)applyPreferredDisplayType;
-(long long)preferredSelectedContext;
-(void)setCurrentSelectedContextIndex:(long long)arg1 ;
-(void)updateChartForCurrentlySelectedOverlay;
-(id)_chartedHeartRateTypes;
-(long long)currentSelectedContextIndex;
-(HKHeartRateQueryUtility *)heartRateQueryUtility;
-(void)setHeartRateQueryUtility:(HKHeartRateQueryUtility *)arg1 ;
-(void)setHeartRateQueryUUID:(NSUUID *)arg1 ;
-(long long)currentHeartChartTimeScope;
-(NSUUID *)heartRateQueryUUID;
-(id)quantityTypeIdentifierForHeartRateContext:(long long)arg1 ;
-(long long)distributionStyleForHeartRateContext:(long long)arg1 ;
-(BOOL)infoButtonHiddenForTimeScope:(long long)arg1 contextResult:(id)arg2 ;
-(id)titleForDisplayTypeContextResult:(id)arg1 ;
-(id)valueForDisplayTypeContextResult:(id)arg1 ;
-(id)dateStringForContextResult:(id)arg1 ;
-(NSArray *)heartRateContextResults;
-(id)_displayTypeForContext:(long long)arg1 ;
-(NSDateInterval *)currentHeartChartDateInterval;
-(void)pushControllerForSessionType:(long long)arg1 title:(id)arg2 ;
-(void)setCurrentHeartChartTimeScope:(long long)arg1 ;
-(void)setCurrentHeartChartDateInterval:(NSDateInterval *)arg1 ;
-(void)selectContextItemAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_allContextSampleTypes;
-(void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)contextView:(id)arg1 didDeselectItemAtIndex:(long long)arg2 ;
-(void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2 ;
-(void)dataForHeartRateContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(/*^block*/id)arg4 ;
@end


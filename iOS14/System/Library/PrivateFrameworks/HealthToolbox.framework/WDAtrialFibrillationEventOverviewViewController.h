/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HRFeatureRegulatoryReenableFeatureActionDelegate.h>
#import <libobjc.A.dylib/HRAtrialFibrillationOnboardingManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HKOnboardingSetupViewDelegate.h>
#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>

@protocol HKDataMetadataSectionProtocol, WDDataListViewControllerDataProvider;
@class HKDisplayType, WDProfile, HRAtrialFibrillationOnboardingManager, HKHeartRhythmAvailability, HKKeyValueDomain, UITapGestureRecognizer, NSArray, NSDate, NSString;

@interface WDAtrialFibrillationEventOverviewViewController : HKTableViewController <HRFeatureRegulatoryReenableFeatureActionDelegate, HRAtrialFibrillationOnboardingManagerDelegate, UITextViewDelegate, HKOnboardingSetupViewDelegate, HKHeartRhythmAvailabilityObserver> {

	BOOL _firstViewDidLayoutSubviews;
	BOOL _previousAtrialFibrillationDetectionDisabledCacheValue;
	HKDisplayType* _displayType;
	WDProfile* _profile;
	HRAtrialFibrillationOnboardingManager* _onboardingManager;
	HKHeartRhythmAvailability* _heartRhythmAvailability;
	HKKeyValueDomain* _keyValueDomain;
	long long _detectionState;
	UITapGestureRecognizer* _tripleTapToSettingsRecognizer;
	NSArray* _sectionsToDisplay;
	NSArray* _userConfigurationRowsToDisplay;
	id<HKDataMetadataSectionProtocol> _metaDataSection;
	id<WDDataListViewControllerDataProvider> _dataProvider;
	NSDate* _latestAnalyzedSampleDate;
	long long _visibleSampleCount;
	long long _totalSampleCount;

}

@property (assign,nonatomic) BOOL firstViewDidLayoutSubviews;                                         //@synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                             //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) WDProfile * profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HRAtrialFibrillationOnboardingManager * onboardingManager;               //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (nonatomic,retain) HKHeartRhythmAvailability * heartRhythmAvailability;                     //@synthesize heartRhythmAvailability=_heartRhythmAvailability - In the implementation block
@property (nonatomic,retain) HKKeyValueDomain * keyValueDomain;                                       //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (assign,nonatomic) long long detectionState;                                                //@synthesize detectionState=_detectionState - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tripleTapToSettingsRecognizer;                  //@synthesize tripleTapToSettingsRecognizer=_tripleTapToSettingsRecognizer - In the implementation block
@property (assign,nonatomic) BOOL previousAtrialFibrillationDetectionDisabledCacheValue;              //@synthesize previousAtrialFibrillationDetectionDisabledCacheValue=_previousAtrialFibrillationDetectionDisabledCacheValue - In the implementation block
@property (nonatomic,retain) NSArray * sectionsToDisplay;                                             //@synthesize sectionsToDisplay=_sectionsToDisplay - In the implementation block
@property (nonatomic,retain) NSArray * userConfigurationRowsToDisplay;                                //@synthesize userConfigurationRowsToDisplay=_userConfigurationRowsToDisplay - In the implementation block
@property (nonatomic,retain) id<HKDataMetadataSectionProtocol> metaDataSection;                       //@synthesize metaDataSection=_metaDataSection - In the implementation block
@property (nonatomic,retain) id<WDDataListViewControllerDataProvider> dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) NSDate * latestAnalyzedSampleDate;                                       //@synthesize latestAnalyzedSampleDate=_latestAnalyzedSampleDate - In the implementation block
@property (assign,nonatomic) long long visibleSampleCount;                                            //@synthesize visibleSampleCount=_visibleSampleCount - In the implementation block
@property (assign,nonatomic) long long totalSampleCount;                                              //@synthesize totalSampleCount=_totalSampleCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setProfile:(WDProfile *)arg1 ;
-(void)setDataProvider:(id<WDDataListViewControllerDataProvider>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)heartRhythmAvailabilityDidUpdate;
-(HKDisplayType *)displayType;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setKeyValueDomain:(HKKeyValueDomain *)arg1 ;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id<WDDataListViewControllerDataProvider>)dataProvider;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(HKKeyValueDomain *)keyValueDomain;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(HRAtrialFibrillationOnboardingManager *)onboardingManager;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)beginOnboardingForOnboardingSetupView:(id)arg1 ;
-(long long)totalSampleCount;
-(void)setTotalSampleCount:(long long)arg1 ;
-(void)setOnboardingManager:(HRAtrialFibrillationOnboardingManager *)arg1 ;
-(BOOL)isWristDetectionEnabled;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(void)_reloadAllData;
-(void)_recomputeTotalSampleCount;
-(BOOL)_isDisplayTypeFavorited;
-(id)_cellForShowAll;
-(id)_cellForDataSourcesAndAccess;
-(id)_pushShowAllViewController;
-(id)_pushDataSourcesAndAccessController;
-(void)_updateDetectionState;
-(void)_appDidEnterForeground;
-(void)_showInternalSettingsViewController;
-(BOOL)isPrimaryProfile;
-(UITapGestureRecognizer *)tripleTapToSettingsRecognizer;
-(BOOL)firstViewDidLayoutSubviews;
-(void)setFirstViewDidLayoutSubviews:(BOOL)arg1 ;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(NSArray *)userConfigurationRowsToDisplay;
-(double)adjustedSafeAreaInsetTop;
-(void)_reloadAtrialFibrillationSetupTableHeaderView;
-(void)_reloadTableViewAndScrollToTop;
-(BOOL)previousAtrialFibrillationDetectionDisabledCacheValue;
-(void)setPreviousAtrialFibrillationDetectionDisabledCacheValue:(BOOL)arg1 ;
-(void)setVisibleSampleCount:(long long)arg1 ;
-(void)setSectionsToDisplay:(NSArray *)arg1 ;
-(void)setUserConfigurationRowsToDisplay:(NSArray *)arg1 ;
-(void)_getLatestAnalyzedSampleDate;
-(void)setLatestAnalyzedSampleDate:(NSDate *)arg1 ;
-(long long)detectionState;
-(id<HKDataMetadataSectionProtocol>)metaDataSection;
-(NSArray *)sectionsToDisplay;
-(long long)visibleSampleCount;
-(id)_cellForAFibEventInTable:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_cellForFavorites;
-(id)_cellForRegulatory;
-(id)_cellForAFibEducationalMaterialInTable:(id)arg1 atIndex:(long long)arg2 ;
-(id)_cellForDataTypeDescription;
-(id)_atrialFibrillationDetectionDisabledHeaderView;
-(id)_sectionHeaderViewWithTitle:(id)arg1 ;
-(NSDate *)latestAnalyzedSampleDate;
-(void)isFavorited:(BOOL)arg1 ;
-(BOOL)_shouldShowAtrialFibrillationSetupTableHeaderView;
-(id)_atrialFibrillationSetupContainerView;
-(void)_startOnboardingForFirstTime:(BOOL)arg1 ;
-(void)didSelectReenableFeatureForProductName:(id)arg1 ;
-(void)didEnableAtrialFibrillationNotifications;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(void)setHeartRhythmAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(void)setDetectionState:(long long)arg1 ;
-(void)setTripleTapToSettingsRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setMetaDataSection:(id<HKDataMetadataSectionProtocol>)arg1 ;
@end


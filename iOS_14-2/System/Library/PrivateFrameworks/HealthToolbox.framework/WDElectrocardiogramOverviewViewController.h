/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HRFeatureRegulatoryReenableFeatureActionDelegate.h>
#import <libobjc.A.dylib/HRElectrocardiogramOnboardingManagerDelegate.h>
#import <libobjc.A.dylib/WDElectrocardiogramFilterDataProviderDelegate.h>
#import <libobjc.A.dylib/HKOnboardingSetupViewDelegate.h>
#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>

@protocol HKDataMetadataSectionProtocol;
@class HKDisplayType, WDProfile, HRElectrocardiogramOnboardingManager, WDElectrocardiogramListDataProvider, WDElectrocardiogramFilterDataProvider, HKHeartRhythmAvailability, UITapGestureRecognizer, NSString;

@interface WDElectrocardiogramOverviewViewController : HKTableViewController <HRFeatureRegulatoryReenableFeatureActionDelegate, HRElectrocardiogramOnboardingManagerDelegate, WDElectrocardiogramFilterDataProviderDelegate, HKOnboardingSetupViewDelegate, HKHeartRhythmAvailabilityObserver> {

	BOOL _firstViewDidLayoutSubviews;
	BOOL _previousElectrocardiogramDisabledCacheValue;
	long long _placeholderCellCount;
	HKDisplayType* _displayType;
	WDProfile* _profile;
	HRElectrocardiogramOnboardingManager* _onboardingManager;
	WDElectrocardiogramListDataProvider* _dataProvider;
	WDElectrocardiogramFilterDataProvider* _filterDataProvider;
	HKHeartRhythmAvailability* _heartRhythmAvailability;
	id<HKDataMetadataSectionProtocol> _educationSection;
	UITapGestureRecognizer* _tripleTapToSettingsRecognizer;

}

@property (assign,nonatomic) BOOL firstViewDidLayoutSubviews;                                         //@synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                             //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic,__weak) WDProfile * profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HRElectrocardiogramOnboardingManager * onboardingManager;                //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (nonatomic,retain) WDElectrocardiogramListDataProvider * dataProvider;                      //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) WDElectrocardiogramFilterDataProvider * filterDataProvider;              //@synthesize filterDataProvider=_filterDataProvider - In the implementation block
@property (nonatomic,retain) HKHeartRhythmAvailability * heartRhythmAvailability;                     //@synthesize heartRhythmAvailability=_heartRhythmAvailability - In the implementation block
@property (nonatomic,retain) id<HKDataMetadataSectionProtocol> educationSection;                      //@synthesize educationSection=_educationSection - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tripleTapToSettingsRecognizer;                  //@synthesize tripleTapToSettingsRecognizer=_tripleTapToSettingsRecognizer - In the implementation block
@property (assign,nonatomic) BOOL previousElectrocardiogramDisabledCacheValue;                        //@synthesize previousElectrocardiogramDisabledCacheValue=_previousElectrocardiogramDisabledCacheValue - In the implementation block
@property (assign,nonatomic) long long placeholderCellCount;                                          //@synthesize placeholderCellCount=_placeholderCellCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setProfile:(WDProfile *)arg1 ;
-(void)setDataProvider:(WDElectrocardiogramListDataProvider *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)heartRhythmAvailabilityDidUpdate;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(unsigned long long)availabilityState;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)showInternalSettings;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(WDElectrocardiogramOverviewSectionInfo)sectionInfo;
-(WDElectrocardiogramListDataProvider *)dataProvider;
-(WDProfile *)profile;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(HRElectrocardiogramOnboardingManager *)onboardingManager;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)beginOnboardingForOnboardingSetupView:(id)arg1 ;
-(void)setOnboardingManager:(HRElectrocardiogramOnboardingManager *)arg1 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(BOOL)_isDisplayTypeFavorited;
-(id)_cellForDataSourcesAndAccess;
-(id)_cellForDescription;
-(BOOL)isPrimaryProfile;
-(UITapGestureRecognizer *)tripleTapToSettingsRecognizer;
-(BOOL)firstViewDidLayoutSubviews;
-(void)setFirstViewDidLayoutSubviews:(BOOL)arg1 ;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(double)adjustedSafeAreaInsetTop;
-(void)_reloadTableViewAndScrollToTop;
-(id)_cellForFavorites;
-(id)_sectionHeaderViewWithTitle:(id)arg1 ;
-(void)isFavorited:(BOOL)arg1 ;
-(void)_startOnboardingForFirstTime:(BOOL)arg1 ;
-(void)didSelectReenableFeatureForProductName:(id)arg1 ;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(void)setHeartRhythmAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(void)setTripleTapToSettingsRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)electrocardiogramFilterDataProvider:(id)arg1 didUpdateCount:(long long)arg2 type:(long long)arg3 ;
-(void)_reloadElectrocardiogramSetupTableHeaderView;
-(void)setPlaceholderCellCount:(long long)arg1 ;
-(WDElectrocardiogramFilterDataProvider *)filterDataProvider;
-(BOOL)previousElectrocardiogramDisabledCacheValue;
-(void)setPreviousElectrocardiogramDisabledCacheValue:(BOOL)arg1 ;
-(long long)placeholderCellCount;
-(WDElectrocardiogramOverviewUserConfigurationRowInfo)userConfigurationRowInfo;
-(id<HKDataMetadataSectionProtocol>)educationSection;
-(id)_cellForSampleAtIndex:(long long)arg1 section:(long long)arg2 ;
-(long long)_filterTypeForDataSectionRow:(long long)arg1 ;
-(id)_showAllResultsCellForType:(long long)arg1 ;
-(id)_cellWithDisclosureIndicatorAndText:(id)arg1 value:(id)arg2 ;
-(id)_cellForRegulatoryPane;
-(BOOL)shouldShowRecordingDisabledHeader;
-(id)_recordingDisabledHeaderView;
-(BOOL)_shouldShowElectrocardiogramSetupTableHeaderView;
-(id)_electrocardiogramSetupContainerView;
-(void)setFilterDataProvider:(WDElectrocardiogramFilterDataProvider *)arg1 ;
-(void)_reloadAllSections;
-(id)_dataListViewControllerWithFilterType:(long long)arg1 ;
-(void)_showDataSourcesAndAccessController;
-(void)didTapOnElectrocardiogram:(id)arg1 ;
-(BOOL)_anyOnboardingCompleted;
-(void)setEducationSection:(id<HKDataMetadataSectionProtocol>)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HRFeatureRegulatoryReenableFeatureActionDelegate.h>
#import <libobjc.A.dylib/HROnboardingManagerDelegate.h>
#import <libobjc.A.dylib/WDElectrocardiogramFilterDataProviderDelegate.h>
#import <libobjc.A.dylib/HKOnboardingSetupViewDelegate.h>
#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>

@protocol HKDataMetadataSectionProtocol;
@class HKDisplayType, WDProfile, HROnboardingManager, WDElectrocardiogramListDataProvider, WDElectrocardiogramFilterDataProvider, HKHeartRhythmAvailability, UITapGestureRecognizer, NSString;

@interface WDElectrocardiogramOverviewViewController : HKTableViewController <HRFeatureRegulatoryReenableFeatureActionDelegate, HROnboardingManagerDelegate, WDElectrocardiogramFilterDataProviderDelegate, HKOnboardingSetupViewDelegate, HKHeartRhythmAvailabilityObserver> {

	BOOL _previousElectrocardiogramDisabledCacheValue;
	long long _placeholderCellCount;
	HKDisplayType* _displayType;
	WDProfile* _profile;
	HROnboardingManager* _onboardingManager;
	WDElectrocardiogramListDataProvider* _dataProvider;
	WDElectrocardiogramFilterDataProvider* _filterDataProvider;
	HKHeartRhythmAvailability* _heartRhythmAvailability;
	id<HKDataMetadataSectionProtocol> _educationSection;
	UITapGestureRecognizer* _tripleTapToSettingsRecognizer;

}

@property (nonatomic,retain) HKDisplayType * displayType;                                             //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic,__weak) WDProfile * profile;                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HROnboardingManager * onboardingManager;                                 //@synthesize onboardingManager=_onboardingManager - In the implementation block
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
-(void)dealloc;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(void)setDataProvider:(WDElectrocardiogramListDataProvider *)arg1 ;
-(WDElectrocardiogramListDataProvider *)dataProvider;
-(WDElectrocardiogramOverviewSectionInfo)sectionInfo;
-(void)heartRhythmAvailabilityDidUpdate;
-(void)showInternalSettings;
-(unsigned long long)availabilityState;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(void)electrocardiogramFilterDataProvider:(id)arg1 didUpdateCount:(long long)arg2 type:(long long)arg3 ;
-(BOOL)_isDisplayTypeFavorited;
-(UITapGestureRecognizer *)tripleTapToSettingsRecognizer;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(BOOL)_isPrimaryProfile;
-(void)_reloadTableViewAndScrollToTop;
-(void)setOnboardingManager:(HROnboardingManager *)arg1 ;
-(HROnboardingManager *)onboardingManager;
-(id)_cellForFavorites;
-(id)_cellForDataSourcesAndAccess;
-(id)_sectionHeaderViewWithTitle:(id)arg1 ;
-(void)isFavorited:(BOOL)arg1 ;
-(void)_startOnboardingForFirstTime:(BOOL)arg1 ;
-(void)didSelectReenableFeatureForProductName:(id)arg1 ;
-(void)didTapOnElectrocardiogram:(id)arg1 ;
-(void)didTapOnAtrialFibrillationNotificationLearnMore;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(void)beginOnboardingForOnboardingSetupView:(id)arg1 ;
-(void)setHeartRhythmAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(void)setTripleTapToSettingsRecognizer:(UITapGestureRecognizer *)arg1 ;
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
-(id)_cellForDescription;
-(id)_cellForRegulatoryPane;
-(BOOL)shouldShowRecordingDisabledHeader;
-(id)_recordingDisabledHeaderView;
-(BOOL)_shouldShowElectrocardiogramSetupTableHeaderView;
-(id)_electrocardiogramSetupContainerView;
-(id)_dataListViewControllerWithFilterType:(long long)arg1 ;
-(void)_showDataSourcesAndAccessController;
-(void)setFilterDataProvider:(WDElectrocardiogramFilterDataProvider *)arg1 ;
-(void)setEducationSection:(id<HKDataMetadataSectionProtocol>)arg1 ;
@end


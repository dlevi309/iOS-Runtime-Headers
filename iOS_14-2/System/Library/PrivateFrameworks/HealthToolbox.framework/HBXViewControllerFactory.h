/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


#import <HealthToolbox/HealthToolbox-Structs.h>
@class HKHealthChartFactory, WDProfile, HBXUnitSupport;

@interface HBXViewControllerFactory : NSObject {

	HKHealthChartFactory* _chartFactory;
	WDProfile* _profile;
	HBXUnitSupport* _unitSupport;

}

@property (nonatomic,retain) WDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HBXUnitSupport * unitSupport;                     //@synthesize unitSupport=_unitSupport - In the implementation block
@property (nonatomic,retain) HKHealthChartFactory * chartFactory;              //@synthesize chartFactory=_chartFactory - In the implementation block
+(id)sharedInstance;
+(id)sharedInstanceForHealthStore:(id)arg1 ;
+(id)factories;
+(os_unfair_recursive_lock_s)factoriesLock;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)localizedUnitDisplayNameForDisplayType:(id)arg1 nameContext:(long long)arg2 ;
-(id)init;
-(id)createDeletedSourceMessageViewControllerForSource:(id)arg1 ;
-(id)createActivityChartForActivityMoveMode:(long long)arg1 displayDate:(id)arg2 ;
-(id)createHKUnitPreferenceController;
-(id)createUnitPreferencesController:(id)arg1 ;
-(id)createDataSourcesTableViewController:(id)arg1 ;
-(id)createListViewController:(id)arg1 ;
-(HKHealthChartFactory *)chartFactory;
-(id)notificationManager;
-(id)createDetailViewControllerForType:(id)arg1 ;
-(WDProfile *)profile;
-(id)createLocalDeviceStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(BOOL)arg3 ;
-(id)createWatchStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(BOOL)arg3 ;
-(id)detailViewControllerForSourceModel:(id)arg1 withHealthStore:(id)arg2 ;
-(id)createFavoritesController;
-(id)createDeviceStoredDataViewControllerForDevice:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(BOOL)arg3 ;
-(id)preferredUnitForType:(id)arg1 ;
-(void)fetchUserDefaultForKey:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(id)createSingleAppAuthorizationViewControllerUsingInsetStyling:(BOOL)arg1 restorationApplicationBundleIdentifier:(id)arg2 ;
-(id)createResearchStudySourcesViewControllerUsingInsetStyling:(BOOL)arg1 restorationStudyBundleIdentifier:(id)arg2 ;
-(void)createAndStartExportForViewController:(id)arg1 ;
-(id)localizedPreferredUnitDisplayNameForType:(id)arg1 nameContext:(long long)arg2 ;
-(void)updatePreferredUnit:(id)arg1 forType:(id)arg2 ;
-(void)setUnitSupport:(HBXUnitSupport *)arg1 ;
-(void)setChartFactory:(HKHealthChartFactory *)arg1 ;
-(id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDateInterval:(id)arg3 ;
-(id)createDetailViewControllerForType:(id)arg1 displayDate:(id)arg2 ;
-(HBXUnitSupport *)unitSupport;
-(id)createBuddyViewController;
-(id)createSourcesViewControllerUsingInsetStyling:(BOOL)arg1 ;
-(id)createAppSourcesViewControllerUsingInsetStyling:(BOOL)arg1 ;
-(id)createDeviceSourcesViewControllerUsingInsetStyling:(BOOL)arg1 ;
-(id)createContactConsolidationControllerInViewController:(id)arg1 ;
-(id)createChartForTypeIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 minimumSize:(CGSize)arg4 disableXAxis:(BOOL)arg5 ;
-(id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDate:(id)arg3 ;
-(id)createActivityChart:(id)arg1 ;
-(id)createElectrocardiogramListDataProvider;
-(id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)arg1 dataProvider:(id)arg2 ;
-(id)localizedDisplayNameForUnit:(id)arg1 ;
-(id)localizedPreferredUnitDisplayNameForType:(id)arg1 ;
-(id)unitStringForType:(id)arg1 ;
@end


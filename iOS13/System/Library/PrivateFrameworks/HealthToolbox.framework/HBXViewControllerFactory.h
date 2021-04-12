/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


#import <HealthToolbox/HealthToolbox-Structs.h>
@class WDProfile, HBXUnitSupport, HKHealthChartFactory;

@interface HBXViewControllerFactory : NSObject {

	WDProfile* _profile;
	HBXUnitSupport* _unitSupport;
	HKHealthChartFactory* _chartFactory;

}

@property (nonatomic,retain) WDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HBXUnitSupport * unitSupport;                     //@synthesize unitSupport=_unitSupport - In the implementation block
@property (nonatomic,retain) HKHealthChartFactory * chartFactory;              //@synthesize chartFactory=_chartFactory - In the implementation block
+(id)sharedInstance;
-(id)init;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(id)notificationManager;
-(id)initWithHealthStore:(id)arg1 ;
-(id)createFavoritesController;
-(id)localizedUnitDisplayNameForDisplayType:(id)arg1 ;
-(id)localizedPreferredUnitDisplayNameForType:(id)arg1 ;
-(id)createAddDataViewController:(id)arg1 with:(id)arg2 ;
-(id)createActivityChart:(id)arg1 ;
-(id)localizedDisplayNameForUnit:(id)arg1 ;
-(id)createHKUnitPreferenceController;
-(id)createUnitPreferencesController:(id)arg1 ;
-(id)createDataSourcesTableViewController:(id)arg1 ;
-(id)createListViewController:(id)arg1 ;
-(id)createInteractiveChartForType:(id)arg1 secondaryTypeIdentifier:(id)arg2 displayDateInterval:(id)arg3 ;
-(id)createInteractiveChartForType:(id)arg1 secondaryTypeIdentifier:(id)arg2 displayDate:(id)arg3 ;
-(id)createProfileViewController;
-(void)fetchUserDefaultForKey:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(id)createAppSourcesViewControllerUsingInsetStyling:(BOOL)arg1 ;
-(id)createSingleAppAuthorizationViewControllerUsingInsetStyling:(BOOL)arg1 restorationApplicationBundleIdentifier:(id)arg2 ;
-(id)createDeviceSourcesViewControllerUsingInsetStyling:(BOOL)arg1 ;
-(id)createResearchStudySourcesViewControllerUsingInsetStyling:(BOOL)arg1 restorationStudyBundleIdentifier:(id)arg2 ;
-(void)createAndStartExportForViewController:(id)arg1 ;
-(id)createDeletedSourceMessageViewControllerForSource:(id)arg1 ;
-(id)createDetailViewControllerForType:(id)arg1 ;
-(void)setUnitSupport:(HBXUnitSupport *)arg1 ;
-(void)setChartFactory:(HKHealthChartFactory *)arg1 ;
-(id)createDetailViewControllerForType:(id)arg1 displayDate:(id)arg2 ;
-(HBXUnitSupport *)unitSupport;
-(id)preferredUnitForType:(id)arg1 ;
-(void)updatePreferredUnit:(id)arg1 forType:(id)arg2 ;
-(id)createHeartRoomViewControllerWithDisplayDate:(id)arg1 ;
-(id)createActivityViewController;
-(id)createBuddyViewController;
-(id)createSourcesViewControllerUsingInsetStyling:(BOOL)arg1 ;
-(id)createContactConsolidationControllerInViewController:(id)arg1 ;
-(id)createChartForTypeIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 minimumSize:(CGSize)arg4 disableXAxis:(BOOL)arg5 ;
-(id)createElectrocardiogramListDataProvider;
-(id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)arg1 dataProvider:(id)arg2 ;
-(id)unitStringForType:(id)arg1 ;
-(HKHealthChartFactory *)chartFactory;
@end


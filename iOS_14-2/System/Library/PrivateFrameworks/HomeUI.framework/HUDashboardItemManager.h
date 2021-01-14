/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@protocol HUDashboardItemManagerDelegate;
@class HUDashboardContext, HFItem, HFActionSetListItem, HFStaticItem, HFCameraListItem, HFAccessoryItemProvider, HFServiceItemProvider, HFServiceGroupItemProvider, HFGenericAccessoryItemProvider, HFProgrammableSwitchItemProvider, HFTargetControlItemProvider, HFMediaAccessoryItemProvider, HFDemoModeAccessoryItemProvider, HFReorderableHomeKitItemList;

@interface HUDashboardItemManager : HFItemManager {

	BOOL _editing;
	BOOL _forceHideMultiUserTokenFixBannerItem;
	HUDashboardContext* _context;
	HFItem* _headlineItem;
	HFItem* _statusBannerItem;
	HFItem* _multiUserTokenFixBannerItem;
	HFItem* _mediaServiceErrorBannerItem;
	HFItem* _welcomeUIBannerItem;
	HFItem* _statusListItem;
	HFActionSetListItem* _sceneListItem;
	HFStaticItem* _placeholderSceneListItem;
	HFCameraListItem* _cameraListItem;
	HFItem* _editItem;
	HFItem* _placeholderServicesListItem;
	id _homeMediaAccount;
	id<HUDashboardItemManagerDelegate> _dashboardDelegate;
	HFAccessoryItemProvider* _accessoryItemProvider;
	HFServiceItemProvider* _serviceItemProvider;
	HFServiceGroupItemProvider* _serviceGroupItemProvider;
	HFGenericAccessoryItemProvider* _genericItemProvider;
	HFProgrammableSwitchItemProvider* _programmableSwitchItemProvider;
	HFTargetControlItemProvider* _targetControlItemProvider;
	HFMediaAccessoryItemProvider* _mediaAccessoryItemProvider;
	HFDemoModeAccessoryItemProvider* _demoModeAccessoryItemProvider;
	HFReorderableHomeKitItemList* _clientReorderableServiceList;
	HFReorderableHomeKitItemList* _clientReorderableCameraList;

}

@property (nonatomic,__weak,readonly) id<HUDashboardItemManagerDelegate> dashboardDelegate;                  //@synthesize dashboardDelegate=_dashboardDelegate - In the implementation block
@property (nonatomic,retain) HFAccessoryItemProvider * accessoryItemProvider;                                //@synthesize accessoryItemProvider=_accessoryItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceItemProvider * serviceItemProvider;                                    //@synthesize serviceItemProvider=_serviceItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceGroupItemProvider * serviceGroupItemProvider;                          //@synthesize serviceGroupItemProvider=_serviceGroupItemProvider - In the implementation block
@property (nonatomic,retain) HFGenericAccessoryItemProvider * genericItemProvider;                           //@synthesize genericItemProvider=_genericItemProvider - In the implementation block
@property (nonatomic,retain) HFProgrammableSwitchItemProvider * programmableSwitchItemProvider;              //@synthesize programmableSwitchItemProvider=_programmableSwitchItemProvider - In the implementation block
@property (nonatomic,retain) HFTargetControlItemProvider * targetControlItemProvider;                        //@synthesize targetControlItemProvider=_targetControlItemProvider - In the implementation block
@property (nonatomic,retain) HUDashboardContext * context;                                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HFMediaAccessoryItemProvider * mediaAccessoryItemProvider;                      //@synthesize mediaAccessoryItemProvider=_mediaAccessoryItemProvider - In the implementation block
@property (nonatomic,retain) HFDemoModeAccessoryItemProvider * demoModeAccessoryItemProvider;                //@synthesize demoModeAccessoryItemProvider=_demoModeAccessoryItemProvider - In the implementation block
@property (nonatomic,retain) HFItem * headlineItem;                                                          //@synthesize headlineItem=_headlineItem - In the implementation block
@property (nonatomic,retain) HFItem * statusListItem;                                                        //@synthesize statusListItem=_statusListItem - In the implementation block
@property (nonatomic,retain) HFItem * statusBannerItem;                                                      //@synthesize statusBannerItem=_statusBannerItem - In the implementation block
@property (nonatomic,retain) HFItem * multiUserTokenFixBannerItem;                                           //@synthesize multiUserTokenFixBannerItem=_multiUserTokenFixBannerItem - In the implementation block
@property (nonatomic,retain) HFItem * mediaServiceErrorBannerItem;                                           //@synthesize mediaServiceErrorBannerItem=_mediaServiceErrorBannerItem - In the implementation block
@property (nonatomic,retain) HFItem * welcomeUIBannerItem;                                                   //@synthesize welcomeUIBannerItem=_welcomeUIBannerItem - In the implementation block
@property (nonatomic,retain) HFActionSetListItem * sceneListItem;                                            //@synthesize sceneListItem=_sceneListItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * placeholderSceneListItem;                                        //@synthesize placeholderSceneListItem=_placeholderSceneListItem - In the implementation block
@property (nonatomic,retain) HFCameraListItem * cameraListItem;                                              //@synthesize cameraListItem=_cameraListItem - In the implementation block
@property (nonatomic,retain) HFItem * editItem;                                                              //@synthesize editItem=_editItem - In the implementation block
@property (nonatomic,retain) HFItem * placeholderServicesListItem;                                           //@synthesize placeholderServicesListItem=_placeholderServicesListItem - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableServiceList;                    //@synthesize clientReorderableServiceList=_clientReorderableServiceList - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableCameraList;                     //@synthesize clientReorderableCameraList=_clientReorderableCameraList - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                  //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL forceHideMultiUserTokenFixBannerItem;                                      //@synthesize forceHideMultiUserTokenFixBannerItem=_forceHideMultiUserTokenFixBannerItem - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableServiceList; 
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableCameraList; 
@property (nonatomic,retain) id homeMediaAccount;                                                            //@synthesize homeMediaAccount=_homeMediaAccount - In the implementation block
-(void)_updateFilters;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(HFCameraListItem *)cameraListItem;
-(void)setHomeMediaAccount:(id)arg1 ;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(HUDashboardContext *)context;
-(BOOL)_requiresNotificationsForCharacteristic:(id)arg1 ;
-(BOOL)isEditing;
-(BOOL)dashboardHasPlaceholderServiceOrSceneItems;
-(void)settings:(id)arg1 didUpdateSetting:(id)arg2 ;
-(void)settings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3 ;
-(HFReorderableHomeKitItemList *)reorderableServiceList;
-(HFReorderableHomeKitItemList *)reorderableCameraList;
-(void)setReorderableServiceList:(HFReorderableHomeKitItemList *)arg1 ;
-(void)setReorderableCameraList:(HFReorderableHomeKitItemList *)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(id)_itemForSorting;
-(id)_itemsToHideInSet:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(BOOL)isEmptyHomeDashboard;
-(void)homeDidUpdateWallpaper:(id)arg1 ;
-(void)home:(id)arg1 didUpdateWallpaperForRoom:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(HFItem *)editItem;
-(unsigned long long)_numberOfSections;
-(HFItem *)headlineItem;
-(HFItem *)statusBannerItem;
-(HFItem *)multiUserTokenFixBannerItem;
-(HFItem *)mediaServiceErrorBannerItem;
-(HFItem *)welcomeUIBannerItem;
-(id)homeMediaAccount;
-(void)setForceHideMultiUserTokenFixBannerItem:(BOOL)arg1 ;
-(HFItem *)statusListItem;
-(HFActionSetListItem *)sceneListItem;
-(HFStaticItem *)placeholderSceneListItem;
-(HFItem *)placeholderServicesListItem;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(void)_willUpdateSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setContext:(HUDashboardContext *)arg1 ;
-(void)setServiceItemProvider:(HFServiceItemProvider *)arg1 ;
-(HFServiceItemProvider *)serviceItemProvider;
-(id)_currentSectionIdentifiers;
-(HFReorderableHomeKitItemList *)clientReorderableCameraList;
-(void)setClientReorderableCameraList:(HFReorderableHomeKitItemList *)arg1 ;
-(HFReorderableHomeKitItemList *)clientReorderableServiceList;
-(void)setClientReorderableServiceList:(HFReorderableHomeKitItemList *)arg1 ;
-(void)_updateContextForHome:(id)arg1 room:(id)arg2 ;
-(void)setHeadlineItem:(HFItem *)arg1 ;
-(void)setStatusBannerItem:(HFItem *)arg1 ;
-(void)setMultiUserTokenFixBannerItem:(HFItem *)arg1 ;
-(void)setMediaServiceErrorBannerItem:(HFItem *)arg1 ;
-(BOOL)shouldShowWelcomeUIBanner;
-(void)setWelcomeUIBannerItem:(HFItem *)arg1 ;
-(void)setStatusListItem:(HFItem *)arg1 ;
-(void)setSceneListItem:(HFActionSetListItem *)arg1 ;
-(void)setPlaceholderSceneListItem:(HFStaticItem *)arg1 ;
-(void)setCameraListItem:(HFCameraListItem *)arg1 ;
-(void)setEditItem:(HFItem *)arg1 ;
-(void)setProgrammableSwitchItemProvider:(HFProgrammableSwitchItemProvider *)arg1 ;
-(void)setTargetControlItemProvider:(HFTargetControlItemProvider *)arg1 ;
-(void)setAccessoryItemProvider:(HFAccessoryItemProvider *)arg1 ;
-(void)setServiceGroupItemProvider:(HFServiceGroupItemProvider *)arg1 ;
-(void)setGenericItemProvider:(HFGenericAccessoryItemProvider *)arg1 ;
-(void)setMediaAccessoryItemProvider:(HFMediaAccessoryItemProvider *)arg1 ;
-(void)setDemoModeAccessoryItemProvider:(HFDemoModeAccessoryItemProvider *)arg1 ;
-(void)setPlaceholderServicesListItem:(HFItem *)arg1 ;
-(HFProgrammableSwitchItemProvider *)programmableSwitchItemProvider;
-(HFTargetControlItemProvider *)targetControlItemProvider;
-(HFAccessoryItemProvider *)accessoryItemProvider;
-(HFServiceGroupItemProvider *)serviceGroupItemProvider;
-(HFGenericAccessoryItemProvider *)genericItemProvider;
-(HFMediaAccessoryItemProvider *)mediaAccessoryItemProvider;
-(HFDemoModeAccessoryItemProvider *)demoModeAccessoryItemProvider;
-(BOOL)forceHideMultiUserTokenFixBannerItem;
-(BOOL)isServiceLikeItemsAndCamerasEmpty;
-(BOOL)isEmptyDashboard;
-(id<HUDashboardItemManagerDelegate>)dashboardDelegate;
-(BOOL)hasVisibleServiceLikeItems;
-(BOOL)isStatusListVisible;
@end


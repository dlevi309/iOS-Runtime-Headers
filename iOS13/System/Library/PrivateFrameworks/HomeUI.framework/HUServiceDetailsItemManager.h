/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate.h>
#import <libobjc.A.dylib/HUCameraRecordingSettingsModuleDelegate.h>
#import <libobjc.A.dylib/HFAccessorySettingDeviceOptionsAdapterUtilityDelegate.h>

@protocol HFItemBuilderItem, HFServiceLikeBuilder, HUServiceDetailsItemManagerDelegate;
@class HFItem, HFItemBuilder, HFItemProvider, HFSelectedRoomItemProvider, HFAccessoryInfoDetailsItemProvider, HUNameItemModule, HUAccessorySettingsItemModule, HUSoftwareUpdateItemModule, HFRemoteControlItemModule, HUTelevisionSettingsItemModule, HUInputSourceItemModule, HUCameraRecordingSettingsModule, HUValveItemModule, HUAccessoryServicesItemModule, HUAssociatedSceneAndTriggerModule, HUAccessoryDebugModule, NSArray, ACAccount, HMHome, HUServiceDetailsProgrammableSwitchItemModule, HUServiceDetailsControlAndCharacteristicStateItemModule, HFAssociatedServiceTypeOptionItemProvider, HFStaticItemProvider, HULinkedApplicationItemProvider, HUFirmwareUpdateItemProvider, HFAccessorySettingDeviceOptionsAdapter, HFAccessorySettingDeviceOptionsAdapterUtility, HMAccessory, NSString;

@interface HUServiceDetailsItemManager : HFItemManager <HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate, HUCameraRecordingSettingsModuleDelegate, HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> {

	BOOL _shouldHideAccessoryItem;
	BOOL _shouldHideSeparateTileItem;
	BOOL _showRoomsList;
	BOOL _showAssociatedServiceTypeList;
	BOOL _groupedAccessoryReachableOverRapport;
	HFItem*<HFItemBuilderItem> _builderItem;
	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;
	HFItemProvider* _existingRoomItemProvider;
	HFItemProvider* _suggestedRoomItemProvider;
	HFSelectedRoomItemProvider* _selectedRoomItemProvider;
	HFAccessoryInfoDetailsItemProvider* _accessoryInfoItemProvider;
	HUNameItemModule* _nameModule;
	HUAccessorySettingsItemModule* _accessorySettingsItemModule;
	HUSoftwareUpdateItemModule* _softwareUpdateItemModule;
	HFRemoteControlItemModule* _serviceDetailsRemoteControlItemModule;
	HUTelevisionSettingsItemModule* _televisionSettingsItemModule;
	HUInputSourceItemModule* _inputSourceItemModule;
	HUCameraRecordingSettingsModule* _cameraRecordingItemModule;
	HUValveItemModule* _valveEditorItemModule;
	HUAccessoryServicesItemModule* _accessoryServicesEditorItemModule;
	HUAssociatedSceneAndTriggerModule* _sceneAndTriggerModule;
	HUAccessoryDebugModule* _debugAccessoryItemModule;
	HFItem* _selectedRoomItem;
	HFItem*<HFItemBuilderItem> _headerItem;
	HFItem* _splitMediaAccountTitleItem;
	HFItem* _splitMediaAccountUseDefaultAccountItem;
	HFItem* _splitMediaAccountSignoutAccountItem;
	HFItem* _createNewRoomItem;
	HFItem* _roomListItem;
	HFItem* _addGroupItem;
	HFItem* _showContainedItems;
	HFItem* _roomItem;
	HFItem* _associatedServiceTypeItem;
	HFItem* _favoriteItem;
	HFItem* _alarmItem;
	HFItem* _statusAndNotificationItem;
	HFItem* _separateTileItem;
	NSArray* _supportedMultiUserLanguageCodes;
	ACAccount* _homeMediaAccount;
	HFItem* _removeItem;
	HFItem* _resetItem;
	HFItem* _accessoryItem;
	HFItem* _audioSettingsItem;
	HFItem* _cameraStatusLightItem;
	HFItem* _cameraNightModeItem;
	HFItem* _internalDebuggingItem;
	HFItem* _restartItem;
	HMHome* _overrideHome;
	HUServiceDetailsProgrammableSwitchItemModule* _programmableSwitchItemModule;
	HUServiceDetailsControlAndCharacteristicStateItemModule* _serviceDetailsControlStateAndCharacteristicItemModule;
	NSArray* _splitMediaAccountSections;
	NSArray* _nameAndIconSections;
	NSArray* _characteristicSections;
	NSArray* _programmableSwitchSections;
	NSArray* _accessorySettingsSections;
	NSArray* _softwareUpdateSections;
	NSArray* _valveEditorSections;
	NSArray* _sceneAndTriggerSections;
	NSArray* _inputSourceEditorSections;
	NSArray* _televisionSettingsSections;
	NSArray* _cameraRecordingSettingSections;
	NSArray* _cameraStatusLightSections;
	NSArray* _cameraNightModeSections;
	HFAssociatedServiceTypeOptionItemProvider* _associatedServiceTypeOptionItemProvider;
	HFStaticItemProvider* _staticItemProvider;
	HULinkedApplicationItemProvider* _linkedApplicationItemProvider;
	HUFirmwareUpdateItemProvider* _firmwareUpdateItemProvider;
	HFAccessorySettingDeviceOptionsAdapter* _deviceOptionsAdapter;
	HFAccessorySettingDeviceOptionsAdapterUtility* _deviceOptionsAdapterUtility;
	id<HUServiceDetailsItemManagerDelegate> _serviceDetailsDelegate;

}

@property (nonatomic,retain) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;                                                                      //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
@property (nonatomic,readonly) HMHome * overrideHome;                                                                                                      //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HUNameItemModule * nameModule;                                                                                                //@synthesize nameModule=_nameModule - In the implementation block
@property (nonatomic,retain) HUServiceDetailsProgrammableSwitchItemModule * programmableSwitchItemModule;                                                  //@synthesize programmableSwitchItemModule=_programmableSwitchItemModule - In the implementation block
@property (nonatomic,retain) HUServiceDetailsControlAndCharacteristicStateItemModule * serviceDetailsControlStateAndCharacteristicItemModule;              //@synthesize serviceDetailsControlStateAndCharacteristicItemModule=_serviceDetailsControlStateAndCharacteristicItemModule - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsItemModule * accessorySettingsItemModule;                                                                  //@synthesize accessorySettingsItemModule=_accessorySettingsItemModule - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateItemModule * softwareUpdateItemModule;                                                                        //@synthesize softwareUpdateItemModule=_softwareUpdateItemModule - In the implementation block
@property (nonatomic,retain) HUValveItemModule * valveEditorItemModule;                                                                                    //@synthesize valveEditorItemModule=_valveEditorItemModule - In the implementation block
@property (nonatomic,retain) HUTelevisionSettingsItemModule * televisionSettingsItemModule;                                                                //@synthesize televisionSettingsItemModule=_televisionSettingsItemModule - In the implementation block
@property (nonatomic,retain) HUInputSourceItemModule * inputSourceItemModule;                                                                              //@synthesize inputSourceItemModule=_inputSourceItemModule - In the implementation block
@property (nonatomic,retain) HUCameraRecordingSettingsModule * cameraRecordingItemModule;                                                                  //@synthesize cameraRecordingItemModule=_cameraRecordingItemModule - In the implementation block
@property (nonatomic,retain) NSArray * splitMediaAccountSections;                                                                                          //@synthesize splitMediaAccountSections=_splitMediaAccountSections - In the implementation block
@property (nonatomic,retain) NSArray * nameAndIconSections;                                                                                                //@synthesize nameAndIconSections=_nameAndIconSections - In the implementation block
@property (nonatomic,retain) NSArray * characteristicSections;                                                                                             //@synthesize characteristicSections=_characteristicSections - In the implementation block
@property (nonatomic,retain) NSArray * programmableSwitchSections;                                                                                         //@synthesize programmableSwitchSections=_programmableSwitchSections - In the implementation block
@property (nonatomic,retain) NSArray * accessorySettingsSections;                                                                                          //@synthesize accessorySettingsSections=_accessorySettingsSections - In the implementation block
@property (nonatomic,retain) NSArray * softwareUpdateSections;                                                                                             //@synthesize softwareUpdateSections=_softwareUpdateSections - In the implementation block
@property (nonatomic,retain) NSArray * valveEditorSections;                                                                                                //@synthesize valveEditorSections=_valveEditorSections - In the implementation block
@property (nonatomic,retain) NSArray * sceneAndTriggerSections;                                                                                            //@synthesize sceneAndTriggerSections=_sceneAndTriggerSections - In the implementation block
@property (nonatomic,retain) NSArray * inputSourceEditorSections;                                                                                          //@synthesize inputSourceEditorSections=_inputSourceEditorSections - In the implementation block
@property (nonatomic,retain) NSArray * televisionSettingsSections;                                                                                         //@synthesize televisionSettingsSections=_televisionSettingsSections - In the implementation block
@property (nonatomic,retain) NSArray * cameraRecordingSettingSections;                                                                                     //@synthesize cameraRecordingSettingSections=_cameraRecordingSettingSections - In the implementation block
@property (nonatomic,retain) NSArray * cameraStatusLightSections;                                                                                          //@synthesize cameraStatusLightSections=_cameraStatusLightSections - In the implementation block
@property (nonatomic,retain) NSArray * cameraNightModeSections;                                                                                            //@synthesize cameraNightModeSections=_cameraNightModeSections - In the implementation block
@property (nonatomic,retain) HFAssociatedServiceTypeOptionItemProvider * associatedServiceTypeOptionItemProvider;                                          //@synthesize associatedServiceTypeOptionItemProvider=_associatedServiceTypeOptionItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                                                                                    //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFAccessoryInfoDetailsItemProvider * accessoryInfoItemProvider;                                                               //@synthesize accessoryInfoItemProvider=_accessoryInfoItemProvider - In the implementation block
@property (nonatomic,retain) HULinkedApplicationItemProvider * linkedApplicationItemProvider;                                                              //@synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider - In the implementation block
@property (nonatomic,retain) HUFirmwareUpdateItemProvider * firmwareUpdateItemProvider;                                                                    //@synthesize firmwareUpdateItemProvider=_firmwareUpdateItemProvider - In the implementation block
@property (nonatomic,retain) HFSelectedRoomItemProvider * selectedRoomItemProvider;                                                                        //@synthesize selectedRoomItemProvider=_selectedRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * existingRoomItemProvider;                                                                                    //@synthesize existingRoomItemProvider=_existingRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * suggestedRoomItemProvider;                                                                                   //@synthesize suggestedRoomItemProvider=_suggestedRoomItemProvider - In the implementation block
@property (nonatomic,retain) HFAccessorySettingDeviceOptionsAdapter * deviceOptionsAdapter;                                                                //@synthesize deviceOptionsAdapter=_deviceOptionsAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingDeviceOptionsAdapterUtility * deviceOptionsAdapterUtility;                                                  //@synthesize deviceOptionsAdapterUtility=_deviceOptionsAdapterUtility - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> sourceServiceItem; 
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,retain) HFItem*<HFItemBuilderItem> headerItem;                                                                                        //@synthesize headerItem=_headerItem - In the implementation block
@property (nonatomic,retain) HFItem * createNewRoomItem;                                                                                                   //@synthesize createNewRoomItem=_createNewRoomItem - In the implementation block
@property (nonatomic,retain) HFItem * roomItem;                                                                                                            //@synthesize roomItem=_roomItem - In the implementation block
@property (nonatomic,retain) HFItem * roomListItem;                                                                                                        //@synthesize roomListItem=_roomListItem - In the implementation block
@property (nonatomic,retain) HFItem * associatedServiceTypeItem;                                                                                           //@synthesize associatedServiceTypeItem=_associatedServiceTypeItem - In the implementation block
@property (nonatomic,retain) HFItem * addGroupItem;                                                                                                        //@synthesize addGroupItem=_addGroupItem - In the implementation block
@property (nonatomic,retain) HFItem * internalDebuggingItem;                                                                                               //@synthesize internalDebuggingItem=_internalDebuggingItem - In the implementation block
@property (nonatomic,retain) HFItem * separateTileItem;                                                                                                    //@synthesize separateTileItem=_separateTileItem - In the implementation block
@property (nonatomic,retain) HFItem * showContainedItems;                                                                                                  //@synthesize showContainedItems=_showContainedItems - In the implementation block
@property (nonatomic,retain) HFItem * favoriteItem;                                                                                                        //@synthesize favoriteItem=_favoriteItem - In the implementation block
@property (nonatomic,retain) HFItem * alarmItem;                                                                                                           //@synthesize alarmItem=_alarmItem - In the implementation block
@property (nonatomic,retain) HFItem * statusAndNotificationItem;                                                                                           //@synthesize statusAndNotificationItem=_statusAndNotificationItem - In the implementation block
@property (nonatomic,retain) HFItem * removeItem;                                                                                                          //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFItem * resetItem;                                                                                                           //@synthesize resetItem=_resetItem - In the implementation block
@property (nonatomic,retain) HFItem * accessoryItem;                                                                                                       //@synthesize accessoryItem=_accessoryItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraStatusLightItem;                                                                                               //@synthesize cameraStatusLightItem=_cameraStatusLightItem - In the implementation block
@property (nonatomic,retain) HFItem * cameraNightModeItem;                                                                                                 //@synthesize cameraNightModeItem=_cameraNightModeItem - In the implementation block
@property (nonatomic,retain) HFItem * audioSettingsItem;                                                                                                   //@synthesize audioSettingsItem=_audioSettingsItem - In the implementation block
@property (nonatomic,retain) HFItem * restartItem;                                                                                                         //@synthesize restartItem=_restartItem - In the implementation block
@property (nonatomic,retain) HFItem * splitMediaAccountTitleItem;                                                                                          //@synthesize splitMediaAccountTitleItem=_splitMediaAccountTitleItem - In the implementation block
@property (nonatomic,retain) HFItem * splitMediaAccountUseDefaultAccountItem;                                                                              //@synthesize splitMediaAccountUseDefaultAccountItem=_splitMediaAccountUseDefaultAccountItem - In the implementation block
@property (nonatomic,retain) HFItem * splitMediaAccountSignoutAccountItem;                                                                                 //@synthesize splitMediaAccountSignoutAccountItem=_splitMediaAccountSignoutAccountItem - In the implementation block
@property (assign,nonatomic) BOOL groupedAccessoryReachableOverRapport;                                                                                    //@synthesize groupedAccessoryReachableOverRapport=_groupedAccessoryReachableOverRapport - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceDetailsItemManagerDelegate> serviceDetailsDelegate;                                                        //@synthesize serviceDetailsDelegate=_serviceDetailsDelegate - In the implementation block
@property (nonatomic,readonly) HFItem*<HFItemBuilderItem> builderItem;                                                                                     //@synthesize builderItem=_builderItem - In the implementation block
@property (nonatomic,readonly) HFRemoteControlItemModule * serviceDetailsRemoteControlItemModule;                                                          //@synthesize serviceDetailsRemoteControlItemModule=_serviceDetailsRemoteControlItemModule - In the implementation block
@property (nonatomic,readonly) HUAccessoryServicesItemModule * accessoryServicesEditorItemModule;                                                          //@synthesize accessoryServicesEditorItemModule=_accessoryServicesEditorItemModule - In the implementation block
@property (nonatomic,readonly) HUAssociatedSceneAndTriggerModule * sceneAndTriggerModule;                                                                  //@synthesize sceneAndTriggerModule=_sceneAndTriggerModule - In the implementation block
@property (nonatomic,readonly) HUAccessoryDebugModule * debugAccessoryItemModule;                                                                          //@synthesize debugAccessoryItemModule=_debugAccessoryItemModule - In the implementation block
@property (nonatomic,readonly) HFItem * selectedRoomItem;                                                                                                  //@synthesize selectedRoomItem=_selectedRoomItem - In the implementation block
@property (nonatomic,readonly) NSArray * orderedRoomSectionItems; 
@property (nonatomic,readonly) ACAccount * loggedInMediaAccountOnHomePod; 
@property (nonatomic,readonly) BOOL sourceItemIsHomePod; 
@property (nonatomic,retain) NSArray * supportedMultiUserLanguageCodes;                                                                                    //@synthesize supportedMultiUserLanguageCodes=_supportedMultiUserLanguageCodes - In the implementation block
@property (nonatomic,retain) ACAccount * homeMediaAccount;                                                                                                 //@synthesize homeMediaAccount=_homeMediaAccount - In the implementation block
@property (assign,nonatomic) BOOL shouldHideAccessoryItem;                                                                                                 //@synthesize shouldHideAccessoryItem=_shouldHideAccessoryItem - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSeparateTileItem;                                                                                              //@synthesize shouldHideSeparateTileItem=_shouldHideSeparateTileItem - In the implementation block
@property (assign,nonatomic) BOOL showRoomsList;                                                                                                           //@synthesize showRoomsList=_showRoomsList - In the implementation block
@property (assign,nonatomic) BOOL showAssociatedServiceTypeList;                                                                                           //@synthesize showAssociatedServiceTypeList=_showAssociatedServiceTypeList - In the implementation block
@property (nonatomic,readonly) HFItem * selectedAssociatedServiceTypeItem; 
@property (nonatomic,readonly) HMAccessory * sourceItemAccessory; 
@property (nonatomic,readonly) id<HFHomeKitObject> sourceItemHomeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)selectRoom:(id)arg1 ;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(HFItem *)removeItem;
-(BOOL)isAccessory;
-(HFItem*<HFItemBuilderItem>)headerItem;
-(void)setHeaderItem:(HFItem*<HFItemBuilderItem>)arg1 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(BOOL)isItemGroup;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(void)setServiceLikeBuilder:(HFItemBuilder*<HFServiceLikeBuilder>)arg1 ;
-(void)settings:(id)arg1 didUpdateSetting:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)canToggleAccessoryInfoItem:(id)arg1 ;
-(void)toggleAccessoryInfoItem:(id)arg1 ;
-(id)_homeFuture;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(HFItem *)roomItem;
-(void)accessoryReachableOverRapport:(BOOL)arg1 ;
-(void)restartAccessory;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(void)setAccessoryItem:(HFItem *)arg1 ;
-(HFItem *)accessoryItem;
-(HMHome *)overrideHome;
-(void)setSupportedMultiUserLanguageCodes:(NSArray *)arg1 ;
-(NSArray *)supportedMultiUserLanguageCodes;
-(void)registerKVO;
-(void)unregisterKVO;
-(HFItem *)resetItem;
-(void)setNameModule:(HUNameItemModule *)arg1 ;
-(HUNameItemModule *)nameModule;
-(HFStaticItemProvider *)staticItemProvider;
-(HFItem*<HFServiceLikeItem>)sourceServiceItem;
-(HFItem *)audioSettingsItem;
-(HFItem *)favoriteItem;
-(void)setFavoriteItem:(HFItem *)arg1 ;
-(id)initWithServiceItem:(id)arg1 delegate:(id)arg2 ;
-(void)setHomeMediaAccount:(ACAccount *)arg1 ;
-(BOOL)shouldShowDeviceOptionsForAccessoryItem:(id)arg1 ;
-(BOOL)showAssociatedServiceTypeList;
-(HFItem *)selectedAssociatedServiceTypeItem;
-(HUAssociatedSceneAndTriggerModule *)sceneAndTriggerModule;
-(HUAccessorySettingsItemModule *)accessorySettingsItemModule;
-(HUSoftwareUpdateItemModule *)softwareUpdateItemModule;
-(HUValveItemModule *)valveEditorItemModule;
-(HUAccessoryServicesItemModule *)accessoryServicesEditorItemModule;
-(HUTelevisionSettingsItemModule *)televisionSettingsItemModule;
-(HUInputSourceItemModule *)inputSourceItemModule;
-(HUCameraRecordingSettingsModule *)cameraRecordingItemModule;
-(HFItem *)splitMediaAccountTitleItem;
-(HFItem *)splitMediaAccountUseDefaultAccountItem;
-(HFItem *)splitMediaAccountSignoutAccountItem;
-(HFItem *)restartItem;
-(BOOL)isCharacteristicStateItem:(id)arg1 ;
-(HFItem *)addGroupItem;
-(HFItem *)createNewRoomItem;
-(HFItem *)separateTileItem;
-(HFItem *)roomListItem;
-(HFItem *)cameraStatusLightItem;
-(HFItem *)cameraNightModeItem;
-(HFAccessoryInfoDetailsItemProvider *)accessoryInfoItemProvider;
-(NSArray *)orderedRoomSectionItems;
-(HMAccessory *)sourceItemAccessory;
-(HFItem *)showContainedItems;
-(HFItem *)statusAndNotificationItem;
-(HFItem *)internalDebuggingItem;
-(id<HFHomeKitObject>)sourceItemHomeKitObject;
-(BOOL)showRoomsList;
-(void)setShowRoomsList:(BOOL)arg1 ;
-(void)setShowAssociatedServiceTypeList:(BOOL)arg1 ;
-(HFItem *)associatedServiceTypeItem;
-(HFItem *)alarmItem;
-(id)selectAssociatedServiceType:(id)arg1 ;
-(void)updateCameraStatusLight:(BOOL)arg1 ;
-(void)updateCameraNightMode:(BOOL)arg1 ;
-(void)setShouldHideAccessoryItem:(BOOL)arg1 ;
-(void)setShouldHideSeparateTileItem:(BOOL)arg1 ;
-(HFItemProvider *)existingRoomItemProvider;
-(HFItemProvider *)suggestedRoomItemProvider;
-(BOOL)sourceItemIsHomePod;
-(BOOL)controlAndCharacteristicStateItemModule:(id)arg1 shouldShowControlPanelItem:(id)arg2 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg1 sectionTitleForControlPanelItem:(id)arg2 forServiceItem:(id)arg3 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg1 sectionFooterForControlPanelItem:(id)arg2 forServiceItem:(id)arg3 ;
-(BOOL)controlAndCharacteristicStateItemModule:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2 ;
-(id)controlAndCharacteristicStateItemModule:(id)arg1 childItemsForItem:(id)arg2 ;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)cameraRecordingSettingsModule:(id)arg1 didUpdateItem:(id)arg2 ;
-(void)setAccessorySettingsItemModule:(HUAccessorySettingsItemModule *)arg1 ;
-(BOOL)_isGroupedHomePod;
-(void)_setupDeviceOptionsAdapterUtilityForGroupedAccessories:(id)arg1 ;
-(void)_setupDeviceOptionsAdapterForMediaAccessoryItem:(id)arg1 ;
-(HFSelectedRoomItemProvider *)selectedRoomItemProvider;
-(HFAssociatedServiceTypeOptionItemProvider *)associatedServiceTypeOptionItemProvider;
-(HUServiceDetailsControlAndCharacteristicStateItemModule *)serviceDetailsControlStateAndCharacteristicItemModule;
-(BOOL)sourceItemIsService;
-(void)setProgrammableSwitchItemModule:(HUServiceDetailsProgrammableSwitchItemModule *)arg1 ;
-(void)setValveEditorItemModule:(HUValveItemModule *)arg1 ;
-(void)setInputSourceItemModule:(HUInputSourceItemModule *)arg1 ;
-(void)setTelevisionSettingsItemModule:(HUTelevisionSettingsItemModule *)arg1 ;
-(void)setCameraRecordingItemModule:(HUCameraRecordingSettingsModule *)arg1 ;
-(BOOL)_shouldShowAccessoryInfoItems;
-(void)setAccessoryInfoItemProvider:(HFAccessoryInfoDetailsItemProvider *)arg1 ;
-(void)setInternalDebuggingItem:(HFItem *)arg1 ;
-(ACAccount *)loggedInMediaAccountOnHomePod;
-(void)setSplitMediaAccountTitleItem:(HFItem *)arg1 ;
-(void)setSplitMediaAccountUseDefaultAccountItem:(HFItem *)arg1 ;
-(void)setSplitMediaAccountSignoutAccountItem:(HFItem *)arg1 ;
-(void)setCreateNewRoomItem:(HFItem *)arg1 ;
-(void)setRoomListItem:(HFItem *)arg1 ;
-(void)setShowContainedItems:(HFItem *)arg1 ;
-(void)setAddGroupItem:(HFItem *)arg1 ;
-(void)setAssociatedServiceTypeOptionItemProvider:(HFAssociatedServiceTypeOptionItemProvider *)arg1 ;
-(void)setSeparateTileItem:(HFItem *)arg1 ;
-(void)setSelectedRoomItemProvider:(HFSelectedRoomItemProvider *)arg1 ;
-(void)setExistingRoomItemProvider:(HFItemProvider *)arg1 ;
-(void)setSuggestedRoomItemProvider:(HFItemProvider *)arg1 ;
-(void)setRoomItem:(HFItem *)arg1 ;
-(void)setAssociatedServiceTypeItem:(HFItem *)arg1 ;
-(void)setResetItem:(HFItem *)arg1 ;
-(void)setRestartItem:(HFItem *)arg1 ;
-(void)setAudioSettingsItem:(HFItem *)arg1 ;
-(void)setAlarmItem:(HFItem *)arg1 ;
-(void)setStatusAndNotificationItem:(HFItem *)arg1 ;
-(void)setCameraStatusLightItem:(HFItem *)arg1 ;
-(void)setCameraNightModeItem:(HFItem *)arg1 ;
-(void)setServiceDetailsControlStateAndCharacteristicItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 ;
-(void)setSoftwareUpdateItemModule:(HUSoftwareUpdateItemModule *)arg1 ;
-(void)setLinkedApplicationItemProvider:(HULinkedApplicationItemProvider *)arg1 ;
-(HULinkedApplicationItemProvider *)linkedApplicationItemProvider;
-(void)setFirmwareUpdateItemProvider:(HUFirmwareUpdateItemProvider *)arg1 ;
-(HUFirmwareUpdateItemProvider *)firmwareUpdateItemProvider;
-(HUServiceDetailsProgrammableSwitchItemModule *)programmableSwitchItemModule;
-(HUAccessoryDebugModule *)debugAccessoryItemModule;
-(void)setCharacteristicSections:(NSArray *)arg1 ;
-(void)setProgrammableSwitchSections:(NSArray *)arg1 ;
-(void)setAccessorySettingsSections:(NSArray *)arg1 ;
-(void)setSplitMediaAccountSections:(NSArray *)arg1 ;
-(void)setNameAndIconSections:(NSArray *)arg1 ;
-(void)setSoftwareUpdateSections:(NSArray *)arg1 ;
-(void)setValveEditorSections:(NSArray *)arg1 ;
-(void)setSceneAndTriggerSections:(NSArray *)arg1 ;
-(void)setInputSourceEditorSections:(NSArray *)arg1 ;
-(void)setTelevisionSettingsSections:(NSArray *)arg1 ;
-(void)setCameraRecordingSettingSections:(NSArray *)arg1 ;
-(void)setCameraStatusLightSections:(NSArray *)arg1 ;
-(void)setCameraNightModeSections:(NSArray *)arg1 ;
-(BOOL)_shouldShowFirmwareUpdateSection;
-(NSArray *)softwareUpdateSections;
-(NSArray *)splitMediaAccountSections;
-(NSArray *)nameAndIconSections;
-(NSArray *)characteristicSections;
-(NSArray *)programmableSwitchSections;
-(NSArray *)valveEditorSections;
-(NSArray *)inputSourceEditorSections;
-(NSArray *)televisionSettingsSections;
-(NSArray *)cameraRecordingSettingSections;
-(NSArray *)cameraStatusLightSections;
-(NSArray *)cameraNightModeSections;
-(NSArray *)sceneAndTriggerSections;
-(BOOL)shouldHideAccessoryItem;
-(NSArray *)accessorySettingsSections;
-(BOOL)_shouldShowLinkedApplicationSection;
-(BOOL)groupedAccessoryReachableOverRapport;
-(HFAccessorySettingDeviceOptionsAdapter *)deviceOptionsAdapter;
-(id)hf_MediaAccessoryItem;
-(id)_characteristicSectionForIdentifier:(id)arg1 ;
-(id)_allItemsForSectionIdentifier:(id)arg1 ;
-(BOOL)shouldHideSeparateTileItem;
-(BOOL)_shouldShowSplitAccountUI;
-(id<HUServiceDetailsItemManagerDelegate>)serviceDetailsDelegate;
-(BOOL)_isRestartSupportedForGroupedHomePod:(id)arg1 ;
-(ACAccount *)homeMediaAccount;
-(void)setDeviceOptionsAdapter:(HFAccessorySettingDeviceOptionsAdapter *)arg1 ;
-(id)_restartAccessory;
-(HFAccessorySettingDeviceOptionsAdapterUtility *)deviceOptionsAdapterUtility;
-(void)setDeviceOptionsAdapterUtility:(HFAccessorySettingDeviceOptionsAdapterUtility *)arg1 ;
-(void)setGroupedAccessoryReachableOverRapport:(BOOL)arg1 ;
-(BOOL)_hasDismissedHomePodHasNonMemberMediaAccountWarning;
-(BOOL)sourceItemIsHomePodConfiguredForMultiUser;
-(BOOL)_areHomePodMediaAccountsMismatched;
-(BOOL)sourceItemIsSingleServiceAccessory;
-(BOOL)isRoomItem:(id)arg1 ;
-(BOOL)isAccessoryInfoItem:(id)arg1 ;
-(HFItem*<HFItemBuilderItem>)builderItem;
-(HFRemoteControlItemModule *)serviceDetailsRemoteControlItemModule;
-(HFItem *)selectedRoomItem;
-(void)setServiceDetailsDelegate:(id<HUServiceDetailsItemManagerDelegate>)arg1 ;
@end


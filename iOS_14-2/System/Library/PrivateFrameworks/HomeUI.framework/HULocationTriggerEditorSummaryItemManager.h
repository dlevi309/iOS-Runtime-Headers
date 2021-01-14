/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUPresenceUserPickerItemModuleDelegate.h>

@class HFLocationTriggerBuilder, HUPresenceUserPickerItemModule, HUTriggerConditionEditorItemModule, HFItem, NSString;

@interface HULocationTriggerEditorSummaryItemManager : HFItemManager <HUPresenceUserPickerItemModuleDelegate> {

	HFLocationTriggerBuilder* _triggerBuilder;
	HUPresenceUserPickerItemModule* _userPickerModule;
	HUTriggerConditionEditorItemModule* _conditionEditorModule;
	HFItem* _locationItem;
	HFItem* _usersInstructionsItem;

}

@property (nonatomic,retain) HFItem * usersInstructionsItem;                                            //@synthesize usersInstructionsItem=_usersInstructionsItem - In the implementation block
@property (nonatomic,retain) HFItem * locationItem;                                                     //@synthesize locationItem=_locationItem - In the implementation block
@property (nonatomic,readonly) HFLocationTriggerBuilder * triggerBuilder;                               //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) HUPresenceUserPickerItemModule * userPickerModule;                       //@synthesize userPickerModule=_userPickerModule - In the implementation block
@property (nonatomic,readonly) HUTriggerConditionEditorItemModule * conditionEditorModule;              //@synthesize conditionEditorModule=_conditionEditorModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)usersHeaderSectionID;
+(id)usersListSectionID;
+(id)usersListFooterSectionID;
+(id)locationSectionID;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFLocationTriggerBuilder *)triggerBuilder;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 triggerBuilder:(id)arg2 ;
-(HUTriggerConditionEditorItemModule *)conditionEditorModule;
-(HUPresenceUserPickerItemModule *)userPickerModule;
-(BOOL)isInstructionsItem:(id)arg1 ;
-(HFItem *)locationItem;
-(id)locationEventRegion;
-(BOOL)canAddRegionToTriggerBuilder;
-(void)updateLocationEventWithRegion:(id)arg1 ;
-(void)userPickerModule:(id)arg1 didUpdatePresenceEvent:(id)arg2 ;
-(id)_userPickerOptions;
-(HFItem *)usersInstructionsItem;
-(BOOL)_canEditLocation;
-(BOOL)_hasCustomLocation;
-(void)setUsersInstructionsItem:(HFItem *)arg1 ;
-(void)setLocationItem:(HFItem *)arg1 ;
-(BOOL)canChangeLocation;
@end


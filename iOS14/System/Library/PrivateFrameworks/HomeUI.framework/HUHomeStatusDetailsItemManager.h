/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HFResidentDeviceStatusDetailsItemProvider, HUFirmwareUpdateItemProvider, HUSoftwareUpdateInfoItemProvider, HFNoRemoteAccessStatusDetailsItem, HUSoftwareUpdateActionAndProgressItem, NSMutableSet, NSArray, NSMutableDictionary;

@interface HUHomeStatusDetailsItemManager : HFItemManager {

	HFStaticItem* _learnMoreItem;
	HFResidentDeviceStatusDetailsItemProvider* _residentDeviceStatusItemProvider;
	HUFirmwareUpdateItemProvider* _firmwareUpdateItemProvider;
	HUSoftwareUpdateInfoItemProvider* _softwareUpdateItemProvider;
	HFNoRemoteAccessStatusDetailsItem* _noRemoteAccessItem;
	HUSoftwareUpdateActionAndProgressItem* _softwareUpdateActionAndProgressItem;
	NSMutableSet* _representedHomeKitObjects;
	NSArray* _cachedSectionIdentifiers;
	NSMutableDictionary* _cachedRoomNamesByIdentifier;
	NSMutableSet* _minimumPriorityItemTuples;

}

@property (nonatomic,retain) HFResidentDeviceStatusDetailsItemProvider * residentDeviceStatusItemProvider;              //@synthesize residentDeviceStatusItemProvider=_residentDeviceStatusItemProvider - In the implementation block
@property (nonatomic,retain) HUFirmwareUpdateItemProvider * firmwareUpdateItemProvider;                                 //@synthesize firmwareUpdateItemProvider=_firmwareUpdateItemProvider - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateInfoItemProvider * softwareUpdateItemProvider;                             //@synthesize softwareUpdateItemProvider=_softwareUpdateItemProvider - In the implementation block
@property (nonatomic,retain) HFNoRemoteAccessStatusDetailsItem * noRemoteAccessItem;                                    //@synthesize noRemoteAccessItem=_noRemoteAccessItem - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateActionAndProgressItem * softwareUpdateActionAndProgressItem;               //@synthesize softwareUpdateActionAndProgressItem=_softwareUpdateActionAndProgressItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * representedHomeKitObjects;                                                  //@synthesize representedHomeKitObjects=_representedHomeKitObjects - In the implementation block
@property (nonatomic,retain) NSArray * cachedSectionIdentifiers;                                                        //@synthesize cachedSectionIdentifiers=_cachedSectionIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedRoomNamesByIdentifier;                                         //@synthesize cachedRoomNamesByIdentifier=_cachedRoomNamesByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * minimumPriorityItemTuples;                                                  //@synthesize minimumPriorityItemTuples=_minimumPriorityItemTuples - In the implementation block
@property (nonatomic,retain) HFStaticItem * learnMoreItem;                                                              //@synthesize learnMoreItem=_learnMoreItem - In the implementation block
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(/*^block*/id)_sectionComparator;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)matchingItemForHomeKitObject:(id)arg1 ;
-(unsigned long long)_numberOfSections;
-(void)_willUpdateSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setLearnMoreItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)learnMoreItem;
-(id)_roomForItem:(id)arg1 ;
-(void)resetItemPrioritiesToDefaults;
-(BOOL)shouldUseTitleDescriptionStyleForItem:(id)arg1 ;
-(BOOL)shouldShowRoomNameForItem:(id)arg1 ;
-(void)maintainMinimumPriorityForItem:(id)arg1 ;
-(HFResidentDeviceStatusDetailsItemProvider *)residentDeviceStatusItemProvider;
-(HFNoRemoteAccessStatusDetailsItem *)noRemoteAccessItem;
-(NSMutableDictionary *)cachedRoomNamesByIdentifier;
-(NSMutableSet *)minimumPriorityItemTuples;
-(void)setMinimumPriorityItemTuples:(NSMutableSet *)arg1 ;
-(long long)_effectivePriorityForItem:(id)arg1 ;
-(void)setResidentDeviceStatusItemProvider:(HFResidentDeviceStatusDetailsItemProvider *)arg1 ;
-(void)setFirmwareUpdateItemProvider:(HUFirmwareUpdateItemProvider *)arg1 ;
-(void)setSoftwareUpdateItemProvider:(HUSoftwareUpdateInfoItemProvider *)arg1 ;
-(void)setNoRemoteAccessItem:(HFNoRemoteAccessStatusDetailsItem *)arg1 ;
-(void)setSoftwareUpdateActionAndProgressItem:(HUSoftwareUpdateActionAndProgressItem *)arg1 ;
-(HUSoftwareUpdateActionAndProgressItem *)softwareUpdateActionAndProgressItem;
-(id)statusItem;
-(BOOL)shouldReloadItemProvidersOnSourceItemChange;
-(BOOL)_shouldHideHomeKitObject:(id)arg1 ;
-(HUFirmwareUpdateItemProvider *)firmwareUpdateItemProvider;
-(HUSoftwareUpdateInfoItemProvider *)softwareUpdateItemProvider;
-(BOOL)isResidentDeviceStatusItem;
-(BOOL)isNoResponseStatusItem;
-(NSArray *)cachedSectionIdentifiers;
-(BOOL)isLowBatteryStatusItem;
-(BOOL)_shouldUseSeparateSectionForItem:(id)arg1 ;
-(BOOL)isDisplayingRoomLevelStatus;
-(id)_separateSectionIdentifierForItem:(id)arg1 ;
-(BOOL)_shouldUseSoftwareUpdateSectionForItem:(id)arg1 ;
-(BOOL)_shouldUseLowBatterySectionForItem:(id)arg1 ;
-(BOOL)shouldHideItem:(id)arg1 ;
-(NSMutableSet *)representedHomeKitObjects;
-(void)setRepresentedHomeKitObjects:(NSMutableSet *)arg1 ;
-(void)setCachedRoomNamesByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setCachedSectionIdentifiers:(NSArray *)arg1 ;
-(BOOL)isFirmwareUpdateStatusItem;
-(BOOL)shouldShowAccessoryTiles;
-(BOOL)shouldShowServiceGroupTiles;
-(id)_minimumPriorityNumberForItem:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMAccessory, NSDictionary;

@interface HUNearbyAccessoriesItemManager : HFItemManager {

	BOOL _supportsQuickControls;
	HMAccessory* _primaryAccessory;
	NSDictionary* _customNearbyAccessories;

}

@property (nonatomic,retain) HMAccessory * primaryAccessory;                      //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (assign,nonatomic) BOOL supportsQuickControls;                          //@synthesize supportsQuickControls=_supportsQuickControls - In the implementation block
@property (nonatomic,retain) NSDictionary * customNearbyAccessories;              //@synthesize customNearbyAccessories=_customNearbyAccessories - In the implementation block
+(id)itemProvidersForPrimaryAccessory:(id)arg1 inHome:(id)arg2 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(unsigned long long)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HMAccessory *)primaryAccessory;
-(void)setPrimaryAccessory:(HMAccessory *)arg1 ;
-(BOOL)shouldHideItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceProfileItem:(id)arg2 supportsQuickControls:(BOOL)arg3 ;
-(BOOL)supportsQuickControls;
-(void)setSupportsQuickControls:(BOOL)arg1 ;
-(BOOL)_isServiceItemAssociatedWithPrimaryAccessory:(id)arg1 ;
-(BOOL)_isAPreferredServiceType:(id)arg1 ;
-(id)userFilteredIdentifiers;
-(void)setCustomNearbyAccessories:(NSDictionary *)arg1 ;
-(NSDictionary *)customNearbyAccessories;
-(BOOL)hasCustomNearbyAccessories;
-(BOOL)hasEmptyNearbyAccessories;
@end


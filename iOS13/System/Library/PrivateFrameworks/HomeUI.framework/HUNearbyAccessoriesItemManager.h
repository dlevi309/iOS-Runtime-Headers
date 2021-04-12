/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMAccessory;

@interface HUNearbyAccessoriesItemManager : HFItemManager {

	BOOL _supportsQuickControls;
	HMAccessory* _primaryAccessory;

}

@property (nonatomic,retain) HMAccessory * primaryAccessory;              //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (assign,nonatomic) BOOL supportsQuickControls;                  //@synthesize supportsQuickControls=_supportsQuickControls - In the implementation block
-(unsigned long long)_numberOfSections;
-(HMAccessory *)primaryAccessory;
-(void)setPrimaryAccessory:(HMAccessory *)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceProfileItem:(id)arg2 supportsQuickControls:(BOOL)arg3 ;
-(BOOL)supportsQuickControls;
-(void)setSupportsQuickControls:(BOOL)arg1 ;
-(BOOL)_isServiceItemAssociatedWithPrimaryAccessory:(id)arg1 ;
-(BOOL)_isAPreferredServiceType:(id)arg1 ;
-(BOOL)shouldHideItem:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMHome, HFBridgeItemProvider, HFResidentDeviceItemProvider;

@interface HUBridgeAndResidentDeviceListItemManager : HFItemManager {

	HMHome* _overrideHome;
	HFBridgeItemProvider* _bridgeItemProvider;
	HFResidentDeviceItemProvider* _residentDeviceItemProvider;

}

@property (nonatomic,readonly) HMHome * overrideHome;                                                //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HFBridgeItemProvider * bridgeItemProvider;                              //@synthesize bridgeItemProvider=_bridgeItemProvider - In the implementation block
@property (nonatomic,retain) HFResidentDeviceItemProvider * residentDeviceItemProvider;              //@synthesize residentDeviceItemProvider=_residentDeviceItemProvider - In the implementation block
+(/*^block*/id)residentDeviceItemComparator;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(HMHome *)overrideHome;
-(id)_itemsToHideInSet:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 ;
-(id)bridgeItemForAccessory:(id)arg1 ;
-(BOOL)isBridgeItem:(id)arg1 ;
-(BOOL)isResidentDeviceItem:(id)arg1 ;
-(HFBridgeItemProvider *)bridgeItemProvider;
-(HFResidentDeviceItemProvider *)residentDeviceItemProvider;
-(void)setResidentDeviceItemProvider:(HFResidentDeviceItemProvider *)arg1 ;
-(void)setBridgeItemProvider:(HFBridgeItemProvider *)arg1 ;
@end


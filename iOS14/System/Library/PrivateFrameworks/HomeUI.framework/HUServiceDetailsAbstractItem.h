/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>

@protocol HFServiceLikeItem;
@class HFItem, HMHome;

@interface HUServiceDetailsAbstractItem : HFItem {

	HFItem*<HFServiceLikeItem> _sourceServiceItem;
	HMHome* _home;

}

@property (nonatomic,retain) HFItem*<HFServiceLikeItem> sourceServiceItem;              //@synthesize sourceServiceItem=_sourceServiceItem - In the implementation block
@property (nonatomic,retain) HMHome * home;                                             //@synthesize home=_home - In the implementation block
-(BOOL)isBridge;
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(BOOL)isCamera;
-(BOOL)isService;
-(BOOL)isAccessory;
-(void)setHome:(HMHome *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(HFItem*<HFServiceLikeItem>)sourceServiceItem;
-(id)sourceAccessory;
-(BOOL)isVisibleAsBridge;
-(BOOL)canShowAsIndividualTiles;
-(BOOL)isSensorService;
-(BOOL)isMediaAccessory;
-(BOOL)isContainedInAParent;
-(BOOL)isNetworkRouterSatellite;
-(id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 ;
-(BOOL)isMultiServiceAccessory;
-(BOOL)isNotificationSupportedCamera;
-(void)setSourceServiceItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(BOOL)isMediaAccessoryGroup;
-(BOOL)isAccessoryDisplayedAsIndividualTiles;
-(BOOL)isNetworkRouter;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(BOOL)isBridge;
-(void)setHome:(HMHome *)arg1 ;
-(BOOL)isCamera;
-(BOOL)isAccessory;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(BOOL)isService;
-(HFItem*<HFServiceLikeItem>)sourceServiceItem;
-(BOOL)isContainedInAParent;
-(BOOL)isNetworkRouterSatellite;
-(id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 ;
-(BOOL)isMultiServiceAccessory;
-(BOOL)isNotificationSupportedCamera;
-(void)setSourceServiceItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(BOOL)isMediaAccessory;
-(BOOL)isMediaAccessoryGroup;
-(BOOL)isAccessoryDisplayedAsIndividualTiles;
-(BOOL)isNetworkRouter;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@protocol HFServiceLikeItem;
@class HFItem;

@interface HUAccessorySceneListItemManager : HFItemManager {

	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	HFItem* _existingScenesContentItem;
	HFItem* _suggestedScenesContentItem;

}

@property (nonatomic,copy,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (nonatomic,readonly) HFItem * existingScenesContentItem;                           //@synthesize existingScenesContentItem=_existingScenesContentItem - In the implementation block
@property (nonatomic,readonly) HFItem * suggestedScenesContentItem;                          //@synthesize suggestedScenesContentItem=_suggestedScenesContentItem - In the implementation block
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 serviceLikeItem:(id)arg2 ;
-(HFItem *)existingScenesContentItem;
-(HFItem *)suggestedScenesContentItem;
@end


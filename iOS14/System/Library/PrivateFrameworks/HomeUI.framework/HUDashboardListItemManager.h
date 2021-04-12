/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItemProvider, HFRoomItemProvider;

@interface HUDashboardListItemManager : HFItemManager {

	HFItem* _favoritesItem;
	HFStaticItemProvider* _favoritesItemProvider;
	HFRoomItemProvider* _roomItemProvider;

}

@property (nonatomic,retain) HFStaticItemProvider * favoritesItemProvider;              //@synthesize favoritesItemProvider=_favoritesItemProvider - In the implementation block
@property (nonatomic,retain) HFRoomItemProvider * roomItemProvider;                     //@synthesize roomItemProvider=_roomItemProvider - In the implementation block
@property (nonatomic,retain) HFItem * favoritesItem;                                    //@synthesize favoritesItem=_favoritesItem - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFItem *)favoritesItem;
-(void)setFavoritesItem:(HFItem *)arg1 ;
-(void)setFavoritesItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setRoomItemProvider:(HFRoomItemProvider *)arg1 ;
-(HFStaticItemProvider *)favoritesItemProvider;
-(HFRoomItemProvider *)roomItemProvider;
@end


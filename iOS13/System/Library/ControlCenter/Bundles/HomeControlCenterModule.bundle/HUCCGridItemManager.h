/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <Home/HFItemManager.h>

@protocol HUCCFavoriteItemProvider;
@class HFItemProvider;

@interface HUCCGridItemManager : HFItemManager {

	unsigned long long _maximumNumberOfItems;
	unsigned long long _itemType;
	HFItemProvider*<HUCCFavoriteItemProvider> _favoriteItemProvider;

}

@property (nonatomic,retain) HFItemProvider*<HUCCFavoriteItemProvider> favoriteItemProvider;              //@synthesize favoriteItemProvider=_favoriteItemProvider - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItems;                                     //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType;                                               //@synthesize itemType=_itemType - In the implementation block
-(unsigned long long)itemType;
-(unsigned long long)maximumNumberOfItems;
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_itemForSorting;
-(HFItemProvider*<HUCCFavoriteItemProvider>)favoriteItemProvider;
-(void)setFavoriteItemProvider:(HFItemProvider*<HUCCFavoriteItemProvider>)arg1 ;
-(id)initWithDelegate:(id)arg1 itemType:(unsigned long long)arg2 ;
-(void)reloadForMaximumNumberOfItemsChange;
@end


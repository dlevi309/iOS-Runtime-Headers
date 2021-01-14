/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(unsigned long long)itemType;
-(id)_itemForSorting;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(unsigned long long)maximumNumberOfItems;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFItemProvider*<HUCCFavoriteItemProvider>)favoriteItemProvider;
-(void)setFavoriteItemProvider:(HFItemProvider*<HUCCFavoriteItemProvider>)arg1 ;
-(id)initWithDelegate:(id)arg1 itemType:(unsigned long long)arg2 ;
-(void)reloadForMaximumNumberOfItemsChange;
@end


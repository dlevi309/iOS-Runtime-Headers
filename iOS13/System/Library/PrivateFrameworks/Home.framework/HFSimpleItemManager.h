/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemManager.h>

@interface HFSimpleItemManager : HFItemManager {

	/*^block*/id _homeCreator;
	/*^block*/id _itemModuleCreator;
	/*^block*/id _itemProviderCreator;
	/*^block*/id _itemComparator;

}

@property (nonatomic,copy) id homeCreator;                      //@synthesize homeCreator=_homeCreator - In the implementation block
@property (nonatomic,copy) id itemModuleCreator;                //@synthesize itemModuleCreator=_itemModuleCreator - In the implementation block
@property (nonatomic,copy) id itemProviderCreator;              //@synthesize itemProviderCreator=_itemProviderCreator - In the implementation block
@property (nonatomic,copy) id itemComparator;                   //@synthesize itemComparator=_itemComparator - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 itemProvidersCreator:(/*^block*/id)arg3 ;
-(id)itemModuleCreator;
-(id)itemProviderCreator;
-(id)itemComparator;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)homeCreator;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg1 itemProvidersCreator:(/*^block*/id)arg2 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(void)setHomeCreator:(id)arg1 ;
-(void)setItemModuleCreator:(id)arg1 ;
-(void)setItemProviderCreator:(id)arg1 ;
-(void)setItemComparator:(id)arg1 ;
@end


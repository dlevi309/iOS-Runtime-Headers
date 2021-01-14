/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUQuickControlCollectionItemManaging.h>

@protocol NSCopying;
@class HFItemProvider, HFItem, NSString;

@interface HUQuickControlCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging> {

	HFItemProvider* _gridItemProvider;
	HFItem*<NSCopying> _supplementaryItem;
	/*^block*/id _gridItemProviderCreator;
	/*^block*/id _supplementaryItemProviderCreator;
	HFItemProvider* _supplementaryItemProvider;

}

@property (nonatomic,copy,readonly) id gridItemProviderCreator;                        //@synthesize gridItemProviderCreator=_gridItemProviderCreator - In the implementation block
@property (nonatomic,copy,readonly) id supplementaryItemProviderCreator;               //@synthesize supplementaryItemProviderCreator=_supplementaryItemProviderCreator - In the implementation block
@property (nonatomic,retain) HFItemProvider * gridItemProvider;                        //@synthesize gridItemProvider=_gridItemProvider - In the implementation block
@property (nonatomic,retain) HFItemProvider * supplementaryItemProvider;               //@synthesize supplementaryItemProvider=_supplementaryItemProvider - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<NSCopying> supplementaryItem;              //@synthesize supplementaryItem=_supplementaryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFItem*<NSCopying>)supplementaryItem;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 gridItemProviderCreator:(/*^block*/id)arg2 supplementaryItemProviderCreator:(/*^block*/id)arg3 ;
-(HFItemProvider *)gridItemProvider;
-(HFItemProvider *)supplementaryItemProvider;
-(id)gridItemProviderCreator;
-(void)setGridItemProvider:(HFItemProvider *)arg1 ;
-(id)supplementaryItemProviderCreator;
-(void)setSupplementaryItemProvider:(HFItemProvider *)arg1 ;
-(BOOL)isGridItem:(id)arg1 ;
@end


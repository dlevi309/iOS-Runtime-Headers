/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIViewElementLayoutContext, SKUIBrowseItemComponent;

@interface SKUIBrowseItemPageSection : SKUIStorePageSection {

	SKUIViewElementLayoutContext* _layoutContext;
	SKUIBrowseItemComponent* _component;

}

@property (nonatomic,readonly) SKUIBrowseItemComponent * pageComponent;              //@synthesize component=_component - In the implementation block
-(long long)numberOfCells;
-(UIEdgeInsets)sectionContentInset;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(SKUIBrowseItemComponent *)pageComponent;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(id)_imageForImageViewElement:(id)arg1 styleColor:(id)arg2 ;
@end


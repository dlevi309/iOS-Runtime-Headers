/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIColorScheme, SKUIEditorialLayout, SKUIViewElementLayoutContext, SKUIEditorialComponent;

@interface SKUIEditorialPageSection : SKUIStorePageSection {

	SKUIColorScheme* _colorScheme;
	SKUIEditorialLayout* _editorialLayout;
	BOOL _hasValidColorScheme;
	BOOL _isExpanded;
	SKUIViewElementLayoutContext* _layoutContext;

}

@property (nonatomic,readonly) SKUIEditorialComponent * pageComponent; 
-(long long)numberOfCells;
-(id)_colorScheme;
-(id)initWithPageComponent:(id)arg1 ;
-(long long)applyUpdateType:(long long)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_editorialLayout;
@end


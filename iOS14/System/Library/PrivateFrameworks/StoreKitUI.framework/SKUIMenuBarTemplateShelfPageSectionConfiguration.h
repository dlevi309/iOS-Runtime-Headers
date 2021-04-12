/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIShelfPageSectionConfiguration.h>

@interface SKUIMenuBarTemplateShelfPageSectionConfiguration : SKUIShelfPageSectionConfiguration {

	id _fixedElementsCollectionViewCell;
	unsigned long long _numberOfIterations;
	long long _focusedIndex;

}
-(id)init;
-(unsigned long long)numberOfIterations;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2 ;
-(CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(long long)numberOfSectionCells;
-(void)registerReusableClassesForCollectionView:(id)arg1 ;
-(void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(BOOL)arg3 numberOfShelfItems:(long long)arg4 ;
-(id)effectiveViewElementForShelfItemViewElement:(id)arg1 ;
-(id)initWithNumberOfIterations:(unsigned long long)arg1 ;
-(id)_focusedViewElement;
@end


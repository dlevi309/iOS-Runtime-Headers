/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)scrollViewDidScroll:(id)arg1 ;
-(unsigned long long)numberOfIterations;
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


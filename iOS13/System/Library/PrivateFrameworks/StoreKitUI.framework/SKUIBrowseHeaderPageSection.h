/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIBrowseHeaderPageComponent;

@interface SKUIBrowseHeaderPageSection : SKUIStorePageSection

@property (nonatomic,readonly) SKUIBrowseHeaderPageComponent * pageComponent; 
-(id)initWithPageComponent:(id)arg1 ;
-(UIEdgeInsets)sectionContentInset;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1 ;
@end


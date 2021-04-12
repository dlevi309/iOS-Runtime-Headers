/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIBrowseHeaderPageComponent;

@interface SKUIBrowseHeaderPageSection : SKUIStorePageSection

@property (nonatomic,readonly) SKUIBrowseHeaderPageComponent * pageComponent; 
-(long long)numberOfCells;
-(UIEdgeInsets)sectionContentInset;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1 ;
@end


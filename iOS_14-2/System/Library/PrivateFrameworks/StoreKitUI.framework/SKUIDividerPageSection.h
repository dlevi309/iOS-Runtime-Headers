/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIViewElementLayoutContext, SKUIDividerPageComponent, NSString;

@interface SKUIDividerPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _layoutContext;

}

@property (nonatomic,readonly) SKUIDividerPageComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfCells;
-(UIEdgeInsets)sectionContentInset;
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_enumerateVisibleCellsUsingBlock:(/*^block*/id)arg1 ;
-(void)_requestCellLayout;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>
#import <libobjc.A.dylib/SKUISwooshViewControllerDelegate.h>

@class SKUIBrickSwooshArtworkLoader, SKUIMissingItemLoader, SKUIBrickSwooshViewController, SKUISwooshPageComponent, NSString;

@interface SKUIBrickSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {

	SKUIBrickSwooshArtworkLoader* _artworkLoader;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIBrickSwooshViewController* _swooshViewController;

}

@property (nonatomic,readonly) SKUISwooshPageComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfCells;
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(id)_swooshViewController;
-(id)_artworkLoader;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2 ;
@end


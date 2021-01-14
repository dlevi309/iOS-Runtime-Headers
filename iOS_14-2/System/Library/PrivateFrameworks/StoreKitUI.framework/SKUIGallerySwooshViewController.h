/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <libobjc.A.dylib/SKUIEmbeddedMediaViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UICollectionView, SKUISwooshPageComponent, SKUISwooshView, NSString;

@interface SKUIGallerySwooshViewController : SKUISwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	BOOL _delegateWantsWillDisplay;
	SKUISwooshPageComponent* _gallerySwoosh;
	double _itemHeight;
	SKUISwooshView* _swooshView;

}

@property (nonatomic,readonly) SKUISwooshPageComponent * gallerySwoosh;                                //@synthesize gallerySwoosh=_gallerySwoosh - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIGallerySwooshViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<SKUIGallerySwooshViewControllerDelegate>)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)indexPathsForVisibleItems;
-(void)loadView;
-(void)setColorScheme:(id)arg1 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2 ;
-(id)_newViewWithMediaComponent:(id)arg1 ;
-(id)artworkForItemAtIndex:(long long)arg1 ;
-(void)performActionForItemAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithGallerySwoosh:(id)arg1 ;
-(SKUISwooshPageComponent *)gallerySwoosh;
@end

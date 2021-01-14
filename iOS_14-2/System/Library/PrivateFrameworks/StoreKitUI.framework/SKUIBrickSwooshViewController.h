/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSArray, UICollectionView, NSMutableIndexSet, NSString, SKUISwooshView;

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _bricks;
	UICollectionView* _collectionView;
	BOOL _delegateWantsWillDisplay;
	NSMutableIndexSet* _hiddenImageIndexSet;
	SCD_Struct_SK16 _metrics;
	BOOL _showBrickTitles;
	NSString* _swooshTitle;
	SKUISwooshView* _swooshView;

}

@property (nonatomic,copy) NSArray * bricks;                        //@synthesize bricks=_bricks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(NSArray *)bricks;
-(void)setDelegate:(id)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(id)indexPathsForVisibleItems;
-(void)loadView;
-(void)deselectAllItems;
-(void)dealloc;
-(void)setColorScheme:(id)arg1 ;
-(void)setBricks:(NSArray *)arg1 ;
-(id)initWithSwoosh:(id)arg1 ;
-(SCD_Struct_SK16)_brickSwooshMetrics;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
@end


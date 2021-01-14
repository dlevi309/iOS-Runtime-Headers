/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PUSharingStackCollectionViewLayoutDelegate.h>

@protocol PUSharingStackCollectionViewControllerDataSource, PXUIImageProvider;
@class PUSharingStackCollectionViewLayout, NSMutableDictionary, NSArray, NSString;

@interface PUSharingStackCollectionViewController : UICollectionViewController <PUSharingStackCollectionViewLayoutDelegate> {

	BOOL _needsUpdate;
	id<PUSharingStackCollectionViewControllerDataSource> _dataSource;
	PUSharingStackCollectionViewLayout* _stackLayout;
	id<PXUIImageProvider> _imageProvider;
	NSMutableDictionary* _layoutItemsByAssets;
	long long _currentRotationDirection;
	long long _currentVerticalAdjustmentDirection;
	unsigned long long _numberOfItems;
	NSArray* _assets;

}

@property (nonatomic,readonly) PUSharingStackCollectionViewLayout * stackLayout;                                  //@synthesize stackLayout=_stackLayout - In the implementation block
@property (nonatomic,retain) id<PXUIImageProvider> imageProvider;                                                 //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * layoutItemsByAssets;                                           //@synthesize layoutItemsByAssets=_layoutItemsByAssets - In the implementation block
@property (assign,nonatomic) long long currentRotationDirection;                                                  //@synthesize currentRotationDirection=_currentRotationDirection - In the implementation block
@property (assign,nonatomic) long long currentVerticalAdjustmentDirection;                                        //@synthesize currentVerticalAdjustmentDirection=_currentVerticalAdjustmentDirection - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItems;                                                    //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                                    //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                                    //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic,__weak) id<PUSharingStackCollectionViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)assets;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(unsigned long long)numberOfItems;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithImageProvider:(id)arg1 ;
-(void)invalidateContent;
-(CGSize)_sizeForAsset:(id)arg1 ;
-(id)_layoutItemInputForAsset:(id)arg1 atIndex:(long long)arg2 ;
-(NSMutableDictionary *)layoutItemsByAssets;
-(void)setLayoutItemsByAssets:(NSMutableDictionary *)arg1 ;
-(long long)currentRotationDirection;
-(void)setCurrentRotationDirection:(long long)arg1 ;
-(long long)currentVerticalAdjustmentDirection;
-(void)setCurrentVerticalAdjustmentDirection:(long long)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<PUSharingStackCollectionViewControllerDataSource>)dataSource;
-(void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)setDataSource:(id<PUSharingStackCollectionViewControllerDataSource>)arg1 ;
-(void)setImageProvider:(id<PXUIImageProvider>)arg1 ;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(id)sharingStackCollectionViewLayout:(id)arg1 layoutItemForItemAtIndexPath:(id)arg2 ;
-(void)setNumberOfItems:(unsigned long long)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PXUIImageProvider>)imageProvider;
-(PUSharingStackCollectionViewLayout *)stackLayout;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end


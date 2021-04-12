/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/ICDocCamThumbnailViewLayoutDelegate.h>

@protocol ICDocCamThumbnailViewDelegate;
@class NSMutableArray, ICDocCamImageCache, ICDocCamThumbnailCollectionViewLayout, NSString;

@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate> {

	BOOL _isPerformingBatchUpdates;
	BOOL _needReloadAfterBatchUpdates;
	NSMutableArray* _documentInfoArray;
	ICDocCamImageCache* _imageCache;
	id<ICDocCamThumbnailViewDelegate> _delegate;
	ICDocCamThumbnailCollectionViewLayout* _layout;

}

@property (assign,nonatomic,__weak) id<ICDocCamThumbnailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ICDocCamThumbnailCollectionViewLayout * layout;                 //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL isPerformingBatchUpdates;                                  //@synthesize isPerformingBatchUpdates=_isPerformingBatchUpdates - In the implementation block
@property (assign,nonatomic) BOOL needReloadAfterBatchUpdates;                               //@synthesize needReloadAfterBatchUpdates=_needReloadAfterBatchUpdates - In the implementation block
@property (nonatomic,retain) NSMutableArray * documentInfoArray;                             //@synthesize documentInfoArray=_documentInfoArray - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                                //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ICDocCamThumbnailViewDelegate>)delegate;
-(void)setDelegate:(id<ICDocCamThumbnailViewDelegate>)arg1 ;
-(void)update;
-(id)initWithDelegate:(id)arg1 ;
-(ICDocCamThumbnailCollectionViewLayout *)layout;
-(void)setLayout:(ICDocCamThumbnailCollectionViewLayout *)arg1 ;
-(ICDocCamImageCache *)imageCache;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(id)rootView;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(CGSize)collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2 ;
-(CGRect)targetViewRect;
-(void)setDocumentInfoArray:(NSMutableArray *)arg1 ;
-(void)animateLayoutChange;
-(void)addNewDocument:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)documentInfoArray;
-(BOOL)isPerformingBatchUpdates;
-(void)setImageWithUUID:(id)arg1 forCell:(id)arg2 useResizedImage:(BOOL)arg3 ;
-(void)reloadDataForCollectionView;
-(void)setNeedReloadAfterBatchUpdates:(BOOL)arg1 ;
-(void)setIsPerformingBatchUpdates:(BOOL)arg1 ;
-(BOOL)needReloadAfterBatchUpdates;
@end


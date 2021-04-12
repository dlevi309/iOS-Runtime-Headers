/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol MiroAssetSuggestionsCollectionViewControllerDelegate;
@class NSMutableArray, UICollectionView, NSString, NSArray, UIBarButtonItem;

@interface MiroAssetSuggestionsCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	BOOL _showDebugInterfaces;
	NSMutableArray* _allAssets;
	UICollectionView* _collectionView;
	NSString* _memoryLocalizedTitle;
	NSArray* _assets;
	id<MiroAssetSuggestionsCollectionViewControllerDelegate> _delegate;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _showAllButton;

}

@property (nonatomic,readonly) NSMutableArray * allAssets;                                                          //@synthesize allAssets=_allAssets - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * showAllButton;                                                       //@synthesize showAllButton=_showAllButton - In the implementation block
@property (assign,nonatomic) BOOL showDebugInterfaces;                                                              //@synthesize showDebugInterfaces=_showDebugInterfaces - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy) NSString * memoryLocalizedTitle;                                                         //@synthesize memoryLocalizedTitle=_memoryLocalizedTitle - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                                      //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) id<MiroAssetSuggestionsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_indexOAssetWithCreationDate:(id)arg1 inChronologicallySortedAssets:(id)arg2 insertionIndex:(unsigned long long*)arg3 ;
-(UIBarButtonItem *)doneButton;
-(NSArray *)assets;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<MiroAssetSuggestionsCollectionViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)cancel:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)done:(id)arg1 ;
-(UIBarButtonItem *)showAllButton;
-(void)setShowAllButton:(UIBarButtonItem *)arg1 ;
-(void)setDelegate:(id<MiroAssetSuggestionsCollectionViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setAssets:(NSArray *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_selectedAssets;
-(NSMutableArray *)allAssets;
-(id)_assetAtIndex:(unsigned long long)arg1 ;
-(void)setShowDebugInterfaces:(BOOL)arg1 ;
-(void)showAll:(id)arg1 ;
-(BOOL)assetsArePhotosOnly;
-(BOOL)showDebugInterfaces;
-(long long)_indexOfAssetID:(id)arg1 ;
-(NSString *)memoryLocalizedTitle;
-(void)_updateDebugLabelsOnCell:(id)arg1 withAsset:(id)arg2 ;
-(void)_workaround_24890628_setupSplitScreenWidthConstraint:(id)arg1 ;
-(void)_setupPopoverPresentationIfNecessary:(id)arg1 fromView:(id)arg2 ;
-(void)selectCellsWithAssetIDs:(id)arg1 ;
-(void)setMemoryLocalizedTitle:(NSString *)arg1 ;
@end

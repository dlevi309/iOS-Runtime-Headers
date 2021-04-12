/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIItemCollectionDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SKUIItemGridDelegate;
@class UICollectionView, NSMutableIndexSet, SKUIItemCollectionController, UIImage, NSMutableArray, SKUIClientContext, NSOperationQueue, SKUIUber, SKUIStyledImageDataConsumer, SKUIItemArtworkContext, NSArray, NSString;

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	NSMutableIndexSet* _hiddenIconIndexSet;
	SKUIItemCollectionController* _itemCollectionController;
	UIImage* _placeholderImage;
	NSMutableIndexSet* _selectedItemIndexSet;
	NSMutableArray* _items;
	double _rowHeight;
	SKUIClientContext* _clientContext;
	id<SKUIItemGridDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	SKUIUber* _uber;
	CGSize _imageBoundingSize;

}

@property (nonatomic,readonly) double rowHeight;                                          //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic,__weak) id<SKUIItemGridDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * iconDataConsumer; 
@property (nonatomic,retain) SKUIItemArtworkContext * artworkContext; 
@property (assign,nonatomic) CGSize imageBoundingSize;                                    //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
@property (nonatomic,copy) NSArray * items;                                               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                             //@synthesize uber=_uber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUIItemGridDelegate>)delegate;
-(void)setDelegate:(id<SKUIItemGridDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)loadView;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)_collectionViewLayout;
-(CGPoint)contentOffset;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)_collectionView;
-(double)rowHeight;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(SKUIItemArtworkContext *)artworkContext;
-(void)setUber:(SKUIUber *)arg1 ;
-(SKUIUber *)uber;
-(void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2 ;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(CGSize)imageBoundingSize;
-(void)_reloadLayout;
-(SKUIStyledImageDataConsumer *)iconDataConsumer;
-(id)_itemCollectionController;
-(void)loadNextPageOfArtworkWithReason:(long long)arg1 ;
-(void)setArtworkContext:(SKUIItemArtworkContext *)arg1 ;
-(void)setIconDataConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2 ;
-(NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2 ;
-(NSRange)visibleItemRangeForItemCollectionController:(id)arg1 ;
-(id)initWithRowHeight:(double)arg1 ;
-(id)popIconImageViewForItemAtIndex:(long long)arg1 ;
-(void)setItemCellClass:(Class)arg1 ;
-(void)unhideIcons;
-(void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2 ;
@end


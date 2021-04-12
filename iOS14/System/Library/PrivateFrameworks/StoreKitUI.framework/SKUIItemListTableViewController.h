/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SKUIItemCollectionDelegate.h>

@protocol SKUIItemListTableDelegate;
@class NSMutableIndexSet, SKUIItemArtworkContext, SKUIItemCollectionController, SSVLoadURLOperation, SKUIClientContext, SKUIItemList, NSOperationQueue, SKUIUber, SKUIResourceLoader, SKUIStyledImageDataConsumer, NSString;

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate> {

	BOOL _delegateWantsCanRemove;
	BOOL _delegateWantsDidRemove;
	BOOL _delegateWantsWillDisplay;
	BOOL _didLoadMore;
	NSMutableIndexSet* _hiddenIconIndexSet;
	SKUIItemArtworkContext* _artworkContext;
	SKUIItemCollectionController* _itemCollectionController;
	SSVLoadURLOperation* _loadMoreOperation;
	BOOL _requestedLoadMore;
	BOOL _loadsMoreItems;
	BOOL _suspended;
	id<SKUIItemListTableDelegate> _delegate;
	SKUIClientContext* _clientContext;
	SKUIItemList* _itemList;
	NSOperationQueue* _operationQueue;
	double _rowHeight;
	long long _selectionStyle;
	long long _separatorStyle;
	SKUIUber* _uber;
	CGSize _imageBoundingSize;

}

@property (assign,nonatomic,__weak) id<SKUIItemListTableDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIItemArtworkContext * artworkContext;                     //@synthesize artworkContext=_artworkContext - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * artworkLoader; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * iconDataConsumer; 
@property (assign,nonatomic) CGSize imageBoundingSize;                                    //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
@property (nonatomic,retain) SKUIItemList * itemList;                                     //@synthesize itemList=_itemList - In the implementation block
@property (assign,nonatomic) BOOL loadsMoreItems;                                         //@synthesize loadsMoreItems=_loadsMoreItems - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) double rowHeight;                                            //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                                    //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                    //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                           //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                             //@synthesize uber=_uber - In the implementation block
@property (nonatomic,readonly) NSString * visibleMetricsImpressions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(SKUIItemList *)itemList;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setItemList:(SKUIItemList *)arg1 ;
-(long long)separatorStyle;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)isSuspended;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(SKUIUber *)uber;
-(void)setSuspended:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id<SKUIItemListTableDelegate>)delegate;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)setRowHeight:(double)arg1 ;
-(void)addItems:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<SKUIItemListTableDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(double)rowHeight;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)setUber:(SKUIUber *)arg1 ;
-(long long)selectionStyle;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(SKUIItemArtworkContext *)artworkContext;
-(SKUIResourceLoader *)artworkLoader;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(void)itemTableView:(id)arg1 didConfirmItemOfferForTableViewCell:(id)arg2 ;
-(CGSize)imageBoundingSize;
-(SKUIStyledImageDataConsumer *)iconDataConsumer;
-(id)_itemCollectionController;
-(void)loadNextPageOfArtworkWithReason:(long long)arg1 ;
-(void)setArtworkContext:(SKUIItemArtworkContext *)arg1 ;
-(void)setIconDataConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2 ;
-(NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2 ;
-(NSRange)visibleItemRangeForItemCollectionController:(id)arg1 ;
-(id)popIconImageViewForItemAtIndex:(long long)arg1 ;
-(void)setItemCellClass:(Class)arg1 ;
-(void)unhideIcons;
-(void)setArtworkLoader:(SKUIResourceLoader *)arg1 ;
-(void)_loadRemainingItemsWithPriority:(long long)arg1 ;
-(void)_finishLoadMoreOperationWithItems:(id)arg1 error:(id)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 ;
-(void)setItemArtworkContext:(id)arg1 ;
-(NSString *)visibleMetricsImpressions;
-(void)itemTableView:(id)arg1 didRemoveCell:(id)arg2 ;
-(BOOL)loadsMoreItems;
-(void)setLoadsMoreItems:(BOOL)arg1 ;
@end


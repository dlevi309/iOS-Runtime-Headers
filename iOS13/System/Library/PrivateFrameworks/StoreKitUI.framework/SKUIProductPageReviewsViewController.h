/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKComposeReviewDelegate.h>
#import <libobjc.A.dylib/SKUIReviewsFacebookViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIClientContext, SKComposeReviewViewController, NSMutableIndexSet, SKUIReviewsFacebookViewController, SKUIProductPageHeaderViewController, SKUIReviewsHistogramViewController, SKUILayoutCache, SSVLoadURLOperation, NSOperationQueue, SKUIProductPage, SKUIReviewList, SKUIIPadCustomerReviewsHeaderView, SKUIStarRatingQueue, SKUIProductPageTableView, SKUIFacebookLikeStatus, NSString, UIScrollView;

@interface SKUIProductPageReviewsViewController : UIViewController <SKUILayoutCacheDelegate, SKComposeReviewDelegate, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	SKComposeReviewViewController* _composeViewController;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	NSMutableIndexSet* _expandedIndexSet;
	SKUIReviewsFacebookViewController* _facebookViewController;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIReviewsHistogramViewController* _histogramViewController;
	BOOL _isPad;
	SKUILayoutCache* _layoutCache;
	long long _loadedPageCount;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	SKUIProductPage* _productPage;
	SKUIReviewList* _reviewList;
	SKUIIPadCustomerReviewsHeaderView* _reviewsHeaderView;
	long long _sortOrder;
	BOOL _showAllVersions;
	SKUIStarRatingQueue* _starRatingQueue;
	SKUIProductPageTableView* _tableView;
	BOOL _askPermission;

}

@property (nonatomic,readonly) SKUIProductPage * productPage;                                             //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIFacebookLikeStatus * facebookLikeStatus; 
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL askPermission;                                                          //@synthesize askPermission=_askPermission - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadData;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_reloadData;
-(id)_tableView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UIScrollView *)scrollView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)reviewComposeViewControllerDidFinish:(id)arg1 ;
-(void)setAskPermission:(BOOL)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
-(SKUIProductPage *)productPage;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)_addHeaderView;
-(BOOL)askPermission;
-(SKUIFacebookLikeStatus *)facebookLikeStatus;
-(id)_urlStringWithPageNumber:(long long)arg1 ;
-(void)setFacebookLikeStatus:(SKUIFacebookLikeStatus *)arg1 ;
-(double)_defaultPageWidth;
-(void)_loadNextPageIfNecessaryForOffset:(CGPoint)arg1 ;
-(id)_textBoxCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)_shouldShowLoadMoreCell;
-(id)_histogramViewController;
-(id)_reviewsHeaderView;
-(void)_resetPersonalStarRating;
-(id)_textLayoutRequestWithText:(id)arg1 ;
-(void)_appSupportAction:(id)arg1 ;
-(void)_versionSelectionAction:(id)arg1 ;
-(void)_starRatingAction:(id)arg1 ;
-(void)_writeAReviewAction:(id)arg1 ;
-(void)_addReviewsFromResponse:(id)arg1 error:(id)arg2 ;
-(void)_setReviewListWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_sortSelectionAction:(id)arg1 ;
-(id)_bottomBorderColorForScheme:(id)arg1 ;
-(void)reviewsFacebookViewControllerDidChange:(id)arg1 ;
@end


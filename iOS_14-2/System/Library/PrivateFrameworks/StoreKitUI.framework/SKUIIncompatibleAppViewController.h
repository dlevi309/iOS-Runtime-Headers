/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIItemArtworkContext, SKUIProductPageHeaderViewController, UIImage, SKUIProductPageItem, SSVLoadURLOperation, SKUIIncompatibleAppView, NSOperationQueue, UIScrollView, NSString;

@interface SKUIIncompatibleAppViewController : SKUIViewController <SKUIProductPageChildViewController> {

	SKUIItemArtworkContext* _artworkContext;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	SKUIProductPageHeaderViewController* _headerViewController;
	UIImage* _iconImage;
	SKUIProductPageItem* _incompatibleItem;
	SSVLoadURLOperation* _loadIconOperation;
	SKUIIncompatibleAppView* _incompatibleView;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIProductPageItem * incompatibleItem;                                    //@synthesize incompatibleItem=_incompatibleItem - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(void)loadView;
-(UIScrollView *)scrollView;
-(void)dealloc;
-(id)_artworkContext;
-(void)_setArtworkWithImage:(id)arg1 error:(id)arg2 ;
-(id)initWithIncompatibleItem:(id)arg1 ;
-(void)_learnMoreAboutIPad:(id)arg1 ;
-(void)_learnMoreAboutApp:(id)arg1 ;
-(SKUIProductPageItem *)incompatibleItem;
@end


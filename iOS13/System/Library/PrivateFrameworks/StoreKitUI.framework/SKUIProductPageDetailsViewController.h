/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIScreenshotsDelegate.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUITableViewSectionDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIClientContext, SKUIProductPageTableHeaderOnlySection, SKUIProductPageTableTextBoxSection, NSOperationQueue, SKUIProductPage, SKUIResourceLoader, NSMutableArray, SKUIProductPageTableViewController, SKUILayoutCache, NSString, UIScrollView, SKUIProductPageHeaderViewController;

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController> {

	BOOL _askPermission;
	SKUIClientContext* _clientContext;
	SKUIProductPageTableHeaderOnlySection* _copyrightSection;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	SKUIProductPageTableTextBoxSection* _descriptionSection;
	NSOperationQueue* _operationQueue;
	SKUIProductPage* _productPage;
	SKUIResourceLoader* _resourceLoader;
	SKUIProductPageTableHeaderOnlySection* _screenshotsSection;
	NSMutableArray* _sections;
	SKUIProductPageTableTextBoxSection* _storeNotesSection;
	SKUIProductPageTableViewController* _tableViewController;
	SKUILayoutCache* _textLayoutCache;
	SKUIProductPageTableTextBoxSection* _whatsNewSection;

}

@property (nonatomic,readonly) SKUIProductPage * productPage;                                             //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL askPermission;                                                          //@synthesize askPermission=_askPermission - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)defaultPageWidthForUserInterfaceIdiom:(long long)arg1 ;
-(void)dealloc;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(id)_tableViewController;
-(id)_resourceLoader;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setAskPermission:(BOOL)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(SKUIProductPage *)productPage;
-(BOOL)askPermission;
-(id)_storeNotesSection;
-(id)_textLayoutRequestWithText:(id)arg1 widthOffset:(double)arg2 ;
-(id)_bundledAppsSection;
-(id)_parentBundlesSection;
-(id)_screenshotsSection;
-(id)_descriptionSection;
-(id)_whatsNewSection;
-(id)_featuresSection;
-(id)_infoSection;
-(void)_expandSection:(id)arg1 ;
-(void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2 ;
-(id)_copyrightSection;
-(void)_configureSwooshSection:(id)arg1 ;
-(void)screenshotsWillBeginDragging:(id)arg1 ;
-(id)tableViewForTableViewSection:(id)arg1 ;
@end


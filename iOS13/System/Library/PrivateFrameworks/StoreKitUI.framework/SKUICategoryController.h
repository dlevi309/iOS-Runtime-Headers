/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUICategoryTableViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUICategoryControllerDelegate;
@class SKUICategoryArtworkLoader, UIBarButtonItem, SKUIClientContext, UIViewController, NSURL, SSVLoadURLOperation, NSOperationQueue, UIPopoverController, SKUICategory, SKUISegmentedControl, NSArray, SKUICategoryTableViewController, UISegmentedControl, NSString;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate> {

	SKUICategoryArtworkLoader* _artworkLoader;
	UIBarButtonItem* _button;
	SKUIClientContext* _clientContext;
	UIViewController* _contentsController;
	NSURL* _defaultURL;
	id<SKUICategoryControllerDelegate> _delegate;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	UIPopoverController* _popover;
	SKUICategory* _rootCategory;
	NSURL* _selectedURL;
	SKUISegmentedControl* _segmentedControl;
	long long _segmentedControlLength;
	NSArray* _segmentedControlSegments;
	SKUICategoryTableViewController* _tableViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUICategoryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUICategory * category;                                         //@synthesize rootCategory=_rootCategory - In the implementation block
@property (nonatomic,retain) NSURL * defaultURL;                                              //@synthesize defaultURL=_defaultURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * categoryButton; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (assign,nonatomic) long long segmentedControlLength;                                //@synthesize segmentedControlLength=_segmentedControlLength - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * segmentedControl; 
@property (nonatomic,retain) NSURL * selectedURL;                                             //@synthesize selectedURL=_selectedURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUICategoryControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUICategoryControllerDelegate>)arg1 ;
-(SKUICategory *)category;
-(void)setCategory:(SKUICategory *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)dismiss;
-(UISegmentedControl *)segmentedControl;
-(BOOL)isLoading;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(NSURL *)defaultURL;
-(void)setDefaultURL:(NSURL *)arg1 ;
-(id)_artworkLoader;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithContentsController:(id)arg1 ;
-(void)loadFromURL:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setSelectedURL:(NSURL *)arg1 ;
-(UIBarButtonItem *)categoryButton;
-(void)setSegmentedControlLength:(long long)arg1 ;
-(void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2 ;
-(id)metricsPageContextForCategoryTableView:(id)arg1 ;
-(NSURL *)selectedURL;
-(void)buttonAction:(id)arg1 ;
-(void)segmentedControlAction:(id)arg1 ;
-(void)_reloadSegmentedControl;
-(void)_precacheArtworkForCategory:(id)arg1 ;
-(void)_reloadSelectedSegment;
-(id)_rootMetricsLocations;
-(id)_tableViewControllerWithCategory:(id)arg1 ;
-(id)_metricsLocationsWithIndex:(long long)arg1 ;
-(void)_recordClickEventWithCategory:(id)arg1 index:(long long)arg2 ;
-(long long)segmentedControlLength;
@end


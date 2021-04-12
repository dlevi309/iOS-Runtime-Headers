/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setCategory:(SKUICategory *)arg1 ;
-(BOOL)isLoading;
-(id<SKUICategoryControllerDelegate>)delegate;
-(NSURL *)selectedURL;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setSelectedURL:(NSURL *)arg1 ;
-(SKUICategory *)category;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setDelegate:(id<SKUICategoryControllerDelegate>)arg1 ;
-(void)setDefaultURL:(NSURL *)arg1 ;
-(NSURL *)defaultURL;
-(UISegmentedControl *)segmentedControl;
-(void)dealloc;
-(void)dismiss;
-(id)_artworkLoader;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithContentsController:(id)arg1 ;
-(void)loadFromURL:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(UIBarButtonItem *)categoryButton;
-(void)setSegmentedControlLength:(long long)arg1 ;
-(void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2 ;
-(id)metricsPageContextForCategoryTableView:(id)arg1 ;
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


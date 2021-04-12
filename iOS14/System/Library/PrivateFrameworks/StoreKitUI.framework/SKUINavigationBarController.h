/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>

@protocol SKUINavigationBarControllerDelegate;
@class SKUINavigationBarButtonsController, SKUIClientContext, SKUINavigationBarContext, SKUINavigationPaletteController, UIViewController, NSMutableArray, NSMapTable, SKUINavigationBarViewElement, SKUIButtonViewElement, UIView, NSArray, NSString;

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate> {

	SKUINavigationBarButtonsController* _buttonsController;
	SKUIClientContext* _clientContext;
	SKUINavigationBarContext* _navigationBarContext;
	SKUINavigationPaletteController* _paletteController;
	UIViewController* _parentViewController;
	NSMutableArray* _reusableSearchBarControllers;
	NSMapTable* _searchBarControllers;
	NSMutableArray* _sections;
	SKUINavigationBarViewElement* _viewElement;
	SKUIButtonViewElement* _titleButtonViewElement;
	id<SKUINavigationBarControllerDelegate> _delegate;

}

@property (nonatomic,retain) SKUINavigationBarViewElement * navigationBarViewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                    //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUINavigationBarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                       //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) UIView * navigationPaletteView; 
@property (nonatomic,readonly) NSArray * existingSearchBarControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUINavigationBarControllerDelegate>)delegate;
-(UIViewController *)parentViewController;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setDelegate:(id<SKUINavigationBarControllerDelegate>)arg1 ;
-(double)_availableWidth;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)dealloc;
-(id)viewForElementIdentifier:(id)arg1 ;
-(UIView *)navigationPaletteView;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(id)initWithNavigationBarViewElement:(id)arg1 ;
-(void)_viewElementEventNotification:(id)arg1 ;
-(id)_barButtonItemWithViewElement:(id)arg1 ;
-(id)titleViewWithViewElement:(id)arg1 ;
-(id)fallbackTitleView;
-(id)_navigationBarContext;
-(id)barButtonItemForElementIdentifier:(id)arg1 ;
-(void)detachNavigationItemControllers;
-(id)_addSearchBarControllerWithViewElement:(id)arg1 ;
-(id)_buttonWithElement:(id)arg1 width:(double)arg2 ;
-(void)_titleButtonAction:(id)arg1 ;
-(void)detachFromNavigationItem:(id)arg1 ;
-(void)attachToNavigationItem:(id)arg1 ;
-(void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2 ;
-(id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 ;
-(id)_barButtonItemWithButtonViewElement:(id)arg1 ;
-(id)_barButtonItemWithSearchBarViewElement:(id)arg1 ;
-(id)_resourceImageForImageElement:(id)arg1 ;
-(id)_attributedStringForButton:(id)arg1 ;
-(NSArray *)existingSearchBarControllers;
-(void)setReusableSearchBarControllers:(id)arg1 ;
-(void)updateNavigationItem:(id)arg1 ;
-(SKUINavigationBarViewElement *)navigationBarViewElement;
-(void)setNavigationBarViewElement:(SKUINavigationBarViewElement *)arg1 ;
@end


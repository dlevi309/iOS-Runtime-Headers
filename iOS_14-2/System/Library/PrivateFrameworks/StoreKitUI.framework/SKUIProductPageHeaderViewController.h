/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIProductPageHeaderViewDelegate;
@class UIPopoverController, SKUIContentRatingArtworkResourceLoader, SKUIItemArtworkContext, SKUIClientContext, SKUIProductPageHeaderView, UIImage, SKUIItem, SSVLoadURLOperation, NSOperationQueue, SKUIItemOffer, SKUIProductPage, SKUIProductPageHeaderFloatingView, NSString;

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate> {

	UIPopoverController* _activityPopoverController;
	BOOL _askPermission;
	SKUIContentRatingArtworkResourceLoader* _contentRatingArtworkLoader;
	SKUIItemArtworkContext* _artworkContext;
	SKUIClientContext* _clientContext;
	id<SKUIProductPageHeaderViewDelegate> _delegate;
	SKUIProductPageHeaderView* _headerView;
	UIImage* _iconImage;
	SKUIItem* _item;
	long long _itemIdentifier;
	SSVLoadURLOperation* _loadIconOperation;
	SSVLoadURLOperation* _loadUberOperation;
	NSOperationQueue* _operationQueue;
	long long _personalizationState;
	SKUIItemOffer* _personalizedOffer;
	UIImage* _placeholderImage;
	SKUIProductPage* _productPage;
	UIImage* _uberImage;
	BOOL _wantsActivityViewController;
	SKUIProductPageHeaderFloatingView* _floatingView;
	BOOL _performArtistActionOnLoad;

}

@property (nonatomic,readonly) SKUIItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                  //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL askPermission;                                                 //@synthesize askPermission=_askPermission - In the implementation block
@property (nonatomic,readonly) UIImage * iconImage; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) long long selectedSectionIndex; 
@property (nonatomic,readonly) SKUIProductPageHeaderFloatingView * floatingView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id<SKUIProductPageHeaderViewDelegate>)delegate;
-(UIImage *)iconImage;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SKUIItem *)item;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setSelectedSectionIndex:(long long)arg1 ;
-(long long)selectedSectionIndex;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setDelegate:(id<SKUIProductPageHeaderViewDelegate>)arg1 ;
-(id)_activeItem;
-(void)reloadData;
-(id)initWithItem:(id)arg1 ;
-(BOOL)_isRestricted;
-(void)loadView;
-(void)dealloc;
-(SKUIProductPageHeaderFloatingView *)floatingView;
-(void)setAskPermission:(BOOL)arg1 ;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(void)setProductPage:(id)arg1 ;
-(void)_destroyPopoverController;
-(void)_itemOfferButtonAction:(id)arg1 ;
-(id)_artworkContext;
-(BOOL)askPermission;
-(id)_segmentedControlTitles;
-(void)_sectionControlAction:(id)arg1 ;
-(void)_setPersonalizedOffer:(id)arg1 ;
-(void)_setArtworkWithImage:(id)arg1 error:(id)arg2 ;
-(void)_loadUberImageIfAvailable;
-(void)_reloadItemStateAnimated:(BOOL)arg1 ;
-(void)_showActivityViewControllerFromView:(id)arg1 ;
-(id)_contentRatingResourceLoader;
-(void)_artistButtonAction:(id)arg1 ;
-(id)_ageBandString;
-(void)_shareButtonAction:(id)arg1 ;
-(void)_showAskPermissionBanner;
-(void)_setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(void)_sendDidReloadOffer;
-(void)_setUberWithImage:(id)arg1 error:(id)arg2 ;
-(void)_showSynthesizedItemStateWithFlag:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_disableItemOfferButtonWithTitle:(id)arg1 animated:(BOOL)arg2 ;
@end


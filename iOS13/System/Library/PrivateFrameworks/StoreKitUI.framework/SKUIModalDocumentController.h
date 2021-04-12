/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/AAUIFamilySetupDelegate.h>
#import <libobjc.A.dylib/SKUIComposeReviewDelegate.h>
#import <libobjc.A.dylib/SKUIGiftViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIModalDocumentController.h>

@protocol SKUIModalDocumentController <NSObject>
@required
-(void)unloadDocumentForViewController:(id)arg1;

@end

#import <libobjc.A.dylib/SKUIOverlayContainerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, UINavigationControllerDelegate, SKUIModalDocumentDataSource;
@class SKUIClientContext, NSMutableArray, SKUIStoreDialogController, SKUIReportAConcernViewController, UINavigationController, SKUIOverlayContainerViewController, UIPopoverController, UIViewController, NSArray, NSString;

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKUIComposeReviewDelegate, SKUIGiftViewControllerDelegate, SKUIModalDocumentController, SKUIOverlayContainerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate> {

	SKUIClientContext* _clientContext;
	NSMutableArray* _composeReviewViewControllers;
	id<SKUIModalDocumentDelegate> _delegate;
	SKUIStoreDialogController* _dialogController;
	SKUIReportAConcernViewController* _reportAConcernViewController;
	NSMutableArray* _giftViewControllers;
	id<SKUIModalSourceViewProvider> _modalSourceViewProvider;
	UINavigationController* _overlayNavigationController;
	SKUIOverlayContainerViewController* _overlayViewController;
	id<UINavigationControllerDelegate> _navigationControllerDelegate;
	UIPopoverController* _popoverController;
	UIViewController* _rootViewController;
	NSMutableArray* _stackItems;
	id<SKUIModalDocumentDataSource> _dataSource;

}

@property (nonatomic,readonly) SKUIOverlayContainerViewController * _overlayViewController; 
@property (nonatomic,readonly) UINavigationController * _overlayNavigationController; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                                                   //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIModalDocumentDataSource> dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIModalDocumentDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIModalSourceViewProvider> modalSourceViewProvider;                      //@synthesize modalSourceViewProvider=_modalSourceViewProvider - In the implementation block
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                                               //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) NSArray * documents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SKUIModalDocumentDelegate>)delegate;
-(void)setDelegate:(id<SKUIModalDocumentDelegate>)arg1 ;
-(id<SKUIModalDocumentDataSource>)dataSource;
-(void)setDataSource:(id<SKUIModalDocumentDataSource>)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(UIViewController *)rootViewController;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)_presenterViewController;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(NSArray *)documents;
-(id<UINavigationControllerDelegate>)navigationControllerDelegate;
-(BOOL)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2 ;
-(void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2 ;
-(void)composeReviewViewController:(id)arg1 didSubmitWithEdit:(BOOL)arg2 ;
-(void)composeReviewViewControllerDidCancel:(id)arg1 ;
-(void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(void)setNavigationControllerDelegate:(id<UINavigationControllerDelegate>)arg1 ;
-(void)popAllDocuments;
-(SKUIOverlayContainerViewController *)_overlayViewController;
-(void)_presentAlertForDialog:(id)arg1 ;
-(void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2 ;
-(void)overlayContainerViewController:(id)arg1 willPopViewController:(id)arg2 ;
-(void)setModalSourceViewProvider:(id<SKUIModalSourceViewProvider>)arg1 ;
-(void)ensureOverlayNavigationControllerStackConsistencyForNavigationController:(id)arg1 ;
-(void)presentOverlayViewControllersFromNavigationController:(id)arg1 ;
-(void)setOverlayNavigationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)navigationDocumentForNavigationController:(id)arg1 ;
-(UINavigationController *)_overlayNavigationController;
-(void)_presentOverlayViewControllersFromNavigationController:(id)arg1 ;
-(void)_popDocument:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendDidFinishIfApplicable;
-(void)_pushCharityDocument:(id)arg1 options:(id)arg2 ;
-(void)_pushDialogDocument:(id)arg1 options:(id)arg2 ;
-(void)_pushFamilySetupDocument:(id)arg1 options:(id)arg2 ;
-(void)_pushGiftDocument:(id)arg1 options:(id)arg2 ;
-(void)_pushPlaylistDocument:(id)arg1 options:(id)arg2 ;
-(void)_pushRedeemDocument:(id)arg1 options:(id)arg2 ;
-(void)_garbageCollectActivityViewController:(id)arg1 ;
-(void)_pushPopoverStackItem:(id)arg1 ;
-(void)_pushPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3 options:(id)arg4 ;
-(void)_pushSheetStackItem:(id)arg1 ;
-(void)_composeReviewViewControllerDidFinish:(id)arg1 finished:(BOOL)arg2 ;
-(void)_pushSheetDocument:(id)arg1 viewController:(id)arg2 ;
-(void)_pushOverlayStackItem:(id)arg1 ;
-(void)_dismissOverlayControllerWithStackItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_promptForStarRating:(id)arg1 ;
-(void)_unloadDocumentForViewController:(id)arg1 ;
-(void)_unloadDocumentForPopoverController:(id)arg1 ;
-(void)_popOverlayStackItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_popPopoverStackItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_overlayStackItems;
-(id)_showOverlayContainerViewController;
-(id)_imageForImageViewElement:(id)arg1 ;
-(id)_modalSourceViewProviderFromStackItems;
-(CGRect)_centerRect:(id)arg1 adjust:(BOOL)arg2 ;
-(void)_presetPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3 ;
-(void)_overlayControllerBackstopAction:(id)arg1 ;
-(BOOL)_popoverController:(id)arg1 containsStackItem:(id)arg2 ;
-(void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(void)unloadDocumentForViewController:(id)arg1 ;
-(id)navigationDocumentForDocument:(id)arg1 ;
-(void)_popDocumentSkippingUserInterfaceUpdates;
-(id<SKUIModalSourceViewProvider>)modalSourceViewProvider;
@end

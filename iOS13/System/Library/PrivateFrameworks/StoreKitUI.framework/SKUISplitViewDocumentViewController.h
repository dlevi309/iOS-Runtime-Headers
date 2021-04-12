/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUINavigationDocumentDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class UIViewController, UISplitViewController, SKUISplitViewTemplateElement, SKUINavigationDocumentController, NSString;

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController> {

	UIViewController* _delayingPresentationViewController;
	UISplitViewController* _splitViewController;
	SKUISplitViewTemplateElement* _templateElement;
	SKUINavigationDocumentController* _leftNavigationDocumentController;
	SKUINavigationDocumentController* _rightNavigationDocumentController;

}

@property (nonatomic,retain) SKUINavigationDocumentController * leftNavigationDocumentController;               //@synthesize leftNavigationDocumentController=_leftNavigationDocumentController - In the implementation block
@property (nonatomic,retain) SKUINavigationDocumentController * rightNavigationDocumentController;              //@synthesize rightNavigationDocumentController=_rightNavigationDocumentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)loadView;
-(id)_defaultBackgroundColor;
-(void)documentDidUpdate:(id)arg1 ;
-(id)leftBarButtonItemsForDocument:(id)arg1 ;
-(void)delayPresentationIfNeededForParentViewController:(id)arg1 ;
-(void)skui_viewWillAppear:(BOOL)arg1 ;
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
-(void)_reloadSplitViewControllers;
-(BOOL)_isFullyPopulated;
-(void)_skui_endDelayingPresentation;
-(void)navigationDocumentStackDidChange:(id)arg1 ;
-(SKUINavigationDocumentController *)leftNavigationDocumentController;
-(void)setLeftNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(SKUINavigationDocumentController *)rightNavigationDocumentController;
-(void)setRightNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
@end


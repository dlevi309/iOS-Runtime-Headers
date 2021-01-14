/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)loadView;
-(id)_defaultBackgroundColor;
-(void)dealloc;
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


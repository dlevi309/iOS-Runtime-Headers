/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIOnboardingAffiliationCirclesDelegate.h>
#import <libobjc.A.dylib/SKUIPhysicalCirclesTemplateDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIOnboardingAffiliationCirclesViewController, SKUIOnboardingFooterView, NSMapTable, UIGestureRecognizer, SKUIOnboardingProgressView, SKUIResourceLoader, SKUIPhysicalCirclesTemplateViewElement, NSString;

@interface SKUIPhysicalCirclesDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIOnboardingAffiliationCirclesDelegate, SKUIPhysicalCirclesTemplateDelegate, UIGestureRecognizerDelegate, SKUIDocumentViewController> {

	SKUIOnboardingAffiliationCirclesViewController* _circlesViewController;
	SKUIOnboardingFooterView* _footerView;
	NSMapTable* _imageRequests;
	UIGestureRecognizer* _interactivePopGestureRecognizer;
	SKUIOnboardingProgressView* _progressView;
	SKUIResourceLoader* _resourceLoader;
	SKUIPhysicalCirclesTemplateViewElement* _templateElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)_affiliationItemsWithCircleItemElements:(id)arg1 ;
-(void)_footerLeftButtonAction:(id)arg1 ;
-(void)_footerRightButtonAction:(id)arg1 ;
-(void)_reloadFooterViewAnimated:(BOOL)arg1 ;
-(void)_reloadInstructionsView;
-(void)_loadImagesWithReason:(long long)arg1 ;
-(id)_profileImageElement;
-(id)_leftFooterButtonElement;
-(id)_rightFooterButtonElement;
-(void)_styleAttributedString:(id)arg1 withStyle:(id)arg2 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)onboardingCircles:(id)arg1 didRemoveAffiliationItem:(id)arg2 ;
-(void)onboardingCircles:(id)arg1 didSelectAffiliationItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)physicalCirclesDOMFeature:(id)arg1 didRequestAnimation:(id)arg2 ;
-(id)initWithPhysicalCirclesTemplateViewElement:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <TVMLKit/_TVListViewControllerDelegate.h>
#import <TVMLKit/TVAppTemplateController.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class IKViewElement, IKCollectionElement, IKImageElement, IKAudioElement, UIView, _TVFocusCaptureView, UIViewController, _TVListViewController, NSString;

@interface _TVListTemplateController : _TVBgImageLoadingViewController <_TVListViewControllerDelegate, TVAppTemplateController, TVAppTemplateImpressionable> {

	IKViewElement* _templateElement;
	IKCollectionElement* _listElement;
	IKViewElement* _bannerElement;
	IKImageElement* _bgImageElement;
	IKAudioElement* _bgAudioElement;
	IKImageElement* _heroImageElement;
	UIView* _overlayView;
	_TVFocusCaptureView* _disabledTemplateFocusCaptureView;
	double _impressionThreshold;
	UIViewController* _focusedController;
	_TVListViewController* _listViewController;
	UIViewController* _previewViewController;

}

@property (nonatomic,retain) UIViewController * focusedController;                    //@synthesize focusedController=_focusedController - In the implementation block
@property (nonatomic,retain) _TVListViewController * listViewController;              //@synthesize listViewController=_listViewController - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;                //@synthesize previewViewController=_previewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_updateView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(_TVListViewController *)listViewController;
-(void)setListViewController:(_TVListViewController *)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_configureWithBgElement:(id)arg1 ;
-(void)_configureWithListElement:(id)arg1 ;
-(void)setFocusedController:(UIViewController *)arg1 ;
-(UIViewController *)focusedController;
-(id)_listTemplateView;
-(void)listViewController:(id)arg1 updatePreviewViewController:(id)arg2 ;
-(void)listViewController:(id)arg1 didScrollWithScrollView:(id)arg2 ;
-(BOOL)setNeedsFocusUpdateToList;
@end


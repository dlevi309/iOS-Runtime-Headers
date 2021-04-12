/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVMLKit/TVAppTemplateController.h>

@class UIView, IKViewElement, NSString;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController> {

	id _imageProxy;
	BOOL _loaded;
	UIView* _rightLargeTitleButton;
	SCD_Struct_TV17 _bgImageLoadingOptions;
	BOOL _appliedNavigationItem;
	IKViewElement* _navigationItemElement;

}

@property (nonatomic,retain) IKViewElement * navigationItemElement;              //@synthesize navigationItemElement=_navigationItemElement - In the implementation block
@property (assign,nonatomic) BOOL appliedNavigationItem;                         //@synthesize appliedNavigationItem=_appliedNavigationItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_decorateImage:(id)arg1 decorator:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(long long)preferredStatusBarStyle;
-(void)_updateNavigationItem;
-(void)updateNavigationItem:(id)arg1 ;
-(void)_dismissViewController:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)loadFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isBackdropNeeded;
-(BOOL)_shouldLoadBackgroundImageAsynchronously;
-(void)configureAppearanceTransition;
-(long long)_overrideLargeTitleDisplayMode;
-(void)_updateNavigationBarPadding;
-(void)_reparentNavigationItem:(id)arg1 ;
-(BOOL)_isNewiOSTVApp;
-(BOOL)appliedNavigationItem;
-(void)setAppliedNavigationItem:(BOOL)arg1 ;
-(id)_stackViewWithMinSpacing:(double)arg1 layoutMargin:(UIEdgeInsets)arg2 ;
-(IKViewElement *)navigationItemElement;
-(void)setNavigationItemElement:(IKViewElement *)arg1 ;
@end


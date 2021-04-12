/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_TV18 _bgImageLoadingOptions;
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateNavigationItem;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewDidLayoutSubviews;
-(void)_dismissViewController:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_updateNavigationBarPadding;
-(void)configureAppearanceTransition;
-(long long)_overrideLargeTitleDisplayMode;
-(void)updateNavigationItem:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)loadFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isBackdropNeeded;
-(BOOL)_shouldLoadBackgroundImageAsynchronously;
-(void)_reparentNavigationItem:(id)arg1 ;
-(BOOL)_isNewiOSTVApp;
-(BOOL)appliedNavigationItem;
-(void)setAppliedNavigationItem:(BOOL)arg1 ;
-(id)_stackViewWithMinSpacing:(double)arg1 layoutMargin:(UIEdgeInsets)arg2 ;
-(IKViewElement *)navigationItemElement;
-(void)setNavigationItemElement:(IKViewElement *)arg1 ;
@end


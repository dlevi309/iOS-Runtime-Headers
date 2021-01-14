/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/_TVStackTemplateController.h>

@protocol VUIProductUberBackgroundInterface;
@class UIViewController, UIView, CAGradientLayer, NSArray;

@interface VUIProductShowcaseViewController : _TVStackTemplateController {

	BOOL _lightStatusBar;
	UIViewController*<VUIProductUberBackgroundInterface> _productBanner;
	UIView* _navBarGradientView;
	CAGradientLayer* _gradientLayer;
	NSArray* _navBarButtons;
	UIView* _transitionBackgroundView;

}

@property (assign,nonatomic) BOOL lightStatusBar;                                                             //@synthesize lightStatusBar=_lightStatusBar - In the implementation block
@property (nonatomic,retain) UIViewController*<VUIProductUberBackgroundInterface> productBanner;              //@synthesize productBanner=_productBanner - In the implementation block
@property (nonatomic,retain) UIView * navBarGradientView;                                                     //@synthesize navBarGradientView=_navBarGradientView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                                                 //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) NSArray * navBarButtons;                                                         //@synthesize navBarButtons=_navBarButtons - In the implementation block
@property (nonatomic,retain) UIView * transitionBackgroundView;                                               //@synthesize transitionBackgroundView=_transitionBackgroundView - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_gradientLayer;
-(long long)preferredStatusBarStyle;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)preferredStatusBarUpdateAnimation;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_setUserActivityData;
-(void)_setupProductBanner;
-(void)setNavBarButtons:(NSArray *)arg1 ;
-(void)_handleAutoHighlightScroll:(id)arg1 ;
-(void)_configureBannerView:(id)arg1 ;
-(void)_configureTransitionBackgroundView;
-(void)_configureNavigationBarGradient;
-(void)configureAppearanceTransition;
-(void)setProductBanner:(UIViewController*<VUIProductUberBackgroundInterface>)arg1 ;
-(NSArray *)navBarButtons;
-(UIViewController*<VUIProductUberBackgroundInterface>)productBanner;
-(UIView *)navBarGradientView;
-(UIView *)transitionBackgroundView;
-(void)_handleAppWillEnterForeground:(id)arg1 ;
-(void)setNavBarGradientView:(UIView *)arg1 ;
-(long long)_overrideLargeTitleDisplayMode;
-(BOOL)lightStatusBar;
-(void)setLightStatusBar:(BOOL)arg1 ;
-(void)setTransitionBackgroundView:(UIView *)arg1 ;
@end


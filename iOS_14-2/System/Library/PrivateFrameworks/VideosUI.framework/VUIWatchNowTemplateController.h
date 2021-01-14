/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/_TVStackTemplateController.h>

@class UIImageView, VUIWatchNowTemplateBackgroundLayer;

@interface VUIWatchNowTemplateController : _TVStackTemplateController {

	BOOL _shouldFocusUpNext;
	BOOL _upNextFocused;
	UIImageView* _backgroundImageView;
	VUIWatchNowTemplateBackgroundLayer* _backgroundImageGradientLayer;
	UIImageView* _gradientImageView;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;                                              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) VUIWatchNowTemplateBackgroundLayer * backgroundImageGradientLayer;              //@synthesize backgroundImageGradientLayer=_backgroundImageGradientLayer - In the implementation block
@property (nonatomic,retain) UIImageView * gradientImageView;                                                //@synthesize gradientImageView=_gradientImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldFocusUpNext;                                                         //@synthesize shouldFocusUpNext=_shouldFocusUpNext - In the implementation block
@property (assign,getter=isUpNextFocused,nonatomic) BOOL upNextFocused;                                      //@synthesize upNextFocused=_upNextFocused - In the implementation block
-(UIImageView *)backgroundImageView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)_updateBackgroundImage;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(BOOL)shouldFocusUpNext;
-(BOOL)_doesCollectionViewHasItems;
-(void)setShouldFocusUpNext:(BOOL)arg1 ;
-(UIImageView *)gradientImageView;
-(void)setUpNextFocused:(BOOL)arg1 ;
-(id)_watchNowBannerScrollStop;
-(BOOL)isUpNextFocused;
-(void)focusUpNextAnimated:(BOOL)arg1 ;
-(void)showcaseFactorDidChange;
-(id)scrollStopForShowcaseTransition;
-(id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2 ;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(VUIWatchNowTemplateBackgroundLayer *)backgroundImageGradientLayer;
-(void)setBackgroundImageGradientLayer:(VUIWatchNowTemplateBackgroundLayer *)arg1 ;
-(void)setGradientImageView:(UIImageView *)arg1 ;
@end


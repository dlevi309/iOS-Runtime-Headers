/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, CPSVibrantLabel, CPSButton, UIImageView, CAGradientLayer, NSString, UIImage;

@interface CPSClipLoadingView : UIView {

	UIView* _backdropView;
	UIView* _clipNameBackdropView;
	UIView* _clipNameContainerView;
	UILabel* _clipNameLabel;
	UIView* _clipNameProgressView;
	UIView* _errorContainerView;
	CPSVibrantLabel* _clipUnavailableLabel;
	CPSButton* _retryButton;
	/*^block*/id _reloadHandler;
	/*^block*/id _deferredActions;
	UIImageView* _heroImageView;
	UIView* _labelContainerView;
	BOOL _labelsNeedUpdate;
	BOOL _animationHasStarted;
	BOOL _loadingHasFailed;
	long long _progressChangeAnimationCount;
	UILabel* _poweredByLabel;
	CAGradientLayer* _gradientLayer;
	UIView* _gradientView;
	BOOL _poweredByThirdParty;
	float _loadingProgress;
	NSString* _name;
	NSString* _provider;

}

@property (nonatomic,copy) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * provider;                                                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (assign,getter=isPoweredByThirdParty,nonatomic) BOOL poweredByThirdParty;              //@synthesize poweredByThirdParty=_poweredByThirdParty - In the implementation block
@property (nonatomic,readonly) float loadingProgress;                                            //@synthesize loadingProgress=_loadingProgress - In the implementation block
-(void)setProvider:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)provider;
-(void)setBackgroundImage:(id)arg1 animated:(BOOL)arg2 ;
-(float)loadingProgress;
-(NSString *)name;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(UIImage *)backgroundImage;
-(BOOL)isPoweredByThirdParty;
-(void)setLoadingProgress:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPoweredByThirdParty:(BOOL)arg1 ;
-(void)setLoadingHasFailed:(BOOL)arg1 animated:(BOOL)arg2 reason:(id)arg3 reloadHandler:(/*^block*/id)arg4 ;
-(void)finishLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadTapped:(id)arg1 ;
-(void)_updateLoadingProgress;
-(void)_startAnimationIfNeeded;
-(void)_updateConicGradientRotation;
-(BOOL)_loadingIsComplete;
-(void)_showCompletionAnimation:(/*^block*/id)arg1 ;
-(id)_backdropEffectRemovalAnimationForKeyPath:(id)arg1 ;
-(id)_basicAnimationToDecreaseOpacity;
-(id)_springAnimationToDecreaseOpacity;
-(id)_textScaleUpSpringAnimation;
-(void)_revealBackgroundAndLabels;
-(id)_animationForTranslationY:(double)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class _UILegibilitySettings, NSString, SBUILegibilityLabel, CAGradientLayer, NSTimer, NSMutableArray;

@interface SBUICallToActionLabel : UIView <CAAnimationDelegate> {

	BOOL _disablesGradientFadeInAnimation;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _text;
	SBUILegibilityLabel* _label;
	CAGradientLayer* _gradientLayer;
	unsigned long long _state;
	NSTimer* _animationTimer;
	NSMutableArray* _animationCompletionBlocks;

}

@property (nonatomic,retain) SBUILegibilityLabel * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                         //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;                                //@synthesize animationTimer=_animationTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationCompletionBlocks;              //@synthesize animationCompletionBlocks=_animationCompletionBlocks - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CAGradientLayer *)gradientLayer;
-(id)_fontWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 withMaximumFontSizeCategory:(id)arg3 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)fadeInImmediately:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeOutWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preferredTextSizeChanged:(id)arg1 ;
-(void)_createLabel;
-(void)_resetGradientAndLabelBefore:(BOOL)arg1 ;
-(void)_actuallyRunGradientAnimation;
-(void)didMoveToSuperview;
-(void)setText:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)setAnimationCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setText:(id)arg1 forLanguage:(id)arg2 animated:(BOOL)arg3 ;
-(NSString *)description;
-(void)layoutSubviews;
-(NSTimer *)animationTimer;
-(void)_executePostAnimationCompletionBlocks;
-(id)_callToActionFont;
-(void)_runFadeAnimationForFadingOut:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)fadeInImmediately:(BOOL)arg1 ;
-(double)baselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_invalidateGradientAnimationTimer;
-(NSString *)text;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_addAnimationCompletionBlockIfNecessary:(/*^block*/id)arg1 ;
-(void)fadeOut;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)_timerTriggered;
-(void)sizeToFit;
-(void)cancelFadeInTimerIfNecessary;
-(void)setLabel:(SBUILegibilityLabel *)arg1 ;
-(void)_createGradientLayer;
-(void)_updateLabelTextWithLanguage:(id)arg1 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)fadeIn;
-(SBUILegibilityLabel *)label;
-(NSMutableArray *)animationCompletionBlocks;
-(void)_runGradientAnimation:(BOOL)arg1 ;
@end


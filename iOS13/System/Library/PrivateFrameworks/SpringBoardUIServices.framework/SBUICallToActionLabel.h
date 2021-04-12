/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setLabel:(SBUILegibilityLabel *)arg1 ;
-(SBUILegibilityLabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)baselineOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)didMoveToSuperview;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)fadeOut;
-(void)fadeIn;
-(void)_createLabel;
-(void)_createGradientLayer;
-(void)_preferredTextSizeChanged:(id)arg1 ;
-(void)cancelFadeInTimerIfNecessary;
-(void)fadeInImmediately:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runFadeAnimationForFadingOut:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addAnimationCompletionBlockIfNecessary:(/*^block*/id)arg1 ;
-(void)_runGradientAnimation:(BOOL)arg1 ;
-(void)fadeOutWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateGradientAnimationTimer;
-(void)_resetGradientAndLabelBefore:(BOOL)arg1 ;
-(void)_executePostAnimationCompletionBlocks;
-(void)setText:(id)arg1 forLanguage:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateLabelTextWithLanguage:(id)arg1 ;
-(void)fadeInImmediately:(BOOL)arg1 ;
-(id)_callToActionFont;
-(id)_fontWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 withMaximumFontSizeCategory:(id)arg3 ;
-(void)_actuallyRunGradientAnimation;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(void)_timerTriggered;
-(NSMutableArray *)animationCompletionBlocks;
-(void)setAnimationCompletionBlocks:(NSMutableArray *)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKMicaResizableView.h>

@protocol PKFingerprintGlyphViewDelegate;
@class CALayer, NSArray, NSMutableArray, NSString, UIColor;

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView> {

	CALayer* _backgroundLayer;
	CALayer* _foregroundLayer;
	CALayer* _foregroundRingContainerLayer;
	NSArray* _backgroundShapeLayers;
	NSArray* _foregroundShapeLayers;
	NSArray* _foregroundRingShapeLayers;
	CALayer* _maskLayer;
	CALayer* _maskForegroundLayer;
	unsigned long long _transitionIndex;
	BOOL _transitioning;
	long long _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	double _lastAnimationWillFinish;
	BOOL _rotatingRing;
	NSString* _rotationAnimationKey;
	BOOL _fadeOnRecognized;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	long long _state;
	CALayer* _contentLayer;
	id<PKFingerprintGlyphViewDelegate> _delegate;

}

@property (nonatomic,copy) UIColor * primaryColor;                                            //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryColor;                                          //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) BOOL fadeOnRecognized;                                           //@synthesize fadeOnRecognized=_fadeOnRecognized - In the implementation block
@property (nonatomic,readonly) long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) CALayer * contentLayer;                                        //@synthesize contentLayer=_contentLayer - In the implementation block
@property (assign,nonatomic,__weak) id<PKFingerprintGlyphViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKFingerprintGlyphViewDelegate>)delegate;
-(void)setDelegate:(id<PKFingerprintGlyphViewDelegate>)arg1 ;
-(long long)state;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(CALayer *)contentLayer;
-(double)pointScaleToMatchBoundsSize:(CGSize)arg1 ;
-(CGSize)boundsSizeToMatchPointScale:(double)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFadeOnRecognized:(BOOL)arg1 ;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg1 ;
-(BOOL)fadeOnRecognized;
-(void)setPathState:(id)arg1 forLayer:(id)arg2 ;
-(void)setProgress:(double)arg1 withDuration:(double)arg2 ;
-(void)setContentLayerOpacity:(double)arg1 withDuration:(double)arg2 ;
-(void)_applyPrimaryColorAnimated:(BOOL)arg1 ;
-(void)_applySecondaryColorAnimated:(BOOL)arg1 ;
-(void)_restartRotationIfNecessary;
-(void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)_minimumAnimationDurationForStateTransition;
-(void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1 ;
-(void)_showFingerprintWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_executeAfterMinimumAnimationDurationForStateTransition:(/*^block*/id)arg1 ;
-(void)_setRingState:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_finishTransitionForIndex:(unsigned long long)arg1 ;
-(void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)arg1 ;
-(void)_updateRotationAnimationsIfNecessary;
-(void)_continueHoldingStateForPathAtIndex:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2 ;
-(id)pathStateForLayer:(id)arg1 ;
-(void)_setProgress:(double)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned long long)arg3 ;
-(void)_startRotationAnimation;
-(void)_endRotationAnimation;
-(void)_applyColor:(id)arg1 toShapeLayers:(id)arg2 animated:(BOOL)arg3 ;
-(void)setSecondaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRecognizedIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
@end


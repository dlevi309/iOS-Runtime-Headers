/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBCenterIconZoomAnimator.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class UIViewFloatAnimatableProperty, CAMediaTimingFunction, NSString;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver> {

	double _baselineDistance;
	double _effectMultiplier;
	double _distanceExponent;
	UIViewFloatAnimatableProperty* _labelAlphaDrivingProgressAnimatableProperty;
	CAMediaTimingFunction* _timingFunction;

}

@property (nonatomic,retain) UIViewFloatAnimatableProperty * labelAlphaDrivingProgressAnimatableProperty;              //@synthesize labelAlphaDrivingProgressAnimatableProperty=_labelAlphaDrivingProgressAnimatableProperty - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                                                   //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(double)arg1 withCenter:(CGPoint)arg2 ;
-(double)_zPositionForView:(id)arg1 center:(CGPoint)arg2 andFraction:(double)arg3 ;
-(void)_updateDockForFraction:(double)arg1 ;
-(id)initWithFolderController:(id)arg1 ;
-(void)_updateWithSettings:(id)arg1 ;
-(void)_createAnimatableProperties;
-(UIViewFloatAnimatableProperty *)labelAlphaDrivingProgressAnimatableProperty;
-(double)_zPositionForPoint:(CGPoint)arg1 center:(CGPoint)arg2 andFraction:(double)arg3 ;
-(double)_functionWithProgress:(double)arg1 distance:(double)arg2 ;
-(void)setLabelAlphaDrivingProgressAnimatableProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)_updateLabelAlphaForPresentationValue:(BOOL)arg1 ;
-(double)_labelAlphaForFraction:(double)arg1 ;
@end


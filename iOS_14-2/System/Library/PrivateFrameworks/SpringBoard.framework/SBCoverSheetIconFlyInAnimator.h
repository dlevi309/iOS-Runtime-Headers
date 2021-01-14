/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBCenterIconZoomAnimator.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class UIViewFloatAnimatableProperty, CAMediaTimingFunction, UIPageControl, NSString;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver> {

	double _baselineDistance;
	double _effectMultiplier;
	double _distanceExponent;
	UIViewFloatAnimatableProperty* _labelAlphaDrivingProgressAnimatableProperty;
	CAMediaTimingFunction* _timingFunction;
	UIPageControl* _pageControl;

}

@property (nonatomic,retain) UIViewFloatAnimatableProperty * labelAlphaDrivingProgressAnimatableProperty;              //@synthesize labelAlphaDrivingProgressAnimatableProperty=_labelAlphaDrivingProgressAnimatableProperty - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                                                   //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                                              //@synthesize pageControl=_pageControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFolderController:(id)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)_prepareAnimation;
-(CAMediaTimingFunction *)timingFunction;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)_createAnimatableProperties;
-(UIViewFloatAnimatableProperty *)labelAlphaDrivingProgressAnimatableProperty;
-(double)_functionWithProgress:(double)arg1 distance:(double)arg2 ;
-(void)_updateLabelAlphaForPresentationValue:(BOOL)arg1 ;
-(void)_updateDockForFraction:(double)arg1 ;
-(double)_labelAlphaForFraction:(double)arg1 ;
-(void)_setAnimationFraction:(double)arg1 withCenter:(CGPoint)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateWithSettings:(id)arg1 ;
-(double)_zPositionForView:(id)arg1 center:(CGPoint)arg2 andFraction:(double)arg3 ;
-(double)_zPositionForPoint:(CGPoint)arg1 center:(CGPoint)arg2 andFraction:(double)arg3 ;
-(UIPageControl *)pageControl;
-(void)_cleanupAnimation;
-(void)setLabelAlphaDrivingProgressAnimatableProperty:(UIViewFloatAnimatableProperty *)arg1 ;
@end


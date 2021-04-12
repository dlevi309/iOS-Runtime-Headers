/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconZoomAnimator.h>

@class UIView, SBIconView, SBReversibleLayerPropertyAnimator, NSMutableArray, SBIcon, SBHScaleZoomSettings;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator {

	UIEdgeInsets _iconScootch;
	double _naturalVisualAltitude;
	UIView* _scalingView;
	SBIconView* _targetIconView;
	SBReversibleLayerPropertyAnimator* _homeScreenScaleAnimator;
	SBReversibleLayerPropertyAnimator* _targetIconScaleXAnimator;
	SBReversibleLayerPropertyAnimator* _targetIconScaleYAnimator;
	NSMutableArray* _animationCompletions;
	SBIcon* _targetIcon;
	UIView* _targetIconPositioningView;
	CGPoint _zoomScaleDimension;
	CGPoint _zoomedTargetIconCenter;
	CGPoint _targetIconCenter;

}

@property (nonatomic,retain) SBReversibleLayerPropertyAnimator * homeScreenScaleAnimator;               //@synthesize homeScreenScaleAnimator=_homeScreenScaleAnimator - In the implementation block
@property (nonatomic,retain) SBReversibleLayerPropertyAnimator * targetIconScaleXAnimator;              //@synthesize targetIconScaleXAnimator=_targetIconScaleXAnimator - In the implementation block
@property (nonatomic,retain) SBReversibleLayerPropertyAnimator * targetIconScaleYAnimator;              //@synthesize targetIconScaleYAnimator=_targetIconScaleYAnimator - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationCompletions;                                     //@synthesize animationCompletions=_animationCompletions - In the implementation block
@property (nonatomic,readonly) id<SBScaleIconZoomAnimationContaining> animationContainer; 
@property (nonatomic,readonly) SBIcon * targetIcon;                                                     //@synthesize targetIcon=_targetIcon - In the implementation block
@property (nonatomic,readonly) SBIconView * referenceIconView; 
@property (nonatomic,readonly) SBIconView * targetIconView; 
@property (nonatomic,readonly) UIView * targetIconContainerView; 
@property (nonatomic,readonly) UIView * defaultTargetIconContainerView; 
@property (nonatomic,readonly) UIView * targetIconPositioningView;                                      //@synthesize targetIconPositioningView=_targetIconPositioningView - In the implementation block
@property (nonatomic,readonly) double zoomScale; 
@property (nonatomic,readonly) double maxHomeScreenZoomScale; 
@property (nonatomic,readonly) BOOL fadesHomeScreen; 
@property (nonatomic,readonly) CGPoint zoomScaleDimension;                                              //@synthesize zoomScaleDimension=_zoomScaleDimension - In the implementation block
@property (nonatomic,readonly) CGPoint zoomedTargetIconCenter;                                          //@synthesize zoomedTargetIconCenter=_zoomedTargetIconCenter - In the implementation block
@property (nonatomic,readonly) CGPoint targetIconCenter;                                                //@synthesize targetIconCenter=_targetIconCenter - In the implementation block
@property (nonatomic,retain) SBHScaleZoomSettings * settings; 
+(BOOL)validateAnimationContainer:(id)arg1 targetIcon:(id)arg2 ;
-(double)zoomScale;
-(id)initWithAnimationContainer:(id)arg1 targetIcon:(id)arg2 ;
-(void)_prepareAnimation;
-(CGPoint)_zoomedIconCenter;
-(CGRect)_zoomedFrame;
-(SBIconView *)targetIconView;
-(void)_setAnimationFraction:(double)arg1 ;
-(SBIcon *)targetIcon;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(double)maxHomeScreenZoomScale;
-(BOOL)fadesHomeScreen;
-(SBIconView *)referenceIconView;
-(CGPoint)zoomScaleDimension;
-(UIView *)targetIconPositioningView;
-(CGPoint)_referenceIconImageCenter;
-(UIView *)targetIconContainerView;
-(CGPoint)targetIconCenter;
-(CGPoint)zoomedTargetIconCenter;
-(UIView *)defaultTargetIconContainerView;
-(BOOL)shouldMatchMoveWithDock;
-(BOOL)_forceSquareZoomDimension;
-(void)_setZoomScale:(CGPoint)arg1 ;
-(void)_configureTargetIconPositioningView:(id)arg1 ;
-(void)_applyZoomFraction:(double)arg1 ;
-(void)_applyVisualAltitudeFraction:(double)arg1 ;
-(void)_applyIconGridFadeFraction:(double)arg1 ;
-(NSMutableArray *)animationCompletions;
-(void)setHomeScreenScaleAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
-(void)setTargetIconScaleXAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
-(void)setTargetIconScaleYAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
-(void)_setIconAlpha:(double)arg1 ;
-(void)hintToFraction:(double)arg1 ;
-(SBReversibleLayerPropertyAnimator *)homeScreenScaleAnimator;
-(SBReversibleLayerPropertyAnimator *)targetIconScaleXAnimator;
-(SBReversibleLayerPropertyAnimator *)targetIconScaleYAnimator;
-(double)_homeScreenScaleForZoomFraction:(double)arg1 ;
-(CGPoint)_targetIconScaleForZoomFraction:(double)arg1 ;
-(double)_zoomedVisualAltitude;
-(void)setAnimationCompletions:(NSMutableArray *)arg1 ;
@end


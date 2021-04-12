/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBHomeGestureExclusionTrapezoidSettings;

@interface SBHomeGestureSettings : PTSettings {

	BOOL _homeGestureEnabled;
	BOOL _recognizeAlongEdge;
	BOOL _snapToMaxVelocityThresholdAfterAccelerationDip;
	BOOL _injectGestureVelocityForZoomDown;
	BOOL _onlyInjectVelocityForShortFlicks;
	BOOL _preventMultipleEdgesAfterAppInteraction;
	BOOL _resetSwitcherListAfterAppInteraction;
	double _hysteresis;
	double _minimumYDistanceForHomeOrAppSwitcher;
	double _minimumYDistanceToConsiderAccelerationDip;
	double _minimumXDistanceForFirstArcSwipe;
	double _minimumXDistanceToTriggerArcByDistancePortrait;
	double _minimumXDistanceToTriggerArcByDistanceLandscape;
	double _maximumYDistanceToTriggerArcByDistance;
	double _maximumYDistanceToTriggerArcByFlick;
	double _velocityYThresholdForUnconditionalHome;
	double _minimumYVelocityForHome;
	double _velocityXThresholdForUnconditionalArcSwipe;
	double _minimumYVelocityForArcSwipe;
	double _normalizedDistanceYThresholdForUnconditionalHome;
	double _normalizedDistanceYThresholdRangeForUnconditionalHome;
	double _pauseVelocityThresholdForAppSwitcher;
	double _pauseVelocityThresholdForDefiniteAppSwitcher;
	double _maximumAdaptivePauseVelocityThresholdForAppSwitcher;
	double _maximumAdaptiveVelocityThresholdForDock;
	double _appSwitcherVelocityThresholdIncreasingRateFraction;
	double _dockVelocityThresholdIncreasingRateFraction;
	double _adaptiveThresholdsDecreasingRateFraction;
	double _velocitySlopeThresholdForBottomSwipeUpArc;
	double _velocitySlopeThresholdForScrunchArc;
	double _velocitySlopeThresholdForCurrentLayout;
	double _edgeDistanceToCorrectGestureFinalDestination;
	double _edgeAngleWindow;
	double _cardFlyInMaximumVelocityThreshold;
	double _cardFlyInDelayAfterEnteringAppSwitcher;
	double _maximumDistanceYThresholdToPresentDock;
	double _homeGestureCenterZoomDownCenterYOffsetFactor;
	double _verticalRubberbandStart;
	double _verticalRubberbandEnd;
	double _verticalRubberbandDistance;
	double _verticalRubberbandExponent;
	double _horizontalRubberbandStart;
	double _horizontalRubberbandEnd;
	double _horizontalRubberbandDistance;
	double _horizontalRubberbandExponent;
	double _positionVelocityXPercentOfGestureVelocityX;
	double _positionVelocityYPercentOfGestureVelocityY;
	double _scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
	double _maximumScaleVelocity;
	double _secondsToAllowMultipleEdges;
	double _secondsToResetSwitcherListAfterTransition;
	double _travelDistanceForTranslatingScreenHeight;
	double _minimumDistanceThresholdToScaleMultiplier;
	SBHomeGestureExclusionTrapezoidSettings* _exclusionTrapezoidSettings;

}

@property (assign,getter=isHomeGestureEnabled,nonatomic) BOOL homeGestureEnabled;                               //@synthesize homeGestureEnabled=_homeGestureEnabled - In the implementation block
@property (assign,nonatomic) double hysteresis;                                                                 //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) BOOL recognizeAlongEdge;                                                           //@synthesize recognizeAlongEdge=_recognizeAlongEdge - In the implementation block
@property (assign,nonatomic) double minimumYDistanceForHomeOrAppSwitcher;                                       //@synthesize minimumYDistanceForHomeOrAppSwitcher=_minimumYDistanceForHomeOrAppSwitcher - In the implementation block
@property (assign,nonatomic) double minimumYDistanceToConsiderAccelerationDip;                                  //@synthesize minimumYDistanceToConsiderAccelerationDip=_minimumYDistanceToConsiderAccelerationDip - In the implementation block
@property (assign,nonatomic) double minimumXDistanceForFirstArcSwipe;                                           //@synthesize minimumXDistanceForFirstArcSwipe=_minimumXDistanceForFirstArcSwipe - In the implementation block
@property (assign,nonatomic) double minimumXDistanceToTriggerArcByDistancePortrait;                             //@synthesize minimumXDistanceToTriggerArcByDistancePortrait=_minimumXDistanceToTriggerArcByDistancePortrait - In the implementation block
@property (assign,nonatomic) double minimumXDistanceToTriggerArcByDistanceLandscape;                            //@synthesize minimumXDistanceToTriggerArcByDistanceLandscape=_minimumXDistanceToTriggerArcByDistanceLandscape - In the implementation block
@property (assign,nonatomic) double maximumYDistanceToTriggerArcByDistance;                                     //@synthesize maximumYDistanceToTriggerArcByDistance=_maximumYDistanceToTriggerArcByDistance - In the implementation block
@property (assign,nonatomic) double maximumYDistanceToTriggerArcByFlick;                                        //@synthesize maximumYDistanceToTriggerArcByFlick=_maximumYDistanceToTriggerArcByFlick - In the implementation block
@property (assign,nonatomic) double velocityYThresholdForUnconditionalHome;                                     //@synthesize velocityYThresholdForUnconditionalHome=_velocityYThresholdForUnconditionalHome - In the implementation block
@property (assign,nonatomic) double minimumYVelocityForHome;                                                    //@synthesize minimumYVelocityForHome=_minimumYVelocityForHome - In the implementation block
@property (assign,nonatomic) double velocityXThresholdForUnconditionalArcSwipe;                                 //@synthesize velocityXThresholdForUnconditionalArcSwipe=_velocityXThresholdForUnconditionalArcSwipe - In the implementation block
@property (assign,nonatomic) double minimumYVelocityForArcSwipe;                                                //@synthesize minimumYVelocityForArcSwipe=_minimumYVelocityForArcSwipe - In the implementation block
@property (assign,nonatomic) double normalizedDistanceYThresholdForUnconditionalHome;                           //@synthesize normalizedDistanceYThresholdForUnconditionalHome=_normalizedDistanceYThresholdForUnconditionalHome - In the implementation block
@property (assign,nonatomic) double normalizedDistanceYThresholdRangeForUnconditionalHome;                      //@synthesize normalizedDistanceYThresholdRangeForUnconditionalHome=_normalizedDistanceYThresholdRangeForUnconditionalHome - In the implementation block
@property (assign,nonatomic) double pauseVelocityThresholdForAppSwitcher;                                       //@synthesize pauseVelocityThresholdForAppSwitcher=_pauseVelocityThresholdForAppSwitcher - In the implementation block
@property (assign,nonatomic) double pauseVelocityThresholdForDefiniteAppSwitcher;                               //@synthesize pauseVelocityThresholdForDefiniteAppSwitcher=_pauseVelocityThresholdForDefiniteAppSwitcher - In the implementation block
@property (assign,nonatomic) double maximumAdaptivePauseVelocityThresholdForAppSwitcher;                        //@synthesize maximumAdaptivePauseVelocityThresholdForAppSwitcher=_maximumAdaptivePauseVelocityThresholdForAppSwitcher - In the implementation block
@property (assign,nonatomic) BOOL snapToMaxVelocityThresholdAfterAccelerationDip;                               //@synthesize snapToMaxVelocityThresholdAfterAccelerationDip=_snapToMaxVelocityThresholdAfterAccelerationDip - In the implementation block
@property (assign,nonatomic) double maximumAdaptiveVelocityThresholdForDock;                                    //@synthesize maximumAdaptiveVelocityThresholdForDock=_maximumAdaptiveVelocityThresholdForDock - In the implementation block
@property (assign,nonatomic) double appSwitcherVelocityThresholdIncreasingRateFraction;                         //@synthesize appSwitcherVelocityThresholdIncreasingRateFraction=_appSwitcherVelocityThresholdIncreasingRateFraction - In the implementation block
@property (assign,nonatomic) double dockVelocityThresholdIncreasingRateFraction;                                //@synthesize dockVelocityThresholdIncreasingRateFraction=_dockVelocityThresholdIncreasingRateFraction - In the implementation block
@property (assign,nonatomic) double adaptiveThresholdsDecreasingRateFraction;                                   //@synthesize adaptiveThresholdsDecreasingRateFraction=_adaptiveThresholdsDecreasingRateFraction - In the implementation block
@property (assign,nonatomic) double velocitySlopeThresholdForBottomSwipeUpArc;                                  //@synthesize velocitySlopeThresholdForBottomSwipeUpArc=_velocitySlopeThresholdForBottomSwipeUpArc - In the implementation block
@property (assign,nonatomic) double velocitySlopeThresholdForScrunchArc;                                        //@synthesize velocitySlopeThresholdForScrunchArc=_velocitySlopeThresholdForScrunchArc - In the implementation block
@property (assign,nonatomic) double velocitySlopeThresholdForCurrentLayout;                                     //@synthesize velocitySlopeThresholdForCurrentLayout=_velocitySlopeThresholdForCurrentLayout - In the implementation block
@property (assign,nonatomic) double edgeDistanceToCorrectGestureFinalDestination;                               //@synthesize edgeDistanceToCorrectGestureFinalDestination=_edgeDistanceToCorrectGestureFinalDestination - In the implementation block
@property (assign,nonatomic) double edgeAngleWindow;                                                            //@synthesize edgeAngleWindow=_edgeAngleWindow - In the implementation block
@property (assign,nonatomic) double cardFlyInMaximumVelocityThreshold;                                          //@synthesize cardFlyInMaximumVelocityThreshold=_cardFlyInMaximumVelocityThreshold - In the implementation block
@property (assign,nonatomic) double cardFlyInDelayAfterEnteringAppSwitcher;                                     //@synthesize cardFlyInDelayAfterEnteringAppSwitcher=_cardFlyInDelayAfterEnteringAppSwitcher - In the implementation block
@property (assign,nonatomic) double maximumDistanceYThresholdToPresentDock;                                     //@synthesize maximumDistanceYThresholdToPresentDock=_maximumDistanceYThresholdToPresentDock - In the implementation block
@property (assign,nonatomic) double homeGestureCenterZoomDownCenterYOffsetFactor;                               //@synthesize homeGestureCenterZoomDownCenterYOffsetFactor=_homeGestureCenterZoomDownCenterYOffsetFactor - In the implementation block
@property (assign,nonatomic) double verticalRubberbandStart;                                                    //@synthesize verticalRubberbandStart=_verticalRubberbandStart - In the implementation block
@property (assign,nonatomic) double verticalRubberbandEnd;                                                      //@synthesize verticalRubberbandEnd=_verticalRubberbandEnd - In the implementation block
@property (assign,nonatomic) double verticalRubberbandDistance;                                                 //@synthesize verticalRubberbandDistance=_verticalRubberbandDistance - In the implementation block
@property (assign,nonatomic) double verticalRubberbandExponent;                                                 //@synthesize verticalRubberbandExponent=_verticalRubberbandExponent - In the implementation block
@property (assign,nonatomic) double horizontalRubberbandStart;                                                  //@synthesize horizontalRubberbandStart=_horizontalRubberbandStart - In the implementation block
@property (assign,nonatomic) double horizontalRubberbandEnd;                                                    //@synthesize horizontalRubberbandEnd=_horizontalRubberbandEnd - In the implementation block
@property (assign,nonatomic) double horizontalRubberbandDistance;                                               //@synthesize horizontalRubberbandDistance=_horizontalRubberbandDistance - In the implementation block
@property (assign,nonatomic) double horizontalRubberbandExponent;                                               //@synthesize horizontalRubberbandExponent=_horizontalRubberbandExponent - In the implementation block
@property (assign,nonatomic) BOOL injectGestureVelocityForZoomDown;                                             //@synthesize injectGestureVelocityForZoomDown=_injectGestureVelocityForZoomDown - In the implementation block
@property (assign,nonatomic) BOOL onlyInjectVelocityForShortFlicks;                                             //@synthesize onlyInjectVelocityForShortFlicks=_onlyInjectVelocityForShortFlicks - In the implementation block
@property (assign,nonatomic) double positionVelocityXPercentOfGestureVelocityX;                                 //@synthesize positionVelocityXPercentOfGestureVelocityX=_positionVelocityXPercentOfGestureVelocityX - In the implementation block
@property (assign,nonatomic) double positionVelocityYPercentOfGestureVelocityY;                                 //@synthesize positionVelocityYPercentOfGestureVelocityY=_positionVelocityYPercentOfGestureVelocityY - In the implementation block
@property (assign,nonatomic) double scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;                  //@synthesize scaleVelocityPercentOfGestureVelocityYDividedByViewHeight=_scaleVelocityPercentOfGestureVelocityYDividedByViewHeight - In the implementation block
@property (assign,nonatomic) double maximumScaleVelocity;                                                       //@synthesize maximumScaleVelocity=_maximumScaleVelocity - In the implementation block
@property (assign,nonatomic) double secondsToAllowMultipleEdges;                                                //@synthesize secondsToAllowMultipleEdges=_secondsToAllowMultipleEdges - In the implementation block
@property (assign,nonatomic) BOOL preventMultipleEdgesAfterAppInteraction;                                      //@synthesize preventMultipleEdgesAfterAppInteraction=_preventMultipleEdgesAfterAppInteraction - In the implementation block
@property (assign,nonatomic) double secondsToResetSwitcherListAfterTransition;                                  //@synthesize secondsToResetSwitcherListAfterTransition=_secondsToResetSwitcherListAfterTransition - In the implementation block
@property (assign,nonatomic) BOOL resetSwitcherListAfterAppInteraction;                                         //@synthesize resetSwitcherListAfterAppInteraction=_resetSwitcherListAfterAppInteraction - In the implementation block
@property (assign,nonatomic) double travelDistanceForTranslatingScreenHeight;                                   //@synthesize travelDistanceForTranslatingScreenHeight=_travelDistanceForTranslatingScreenHeight - In the implementation block
@property (assign,nonatomic) double minimumDistanceThresholdToScaleMultiplier;                                  //@synthesize minimumDistanceThresholdToScaleMultiplier=_minimumDistanceThresholdToScaleMultiplier - In the implementation block
@property (nonatomic,retain) SBHomeGestureExclusionTrapezoidSettings * exclusionTrapezoidSettings;              //@synthesize exclusionTrapezoidSettings=_exclusionTrapezoidSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setSecondsToResetSwitcherListAfterTransition:(double)arg1 ;
-(void)setHorizontalRubberbandDistance:(double)arg1 ;
-(void)setSecondsToAllowMultipleEdges:(double)arg1 ;
-(void)setNormalizedDistanceYThresholdRangeForUnconditionalHome:(double)arg1 ;
-(void)setMinimumXDistanceForFirstArcSwipe:(double)arg1 ;
-(void)setPauseVelocityThresholdForDefiniteAppSwitcher:(double)arg1 ;
-(void)setMaximumYDistanceToTriggerArcByDistance:(double)arg1 ;
-(double)secondsToResetSwitcherListAfterTransition;
-(double)edgeDistanceToCorrectGestureFinalDestination;
-(void)setVerticalRubberbandDistance:(double)arg1 ;
-(void)setEdgeDistanceToCorrectGestureFinalDestination:(double)arg1 ;
-(void)setMinimumYDistanceToConsiderAccelerationDip:(double)arg1 ;
-(void)setMinimumDistanceThresholdToScaleMultiplier:(double)arg1 ;
-(BOOL)resetSwitcherListAfterAppInteraction;
-(void)setVelocityYThresholdForUnconditionalHome:(double)arg1 ;
-(double)normalizedDistanceYThresholdForUnconditionalHome;
-(double)hysteresis;
-(double)verticalRubberbandStart;
-(double)horizontalRubberbandEnd;
-(void)setHomeGestureCenterZoomDownCenterYOffsetFactor:(double)arg1 ;
-(double)minimumDistanceThresholdToScaleMultiplier;
-(void)setDockVelocityThresholdIncreasingRateFraction:(double)arg1 ;
-(double)adaptiveThresholdsDecreasingRateFraction;
-(void)setMaximumAdaptivePauseVelocityThresholdForAppSwitcher:(double)arg1 ;
-(double)pauseVelocityThresholdForAppSwitcher;
-(double)horizontalRubberbandDistance;
-(void)setMaximumDistanceYThresholdToPresentDock:(double)arg1 ;
-(double)minimumYVelocityForArcSwipe;
-(double)travelDistanceForTranslatingScreenHeight;
-(double)maximumScaleVelocity;
-(void)setVelocitySlopeThresholdForScrunchArc:(double)arg1 ;
-(void)setHomeGestureEnabled:(BOOL)arg1 ;
-(double)edgeAngleWindow;
-(void)setPositionVelocityYPercentOfGestureVelocityY:(double)arg1 ;
-(void)setInjectGestureVelocityForZoomDown:(BOOL)arg1 ;
-(void)setOnlyInjectVelocityForShortFlicks:(BOOL)arg1 ;
-(double)horizontalRubberbandExponent;
-(void)setHorizontalRubberbandEnd:(double)arg1 ;
-(void)setEdgeAngleWindow:(double)arg1 ;
-(void)setHorizontalRubberbandStart:(double)arg1 ;
-(void)setAdaptiveThresholdsDecreasingRateFraction:(double)arg1 ;
-(void)setHorizontalRubberbandExponent:(double)arg1 ;
-(void)setNormalizedDistanceYThresholdForUnconditionalHome:(double)arg1 ;
-(double)maximumAdaptiveVelocityThresholdForDock;
-(double)velocitySlopeThresholdForCurrentLayout;
-(void)setCardFlyInDelayAfterEnteringAppSwitcher:(double)arg1 ;
-(double)verticalRubberbandExponent;
-(void)setMinimumYDistanceForHomeOrAppSwitcher:(double)arg1 ;
-(double)verticalRubberbandEnd;
-(double)positionVelocityXPercentOfGestureVelocityX;
-(double)maximumDistanceYThresholdToPresentDock;
-(void)setMinimumXDistanceToTriggerArcByDistanceLandscape:(double)arg1 ;
-(BOOL)recognizeAlongEdge;
-(double)minimumXDistanceForFirstArcSwipe;
-(void)setVerticalRubberbandStart:(double)arg1 ;
-(void)setMaximumAdaptiveVelocityThresholdForDock:(double)arg1 ;
-(void)setTravelDistanceForTranslatingScreenHeight:(double)arg1 ;
-(void)setVerticalRubberbandEnd:(double)arg1 ;
-(void)setMinimumYVelocityForHome:(double)arg1 ;
-(double)appSwitcherVelocityThresholdIncreasingRateFraction;
-(double)velocityYThresholdForUnconditionalHome;
-(double)normalizedDistanceYThresholdRangeForUnconditionalHome;
-(double)maximumYDistanceToTriggerArcByFlick;
-(void)setResetSwitcherListAfterAppInteraction:(BOOL)arg1 ;
-(void)setMinimumXDistanceToTriggerArcByDistancePortrait:(double)arg1 ;
-(void)setPauseVelocityThresholdForAppSwitcher:(double)arg1 ;
-(double)minimumYDistanceToConsiderAccelerationDip;
-(void)setExclusionTrapezoidSettings:(SBHomeGestureExclusionTrapezoidSettings *)arg1 ;
-(double)secondsToAllowMultipleEdges;
-(double)scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
-(double)horizontalRubberbandStart;
-(void)setMaximumScaleVelocity:(double)arg1 ;
-(double)dockVelocityThresholdIncreasingRateFraction;
-(double)velocitySlopeThresholdForScrunchArc;
-(double)minimumYVelocityForHome;
-(void)setHysteresis:(double)arg1 ;
-(void)setVerticalRubberbandExponent:(double)arg1 ;
-(void)setScaleVelocityPercentOfGestureVelocityYDividedByViewHeight:(double)arg1 ;
-(double)verticalRubberbandDistance;
-(BOOL)snapToMaxVelocityThresholdAfterAccelerationDip;
-(double)homeGestureCenterZoomDownCenterYOffsetFactor;
-(double)minimumXDistanceToTriggerArcByDistanceLandscape;
-(double)maximumYDistanceToTriggerArcByDistance;
-(double)velocitySlopeThresholdForBottomSwipeUpArc;
-(void)setPositionVelocityXPercentOfGestureVelocityX:(double)arg1 ;
-(void)setVelocityXThresholdForUnconditionalArcSwipe:(double)arg1 ;
-(BOOL)isHomeGestureEnabled;
-(double)pauseVelocityThresholdForDefiniteAppSwitcher;
-(void)setCardFlyInMaximumVelocityThreshold:(double)arg1 ;
-(void)setAppSwitcherVelocityThresholdIncreasingRateFraction:(double)arg1 ;
-(void)setSnapToMaxVelocityThresholdAfterAccelerationDip:(BOOL)arg1 ;
-(double)maximumAdaptivePauseVelocityThresholdForAppSwitcher;
-(double)positionVelocityYPercentOfGestureVelocityY;
-(void)setRecognizeAlongEdge:(BOOL)arg1 ;
-(double)cardFlyInMaximumVelocityThreshold;
-(void)setVelocitySlopeThresholdForBottomSwipeUpArc:(double)arg1 ;
-(void)setPreventMultipleEdgesAfterAppInteraction:(BOOL)arg1 ;
-(BOOL)onlyInjectVelocityForShortFlicks;
-(SBHomeGestureExclusionTrapezoidSettings *)exclusionTrapezoidSettings;
-(void)setLatchDefaults;
-(void)setMaximumYDistanceToTriggerArcByFlick:(double)arg1 ;
-(BOOL)injectGestureVelocityForZoomDown;
-(double)minimumXDistanceToTriggerArcByDistancePortrait;
-(double)cardFlyInDelayAfterEnteringAppSwitcher;
-(void)setVelocitySlopeThresholdForCurrentLayout:(double)arg1 ;
-(double)velocityXThresholdForUnconditionalArcSwipe;
-(BOOL)preventMultipleEdgesAfterAppInteraction;
-(void)setHomeGestureTuningDefaults;
-(void)setMinimumYVelocityForArcSwipe:(double)arg1 ;
-(double)minimumYDistanceForHomeOrAppSwitcher;
@end


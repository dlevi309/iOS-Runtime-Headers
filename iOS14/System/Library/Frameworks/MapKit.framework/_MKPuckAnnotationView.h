/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>

@protocol MKUserLocationHeadingIndicator;
@class CALayer, UIImage, VKNavigationPuck, _MKPuckAccuracyLayer, CLLocation, NSString;

@interface _MKPuckAnnotationView : MKAnnotationView <VKPuckAnimatorTarget> {

	CALayer* _puckLayer;
	BOOL _shouldHidePuckWhenAccuracyVisible;
	BOOL _shouldInnerPulse;
	BOOL _shouldShowOuterRing;
	BOOL _shouldShowDynamicLocationAnimations;
	UIImage* _innerImageMask;
	BOOL _rotateInnerImageToMatchCourse;
	CALayer* _baseLayer;
	double _accuracyRingAlpha;
	CALayer* _puckTransitionLayer;
	double _puckScale;
	CALayer* _innerCircleLayer;
	BOOL _isShowingStaleColor;
	BOOL _displaysPuckAsAccuracy;
	CALayer* _accuracyContainerLayer;
	CALayer* _headingContainerLayer;
	VKNavigationPuck* _navigationPuckMarker;
	long long _zoomDirection;
	CALayer* _pulseLayer;
	_MKPuckAccuracyLayer* _accuracyLayer;
	BOOL _allowsPulse;
	BOOL _shouldPulse;
	BOOL _canShowHeadingIndicator;
	BOOL _shouldDisplayHeading;
	BOOL _shouldDisplayInaccurateHeading;
	BOOL _forceHeadingUp;
	BOOL _hasValidHeading;
	double _mapRotation;
	double _heading;
	double _headingAccuracy;
	CALayer*<MKUserLocationHeadingIndicator> _headingLayer;
	BOOL _headingLayerTracksAccuracy;
	BOOL _allowsAccuracyRing;
	BOOL _stale;
	BOOL _effectsEnabled;
	double _maxRadiusToShowAccuracyRing;
	double _presentationCourse;
	double _locationAccuracy;
	CLLocation* _lastLocation;
	BOOL _hasExplicitCollisionMode;
	BOOL _animatingPresentationAccuracy;
	double _presentationAccuracy;
	id _minAccuracyConfigListener;
	id _newPuckConfigListener;
	double _minimumAccuracyRadius;
	id _minUncertaintyConfigListener;
	double _minimumAccuracyUncertainty;
	BOOL _forcesConeIndicator;
	long long _headingIndicatorStyle;

}

@property (assign,nonatomic) BOOL shouldDisplayInaccurateHeading;                                                                                                               //@synthesize shouldDisplayInaccurateHeading=_shouldDisplayInaccurateHeading - In the implementation block
@property (assign,nonatomic) BOOL forcesConeIndicator;                                                                                                                          //@synthesize forcesConeIndicator=_forcesConeIndicator - In the implementation block
@property (assign,setter=_setMinimumAccuracyUncertainty:,getter=_minimumAccuracyUncertainty,nonatomic) double minimumAccuracyUncertainty; 
@property (assign,setter=_setForceHeadingUp:,getter=_forceHeadingUp,nonatomic) BOOL forceHeadingUp;                                                                             //@synthesize forceHeadingUp=_forceHeadingUp - In the implementation block
@property (assign,setter=_setShouldShowDynamicLocationAnimations:,getter=_shouldShowDynamicLocationAnimations,nonatomic) BOOL shouldShowDynamicLocationAnimations;              //@synthesize shouldShowDynamicLocationAnimations=_shouldShowDynamicLocationAnimations - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) BOOL effectsEnabled;                                                                                                       //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,setter=setStale:,getter=isStale,nonatomic) BOOL stale;                                                                                                        //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) long long zoomDirection;                                                                                                                           //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (assign,setter=_setDisplaysPuckAsAccuracy:,getter=_displaysPuckAsAccuracy,nonatomic) BOOL displaysPuckAsAccuracy;                                                     //@synthesize displaysPuckAsAccuracy=_displaysPuckAsAccuracy - In the implementation block
@property (assign,getter=isAnimatingPresentationAccuracy,nonatomic) BOOL animatingPresentationAccuracy;                                                                         //@synthesize animatingPresentationAccuracy=_animatingPresentationAccuracy - In the implementation block
@property (assign,nonatomic) double presentationAccuracy;                                                                                                                       //@synthesize presentationAccuracy=_presentationAccuracy - In the implementation block
@property (nonatomic,readonly) CLLocation * lastLocation;                                                                                                                       //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,setter=_setMinimumAccuracyRadius:,getter=_minimumAccuracyRadius,nonatomic) double minimumAccuracyRadius;                                                      //@synthesize minimumAccuracyRadius=_minimumAccuracyRadius - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayHeading;                                                                                                                         //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) BOOL canShowHeadingIndicator;                                                                                                                      //@synthesize canShowHeadingIndicator=_canShowHeadingIndicator - In the implementation block
@property (assign,nonatomic) double heading;                                                                                                                                    //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                                                                                                            //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                                                                                                         //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (getter=_locationAccuracyInScreenPoints,nonatomic,readonly) double locationAccuracyInScreenPoints; 
@property (assign,nonatomic) long long headingIndicatorStyle;                                                                                                                   //@synthesize headingIndicatorStyle=_headingIndicatorStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsPulse;                                                                                                                                  //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) BOOL shouldInnerPulse;                                                                                                                             //@synthesize shouldInnerPulse=_shouldInnerPulse - In the implementation block
@property (assign,nonatomic) BOOL shouldShowOuterRing;                                                                                                                          //@synthesize shouldShowOuterRing=_shouldShowOuterRing - In the implementation block
@property (assign,nonatomic) BOOL allowsAccuracyRing;                                                                                                                           //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) double maxRadiusToShowAccuracyRing;                                                                                                                //@synthesize maxRadiusToShowAccuracyRing=_maxRadiusToShowAccuracyRing - In the implementation block
@property (assign,setter=_setShouldHidePuckWhenAccuracyVisible:,getter=_shouldHidePuckWhenAccuracyVisible,nonatomic) BOOL shouldHidePuckWhenAccuracyVisible;                    //@synthesize shouldHidePuckWhenAccuracyVisible=_shouldHidePuckWhenAccuracyVisible - In the implementation block
@property (assign,nonatomic) double puckAlpha; 
@property (assign,nonatomic) double accuracyRingAlpha;                                                                                                                          //@synthesize accuracyRingAlpha=_accuracyRingAlpha - In the implementation block
@property (nonatomic,retain) UIImage * innerImageMask;                                                                                                                          //@synthesize innerImageMask=_innerImageMask - In the implementation block
@property (assign,nonatomic) BOOL rotateInnerImageToMatchCourse;                                                                                                                //@synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse - In the implementation block
@property (assign,nonatomic) double presentationCourse;                                                                                                                         //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)baseDiameter;
+(CGPoint)_calloutOffset;
+(double)innerDiameter;
+(double)outerRingWidth;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CLLocation *)lastLocation;
-(double)heading;
-(void)_updateLegacyConfiguration;
-(void)tintColorDidChange;
-(double)maxRadiusToShowAccuracyRing;
-(double)locationAccuracy;
-(double)accuracyRingAlpha;
-(double)_minimumAccuracyRadius;
-(BOOL)_shouldShowDynamicLocationAnimations;
-(long long)headingIndicatorStyle;
-(BOOL)shouldInnerPulse;
-(BOOL)rotateInnerImageToMatchCourse;
-(BOOL)_forceHeadingUp;
-(BOOL)_shouldHidePuckWhenAccuracyVisible;
-(BOOL)isAnimatingPresentationAccuracy;
-(BOOL)_displaysPuckAsAccuracy;
-(void)setPresentationAccuracy:(double)arg1 ;
-(void)_setMapDisplayStyle:(SCD_Struct_MK28)arg1 ;
-(id)_baseLayer;
-(void)setForcesConeIndicator:(BOOL)arg1 ;
-(void)_setForceHeadingUp:(BOOL)arg1 ;
-(void)setShouldDisplayInaccurateHeading:(BOOL)arg1 ;
-(float)_selectionPriority;
-(float)opacity;
-(void)setZoomDirection:(long long)arg1 ;
-(double)presentationAccuracy;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)locationManagerFailedToUpdateLocation;
-(void)setStale:(BOOL)arg1 ;
-(BOOL)_balloonCalloutShouldShowArrow;
-(void)setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)_tracking;
-(UIEdgeInsets)_annotationTrackingInsets;
-(void)_setTracking:(BOOL)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)_setMapRotationRadians:(double)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_updateFromMap;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)setDisplayPriority:(float)arg1 ;
-(void)setCollisionMode:(long long)arg1 ;
-(void)layoutSubviews;
-(BOOL)isStale;
-(void)didMoveToWindow;
-(id)_pulseLayer;
-(CGPoint)calloutOffset;
-(id)_vkNavigationPuckMarker;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(void)setShouldDisplayHeading:(BOOL)arg1 ;
-(void)setHeadingAccuracy:(double)arg1 ;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_updateBaseImage;
-(void)_setMapType:(unsigned long long)arg1 ;
-(double)presentationCourse;
-(CGRect)_significantBounds;
-(unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1 ;
-(void)_pausePulse;
-(BOOL)allowsPulse;
-(double)headingAccuracy;
-(void)_updateLayers;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)collisionMode;
-(void)setHeading:(double)arg1 ;
-(double)puckAlpha;
-(BOOL)_isSelectable;
-(void)_setupLayers;
-(void)_setMinimumAccuracyRadius:(double)arg1 ;
-(void)setShouldInnerPulse:(BOOL)arg1 ;
-(BOOL)shouldDisplayHeading;
-(void)_updatePulseColor;
-(void)_updateInnerImage;
-(id)_currentInnerColor;
-(id)_createFakePuckLayer;
-(void)_updateHeadingIndicators;
-(void)_updateShowHeadingLayerAnimatedIfPossible:(BOOL)arg1 ;
-(void)_updateToReflectLocationAccuracyWithDuration:(double)arg1 allowShowHideAnimation:(BOOL)arg2 ;
-(void)_updateInnerCourseRotation;
-(void)_updateAccuracyColors;
-(void)_updatePulse;
-(void)_updatePulseAnimation;
-(void)_updateAccuracyAnimation;
-(void)_setHeadingLayerHidden:(BOOL)arg1 ;
-(void)_updateInnerMaskLayer;
-(BOOL)shouldShowOuterRing;
-(void)_resetInnerPulseFrame;
-(BOOL)_isLocationStale:(id)arg1 ;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(void)_updateShowHeadingLayer;
-(BOOL)_shouldPulseForLocation:(id)arg1 ;
-(BOOL)_hideLargeAccuracyRing;
-(double)_locationAccuracyInScreenPoints;
-(id)_innerPulseAnimation;
-(id)_effectiveTintColor;
-(void)_updateAccuracyOpacityForRadius:(double)arg1 duration:(double)arg2 ;
-(void)_updatePuckVisibilityForRadius:(double)arg1 previousRadius:(double)arg2 duration:(double)arg3 ;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(id)_pulseAnimation;
-(void)dealloc;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(void)_removePulse;
-(BOOL)isEffectsEnabled;
-(void)_resumePulse;
-(BOOL)_shouldShowAccuracyRing;
-(long long)_enforcedHeadingIndicatorStyle;
-(void)_updateHeadingLayerForStyleChange:(BOOL)arg1 ;
-(BOOL)forcesConeIndicator;
-(void)_updateShowHeadingLayer:(BOOL)arg1 animatedIfPossible:(BOOL)arg2 ;
-(void)setHeadingIndicatorStyle:(long long)arg1 ;
-(void)setPuckAlpha:(double)arg1 ;
-(void)setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(void)_setDisplaysPuckAsAccuracy:(BOOL)arg1 ;
-(void)setPuckScale:(double)arg1 ;
-(void)setShouldShowOuterRing:(BOOL)arg1 ;
-(void)setInnerImageMask:(UIImage *)arg1 ;
-(void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2 ;
-(void)setAllowsAccuracyRing:(BOOL)arg1 ;
-(double)_minimumAccuracyUncertainty;
-(void)_setMinimumAccuracyUncertainty:(double)arg1 ;
-(void)setAccuracyRingAlpha:(double)arg1 ;
-(void)_setShouldHidePuckWhenAccuracyVisible:(BOOL)arg1 ;
-(void)setAnimatingPresentationAccuracy:(BOOL)arg1 ;
-(void)setAllowsPulse:(BOOL)arg1 ;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(void)_setShouldShowDynamicLocationAnimations:(BOOL)arg1 ;
-(void)setCanShowHeadingIndicator:(BOOL)arg1 ;
-(long long)zoomDirection;
-(BOOL)canShowHeadingIndicator;
-(BOOL)shouldDisplayInaccurateHeading;
-(BOOL)allowsAccuracyRing;
-(UIImage *)innerImageMask;
@end


/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>

@protocol MKUserLocationHeadingIndicator;
@class CALayer, UIImage, VKNavigationPuck, CLLocation, NSString;

@interface _MKPuckAnnotationView : MKAnnotationView <VKPuckAnimatorTarget> {

	CALayer* _puckLayer;
	BOOL _shouldInnerPulse;
	BOOL _shouldShowOuterRing;
	UIImage* _innerImageMask;
	BOOL _rotateInnerImageToMatchCourse;
	CALayer* _baseLayer;
	CALayer* _baseDimmingLayer;
	CALayer* _innerCircleLayer;
	BOOL _isShowingStaleColor;
	CALayer* _accuracyContainerLayer;
	VKNavigationPuck* _navigationPuckMarker;
	long long _zoomDirection;
	CALayer* _pulseLayer;
	CALayer* _accuracyLayer;
	BOOL _allowsPulse;
	BOOL _shouldPulse;
	BOOL _canShowHeadingIndicator;
	BOOL _shouldDisplayHeading;
	BOOL _shouldDisplayInaccurateHeading;
	double _heading;
	double _headingAccuracy;
	CALayer*<MKUserLocationHeadingIndicator> _headingLayer;
	BOOL _allowsAccuracyRing;
	BOOL _stale;
	BOOL _effectsEnabled;
	double _maxRadiusToShowAccuracyRing;
	double _presentationCourse;
	double _locationAccuracy;
	CLLocation* _lastLocation;
	BOOL _hasExplicitCollisionMode;
	BOOL _forcesConeIndicator;
	long long _headingIndicatorStyle;
	double _headingOffset;

}

@property (assign,setter=setStale:,getter=isStale,nonatomic) BOOL stale;               //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayInaccurateHeading;                      //@synthesize shouldDisplayInaccurateHeading=_shouldDisplayInaccurateHeading - In the implementation block
@property (assign,nonatomic) BOOL forcesConeIndicator;                                 //@synthesize forcesConeIndicator=_forcesConeIndicator - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                   //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (assign,nonatomic) double headingOffset;                                     //@synthesize headingOffset=_headingOffset - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) BOOL effectsEnabled;              //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,nonatomic) long long zoomDirection;                                  //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (nonatomic,readonly) CLLocation * lastLocation;                              //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayHeading;                                //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) BOOL canShowHeadingIndicator;                             //@synthesize canShowHeadingIndicator=_canShowHeadingIndicator - In the implementation block
@property (assign,nonatomic) double heading;                                           //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) long long headingIndicatorStyle;                          //@synthesize headingIndicatorStyle=_headingIndicatorStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsPulse;                                         //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) BOOL shouldInnerPulse;                                    //@synthesize shouldInnerPulse=_shouldInnerPulse - In the implementation block
@property (assign,nonatomic) BOOL shouldShowOuterRing;                                 //@synthesize shouldShowOuterRing=_shouldShowOuterRing - In the implementation block
@property (assign,nonatomic) BOOL allowsAccuracyRing;                                  //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) double maxRadiusToShowAccuracyRing;                       //@synthesize maxRadiusToShowAccuracyRing=_maxRadiusToShowAccuracyRing - In the implementation block
@property (assign,nonatomic) double puckAlpha; 
@property (assign,nonatomic) double accuracyRingAlpha; 
@property (nonatomic,retain) UIImage * innerImageMask;                                 //@synthesize innerImageMask=_innerImageMask - In the implementation block
@property (assign,nonatomic) BOOL rotateInnerImageToMatchCourse;                       //@synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double presentationCourse;                                //@synthesize presentationCourse=_presentationCourse - In the implementation block
+(unsigned long long)_zIndex;
+(double)baseDiameter;
+(unsigned long long)_selectedZIndex;
+(double)innerDiameter;
+(double)outerRingWidth;
-(BOOL)_tracking;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(double)heading;
-(double)headingAccuracy;
-(void)setHeading:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(id)_pulseLayer;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)collisionMode;
-(void)setCollisionMode:(long long)arg1 ;
-(CLLocation *)lastLocation;
-(BOOL)isStale;
-(void)_setMapDisplayStyle:(SCD_Struct_MK22)arg1 ;
-(void)setForcesConeIndicator:(BOOL)arg1 ;
-(void)setShouldDisplayInaccurateHeading:(BOOL)arg1 ;
-(void)setZoomDirection:(long long)arg1 ;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)setDisplayPriority:(float)arg1 ;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(void)setShouldDisplayHeading:(BOOL)arg1 ;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)locationManagerFailedToUpdateLocation;
-(void)setHeadingAccuracy:(double)arg1 ;
-(void)_setHeading:(double)arg1 headingOffset:(double)arg2 ;
-(void)setHeadingOffset:(double)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(id)_vkNavigationPuckMarker;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_updateFromMap;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setupLayers;
-(void)setShouldInnerPulse:(BOOL)arg1 ;
-(void)_updatePulseColor;
-(void)_updateAccuracyColors;
-(void)_updateInnerImage;
-(id)_baseDimmingLayer;
-(void)_updateHideLargeAccuracyRing;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(void)_updateInnerCourseRotation;
-(void)_updatePulse;
-(void)_updatePulseAnimation;
-(void)_updateBaseImage;
-(void)_updateInnerMaskLayer;
-(BOOL)shouldShowOuterRing;
-(void)_resetInnerPulseFrame;
-(BOOL)_isLocationStale:(id)arg1 ;
-(void)setStale:(BOOL)arg1 ;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(void)_updateShowHeadingLayer;
-(void)_updateLayers;
-(BOOL)_shouldPulseForLocation:(id)arg1 ;
-(CGColorRef)_accuracyFillColor;
-(BOOL)_shouldShowAccuracyRing;
-(BOOL)_hideLargeAccuracyRing;
-(id)_innerPulseAnimation;
-(unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1 ;
-(id)_pulseAnimation;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(void)_removePulse;
-(BOOL)isEffectsEnabled;
-(void)_pausePulse;
-(void)_resumePulse;
-(long long)_enforcedHeadingIndicatorStyle;
-(void)_updateHeadingLayerForStyleChange;
-(BOOL)forcesConeIndicator;
-(long long)headingIndicatorStyle;
-(void)_updateShowHeadingLayer:(BOOL)arg1 animatedIfPossible:(BOOL)arg2 ;
-(void)_updateShowHeadingLayerAnimatedIfPossible:(BOOL)arg1 ;
-(id)_baseLayer;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(void)setPresentationCourse:(double)arg1 ;
-(double)presentationCourse;
-(void)setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(double)puckAlpha;
-(void)setPuckAlpha:(double)arg1 ;
-(void)setPuckScale:(double)arg1 ;
-(void)setShouldShowOuterRing:(BOOL)arg1 ;
-(void)setInnerImageMask:(UIImage *)arg1 ;
-(void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2 ;
-(void)setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(void)setAllowsAccuracyRing:(BOOL)arg1 ;
-(double)accuracyRingAlpha;
-(void)setAccuracyRingAlpha:(double)arg1 ;
-(id)_accuracyAnimation:(double)arg1 ;
-(void)setAllowsPulse:(BOOL)arg1 ;
-(void)setCanShowHeadingIndicator:(BOOL)arg1 ;
-(void)setHeadingIndicatorStyle:(long long)arg1 ;
-(long long)zoomDirection;
-(BOOL)allowsPulse;
-(BOOL)canShowHeadingIndicator;
-(BOOL)shouldDisplayHeading;
-(BOOL)shouldDisplayInaccurateHeading;
-(BOOL)allowsAccuracyRing;
-(double)maxRadiusToShowAccuracyRing;
-(double)locationAccuracy;
-(BOOL)shouldInnerPulse;
-(UIImage *)innerImageMask;
-(BOOL)rotateInnerImageToMatchCourse;
-(double)headingOffset;
@end


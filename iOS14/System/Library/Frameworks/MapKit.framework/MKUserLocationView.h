/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class _MKUserLocationView;

@interface MKUserLocationView : MKAnnotationView {

	BOOL _selected;
	_MKUserLocationView* _mkUserLocationView;

}

@property (setter=_setMKUserLocationView:,getter=_mkUserLocationView,nonatomic,retain) _MKUserLocationView * mkUserLocationView;              //@synthesize mkUserLocationView=_mkUserLocationView - In the implementation block
-(void)prepareForDisplay;
-(void)_setHeading:(double)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(BOOL)_shouldInnerPulse;
-(id)_innerImageMask;
-(BOOL)_shouldShowOuterRing;
-(BOOL)_rotateInnerImageToMatchCourse;
-(double)_accuracyRingAlpha;
-(BOOL)_allowsPulse;
-(BOOL)_canShowHeadingIndicator;
-(BOOL)_shouldDisplayHeading;
-(BOOL)_isStale;
-(BOOL)_allowsAccuracyRing;
-(double)_maxRadiusToShowAccuracyRing;
-(id)rightCalloutAccessoryView;
-(id)leftCalloutAccessoryView;
-(id)detailCalloutAccessoryView;
-(BOOL)canShowCallout;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(long long)_headingIndicatorStyle;
-(void)_setMapDisplayStyle:(SCD_Struct_MK28)arg1 ;
-(void)setCanShowCallout:(BOOL)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(float)_selectionPriority;
-(BOOL)isSelected;
-(double)_heading;
-(BOOL)_allowedToShowCallout;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isDraggable;
-(void)prepareForReuse;
-(UIEdgeInsets)_annotationTrackingInsets;
-(void)_setMapRotationRadians:(double)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_updateFromMap;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setSelectionPriority:(float)arg1 ;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(void)_locationManagerFailedToUpdateLocation;
-(void)_setShouldDisplayHeading:(BOOL)arg1 ;
-(void)_setCanShowHeadingIndicator:(BOOL)arg1 ;
-(void)_setHeadingIndicatorStyle:(long long)arg1 ;
-(void)_setAllowsPulse:(BOOL)arg1 ;
-(void)_setShouldInnerPulse:(BOOL)arg1 ;
-(void)_setShouldShowOuterRing:(BOOL)arg1 ;
-(void)_setAllowsAccuracyRing:(BOOL)arg1 ;
-(void)_setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(double)_puckAlpha;
-(void)_setPuckAlpha:(double)arg1 ;
-(void)_setAccuracyRingAlpha:(double)arg1 ;
-(CGPoint)centerOffset;
-(void)_setPuckScale:(double)arg1 ;
-(void)_setInnerImageMask:(id)arg1 ;
-(void)_setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(void)_setMKUserLocationView:(id)arg1 ;
-(CGPoint)leftCalloutOffset;
-(CGPoint)rightCalloutOffset;
-(void)setDetailCalloutAccessoryView:(id)arg1 ;
-(CGPoint)calloutOffset;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)setLeftCalloutAccessoryView:(id)arg1 ;
-(void)setRightCalloutAccessoryView:(id)arg1 ;
-(id)_lastLocation;
-(id)_mkUserLocationView;
@end


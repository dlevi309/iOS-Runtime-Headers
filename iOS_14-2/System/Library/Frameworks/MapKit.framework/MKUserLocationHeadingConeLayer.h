/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <QuartzCore/CAGradientLayer.h>
#import <libobjc.A.dylib/MKUserLocationHeadingIndicator.h>
#import <libobjc.A.dylib/MKUserLocationHeadingAnimatableIndicator.h>

@class _MKPuckAnnotationView, CAShapeLayer, UIColor, UITraitCollection, NSString;

@interface MKUserLocationHeadingConeLayer : CAGradientLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator> {

	_MKPuckAnnotationView* _userLocationView;
	CAShapeLayer* _maskLayer;
	double _headingAccuracy;
	BOOL _shouldMatchAccuracyRadius;
	UIColor* _tintColor;
	double _halfMinAngle;
	UITraitCollection* _traitCollection;
	double _lastAccuracyRadius;
	double _minimumAccuracyRadius;
	unsigned long long _mapType;

}

@property (assign,nonatomic) double minimumAccuracyRadius;                     //@synthesize minimumAccuracyRadius=_minimumAccuracyRadius - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                       //@synthesize mapType=_mapType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldShowHeadingForAccuracy:(double)arg1 ;
-(void)_updateColors;
-(id)_colorsForAccuracyRadius:(double)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(unsigned long long)mapType;
-(void)animateToSetVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)setAccuracyRadius:(double)arg1 duration:(double)arg2 ;
-(id)initWithUserLocationView:(id)arg1 shouldMatchAccuracyRadius:(BOOL)arg2 minimumPresentationAngle:(double)arg3 ;
-(double)_opacityForAccuracy:(double)arg1 locationAccuracy:(double)arg2 ;
-(void)_createMaskLayer;
-(void)updateHeading:(double)arg1 ;
-(void)_animateToOpacity:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(id)_accuracyGradientLocationsForAccuracyRadius:(double)arg1 ;
-(void)setMinimumAccuracyRadius:(double)arg1 ;
-(double)minimumAccuracyRadius;
-(void)_updateShowHeadingForAccuracy:(double)arg1 ;
-(void)updateTintColor:(id)arg1 ;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
@end


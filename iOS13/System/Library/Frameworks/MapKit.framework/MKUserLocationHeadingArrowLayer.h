/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>
#import <libobjc.A.dylib/MKUserLocationHeadingIndicator.h>
#import <libobjc.A.dylib/MKUserLocationHeadingAnimatableIndicator.h>

@class _MKPuckAnnotationView, NSString;

@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator> {

	double _baseRadius;
	double _tipRadius;
	double _baseHalfAngle;
	double _maxUncertaintyAngleToShowArrow;
	_MKPuckAnnotationView* _userLocationView;
	double _headingRadians;

}

@property (nonatomic,__weak,readonly) _MKPuckAnnotationView * userLocationView;              //@synthesize userLocationView=_userLocationView - In the implementation block
@property (assign,nonatomic) double headingRadians;                                          //@synthesize headingRadians=_headingRadians - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_MKPuckAnnotationView *)userLocationView;
-(void)updateTintColor:(id)arg1 ;
-(void)animateToSetVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)updateHeading:(double)arg1 ;
-(id)initWithUserLocationView:(id)arg1 ;
-(CGPoint)_positionWhenVisible:(BOOL)arg1 ;
-(CGPathRef)_pathWhenVisible:(BOOL)arg1 ;
-(void)setHeadingRadians:(double)arg1 ;
-(BOOL)_shouldBeVisibleForAccuracy:(double)arg1 ;
-(id)_animationToSetVisible:(BOOL)arg1 ;
-(double)_baseRadiusWhenVisible:(BOOL)arg1 ;
-(double)_tipRadiusWhenVisible:(BOOL)arg1 ;
-(id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3 ;
-(double)headingRadians;
@end


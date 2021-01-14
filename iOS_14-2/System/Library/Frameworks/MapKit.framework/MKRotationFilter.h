/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKRotationFilterDelegate;
#import <MapKit/MapKit-Structs.h>
@class VKMapView;

@interface MKRotationFilter : NSObject {

	VKMapView* _mapLayer;
	double _gestureStartAngle;
	BOOL _userRotatedAwayFromVerticalYaw;
	double _previousVerticalYawOverride;
	BOOL _snappedToNorth;
	BOOL _snappedAtStart;
	BOOL _snappingEnabled;
	double _additionalSnappingAngle;
	id<MKRotationFilterDelegate> _delegate;

}

@property (assign,getter=isSnappedToNorth,nonatomic) BOOL snappedToNorth;               //@synthesize snappedToNorth=_snappedToNorth - In the implementation block
@property (assign,nonatomic) double additionalSnappingAngle;                            //@synthesize additionalSnappingAngle=_additionalSnappingAngle - In the implementation block
@property (assign,nonatomic,__weak) id<MKRotationFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAdditionalSnappingAngle:(double)arg1 ;
-(id)init;
-(id<MKRotationFilterDelegate>)delegate;
-(double)additionalSnappingAngle;
-(BOOL)hasAdditionalSnappingAngle;
-(void)setDelegate:(id<MKRotationFilterDelegate>)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 withSnapping:(BOOL)arg2 ;
-(void)snapToNorthAnimated:(BOOL)arg1 forceTrueNorth:(BOOL)arg2 ;
-(BOOL)isSnappedToNorth;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)setSnappedToNorth:(BOOL)arg1 ;
-(id)initWithMapLayer:(id)arg1 ;
-(void)updateSnappedToNorth;
@end


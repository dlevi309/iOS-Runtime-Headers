/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer {

	double _zoomDraggingResistance;
	double _translation;
	double _scale;
	double _velocity;
	double _previousVelocity;
	BOOL _didStartUpdate;
	double _lastUpdateTimestamp;

}

@property (assign,nonatomic) double zoomDraggingResistance;              //@synthesize zoomDraggingResistance=_zoomDraggingResistance - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) double velocity; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)velocity;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)scale;
-(void)setZoomDraggingResistance:(double)arg1 ;
-(void)reset;
-(void)_updateScaleAndVelocityIfNeeded:(long long)arg1 ;
-(double)zoomDraggingResistance;
@end


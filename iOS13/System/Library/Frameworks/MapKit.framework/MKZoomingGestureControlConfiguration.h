/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKZoomingGestureControlConfiguration <NSObject>
@property (nonatomic,readonly) double decelerationThreshold; 
@property (nonatomic,readonly) double maximumZoomInVelocity; 
@property (nonatomic,readonly) double maximumZoomOutVelocity; 
@property (nonatomic,readonly) double zoomOutFrictionScale; 
@property (nonatomic,readonly) double zoomDraggingResistance; 
@required
-(double)decelerationThreshold;
-(double)maximumZoomOutVelocity;
-(double)maximumZoomInVelocity;
-(double)zoomOutFrictionScale;
-(double)zoomDraggingResistance;

@end


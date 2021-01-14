/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)zoomOutFrictionScale;
-(double)maximumZoomOutVelocity;
-(double)zoomDraggingResistance;
-(double)maximumZoomInVelocity;

@end


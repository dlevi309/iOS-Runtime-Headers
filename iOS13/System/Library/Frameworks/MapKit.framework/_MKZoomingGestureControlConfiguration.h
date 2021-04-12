/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKZoomingGestureControlConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MKZoomingGestureControlConfiguration : NSObject <MKZoomingGestureControlConfiguration, NSCopying> {

	double _decelerationThreshold;
	double _maximumZoomInVelocity;
	double _maximumZoomOutVelocity;
	double _zoomOutFrictionScale;
	double _zoomDraggingResistance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double decelerationThreshold;               //@synthesize decelerationThreshold=_decelerationThreshold - In the implementation block
@property (nonatomic,readonly) double maximumZoomInVelocity;               //@synthesize maximumZoomInVelocity=_maximumZoomInVelocity - In the implementation block
@property (nonatomic,readonly) double maximumZoomOutVelocity;              //@synthesize maximumZoomOutVelocity=_maximumZoomOutVelocity - In the implementation block
@property (nonatomic,readonly) double zoomOutFrictionScale;                //@synthesize zoomOutFrictionScale=_zoomOutFrictionScale - In the implementation block
@property (nonatomic,readonly) double zoomDraggingResistance;              //@synthesize zoomDraggingResistance=_zoomDraggingResistance - In the implementation block
+(id)defaultConfiguration;
+(id)configurationForCarPlay;
+(id)configurationForDigitalCrown;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 ;
-(double)decelerationThreshold;
-(double)maximumZoomOutVelocity;
-(double)maximumZoomInVelocity;
-(double)zoomOutFrictionScale;
-(double)zoomDraggingResistance;
-(id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 zoomDraggingResistance:(double)arg5 ;
@end


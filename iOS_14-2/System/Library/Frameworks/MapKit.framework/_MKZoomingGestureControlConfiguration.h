/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) double decelerationThreshold;               //@synthesize decelerationThreshold=_decelerationThreshold - In the implementation block
@property (nonatomic,readonly) double maximumZoomInVelocity;               //@synthesize maximumZoomInVelocity=_maximumZoomInVelocity - In the implementation block
@property (nonatomic,readonly) double maximumZoomOutVelocity;              //@synthesize maximumZoomOutVelocity=_maximumZoomOutVelocity - In the implementation block
@property (nonatomic,readonly) double zoomOutFrictionScale;                //@synthesize zoomOutFrictionScale=_zoomOutFrictionScale - In the implementation block
@property (nonatomic,readonly) double zoomDraggingResistance;              //@synthesize zoomDraggingResistance=_zoomDraggingResistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
+(id)configurationForDigitalCrown;
+(id)configurationForCarPlay;
-(id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 ;
-(double)decelerationThreshold;
-(double)zoomOutFrictionScale;
-(double)maximumZoomOutVelocity;
-(id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 zoomDraggingResistance:(double)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)zoomDraggingResistance;
-(double)maximumZoomInVelocity;
@end


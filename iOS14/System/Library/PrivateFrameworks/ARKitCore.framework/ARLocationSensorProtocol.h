/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

@class ARLocationData;


@protocol ARLocationSensorProtocol <ARSensor>
@property (nonatomic,readonly) ARLocationData * currentLocation; 
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@required
-(ARLocationData *)currentLocation;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)lookupAltitudeAtCoordinate:(CLLocationCoordinate2D)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateARSessionState:(unsigned long long)arg1;
-(void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2;
-(void)updateFromVisualLocalizationResult:(id)arg1;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARRemoteLocationSensorService <ARRemoteSensorService>
@required
-(void)lookupAltitudeAtCoordinate:(CLLocationCoordinate2D)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateARSessionState:(unsigned long long)arg1;
-(void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2;
-(void)currentLocationWithReply:(/*^block*/id)arg1;

@end


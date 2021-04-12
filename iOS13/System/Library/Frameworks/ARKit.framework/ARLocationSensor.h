/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <ARKit/ARSensor.h>

@protocol ARSensorDelegate;
@class CLLocationManager, ARLocationData, NSString;

@interface ARLocationSensor : NSObject <CLLocationManagerDelegate, ARSensor> {

	CLLocationManager* _locationManager;
	double _lastVIOUpdateTimestamp;
	SCD_Struct_AR24 _cameraToIMURotation;
	ARLocationData* _currentLocation;
	id<ARSensorDelegate> _delegate;

}

@property (retain) ARLocationData * currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(id)init;
-(void)dealloc;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(ARLocationData *)currentLocation;
-(void)setCurrentLocation:(ARLocationData *)arg1 ;
-(unsigned long long)providedDataTypes;
-(void)_validateLocationAuthorizationAndStartUpdates;
-(void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2 ;
-(void)updateARSessionState:(unsigned long long)arg1 ;
@end


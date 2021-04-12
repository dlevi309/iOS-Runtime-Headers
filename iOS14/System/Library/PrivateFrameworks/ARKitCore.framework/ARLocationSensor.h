/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <ARKitCore/ARSensor.h>

@protocol OS_dispatch_queue, ARSensorDelegate;
@class NSString, CLLocationManager, NSObject, NSMutableArray, ARLocationData;

@interface ARLocationSensor : NSObject <CLLocationManagerDelegate, ARSensor> {

	NSString* _bundleIdentifier;
	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _locationManagerQueue;
	double _lastVIOUpdateTimestamp;
	NSMutableArray* _altitudeSkipTiles;
	id<ARSensorDelegate> _delegate;
	ARLocationData* _currentLocation;

}

@property (nonatomic,retain) ARLocationData * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(ARLocationData *)currentLocation;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(id<ARSensorDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)start;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)setCurrentLocation:(ARLocationData *)arg1 ;
-(void)stop;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(id)_createLocationManager;
-(void)dealloc;
-(unsigned long long)providedDataTypes;
-(void)lookupAltitudeAtCoordinate:(CLLocationCoordinate2D)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateARSessionState:(unsigned long long)arg1 ;
-(void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2 ;
-(void)updateFromVisualLocalizationResult:(id)arg1 ;
-(id)_validateLocationAuthorization;
-(void)_attemptAltitudeLookupAtCoordinate:(CLLocationCoordinate2D)arg1 attemptCount:(unsigned)arg2 lookupStartDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end


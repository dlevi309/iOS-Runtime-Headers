/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARRemoteSensor.h>
#import <ARKitCore/ARLocationSensorProtocol.h>

@class ARLocationData, NSString;

@interface ARRemoteLocationSensor : ARRemoteSensor <ARLocationSensorProtocol>

@property (nonatomic,readonly) ARLocationData * currentLocation; 
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(ARLocationData *)currentLocation;
-(id)init;
-(unsigned long long)providedDataTypes;
-(void)lookupAltitudeAtCoordinate:(CLLocationCoordinate2D)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateARSessionState:(unsigned long long)arg1 ;
-(void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2 ;
-(void)updateFromVisualLocalizationResult:(id)arg1 ;
-(id)initWithServerConnection:(id)arg1 ;
@end


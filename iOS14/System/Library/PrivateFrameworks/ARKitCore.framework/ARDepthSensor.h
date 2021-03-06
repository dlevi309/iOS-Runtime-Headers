/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageSensor.h>
#import <libobjc.A.dylib/AVCapturePointCloudDataOutputDelegate.h>

@class NSMutableDictionary, NSString, AVCapturePointCloudDataOutput, ARDepthSensorSettings;

@interface ARDepthSensor : ARImageSensor <AVCapturePointCloudDataOutputDelegate> {

	NSMutableDictionary* _extrinsicsMap;
	NSString* _projectorMode;
	AVCapturePointCloudDataOutput* _pointCloudOutput;

}

@property (nonatomic,retain) AVCapturePointCloudDataOutput * pointCloudOutput;              //@synthesize pointCloudOutput=_pointCloudOutput - In the implementation block
@property (nonatomic,readonly) ARDepthSensorSettings * mutableDepthSettings; 
@property (nonatomic,retain) NSString * projectorMode;                                      //@synthesize projectorMode=_projectorMode - In the implementation block
@property (nonatomic,copy,readonly) ARDepthSensorSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerSignPostForPointCloudData:(id)arg1 ;
-(void)reconfigure:(id)arg1 ;
-(void)start;
-(void)stop;
-(NSString *)description;
-(AVCapturePointCloudDataOutput *)pointCloudOutput;
-(NSString *)projectorMode;
-(void)setProjectorMode:(NSString *)arg1 ;
-(void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(SCD_Struct_AR19)arg3 connection:(id)arg4 ;
-(void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(SCD_Struct_AR19)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(id)configureCaptureSession;
-(void)_configureProjectorModeForDevice:(id)arg1 ;
-(BOOL)canReconfigure:(id)arg1 ;
-(ARDepthSensorSettings *)mutableDepthSettings;
-(unsigned long long)providedDataTypes;
-(id)prepareToStart;
-(void)setPointCloudOutput:(AVCapturePointCloudDataOutput *)arg1 ;
@end


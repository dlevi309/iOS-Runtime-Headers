/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageSensor.h>
#import <libobjc.A.dylib/AVCapturePointCloudDataOutputDelegate.h>

@class NSString, AVCapturePointCloudDataOutput, ARDepthSensorSettings;

@interface ARDepthSensor : ARImageSensor <AVCapturePointCloudDataOutputDelegate> {

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
-(NSString *)description;
-(void)stop;
-(void)start;
-(void)setProjectorMode:(NSString *)arg1 ;
-(void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(SCD_Struct_AR19)arg3 connection:(id)arg4 ;
-(void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(SCD_Struct_AR19)arg3 connection:(id)arg4 reason:(long long)arg5 ;
-(AVCapturePointCloudDataOutput *)pointCloudOutput;
-(NSString *)projectorMode;
-(id)logPrefix;
-(void)reconfigure:(id)arg1 ;
-(id)_setActiveFormat;
-(id)configureCaptureSession;
-(void)_configureProjectorModeForDevice:(id)arg1 ;
-(BOOL)canReconfigure:(id)arg1 ;
-(ARDepthSensorSettings *)mutableDepthSettings;
-(unsigned long long)providedDataTypes;
-(id)prepareToStart;
-(void)setPointCloudOutput:(AVCapturePointCloudDataOutput *)arg1 ;
@end


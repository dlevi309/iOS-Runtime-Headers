/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARSensorData.h>

@class AVPointCloudData, ADJasperPointCloud, NSString;

@interface ARPointCloudSensorData : NSObject <ARSensorData> {

	AVPointCloudData* _pointCloudData;
	double _timestamp;
	ADJasperPointCloud* _pointCloud;
	long long _cameraPosition;
	NSString* _cameraType;
	SCD_Struct_AR1 _visionCameraTransform;
	SCD_Struct_AR1 _cameraTransform;

}

@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 visionCameraTransform;              //@synthesize visionCameraTransform=_visionCameraTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 cameraTransform;                    //@synthesize cameraTransform=_cameraTransform - In the implementation block
@property (nonatomic,readonly) ADJasperPointCloud * pointCloud;                 //@synthesize pointCloud=_pointCloud - In the implementation block
@property (nonatomic,readonly) long long cameraPosition;                        //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) NSString * cameraType;                           //@synthesize cameraType=_cameraType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)cameraType;
-(id)pointCloudData;
-(long long)cameraPosition;
-(id)initWithPointCloudData:(id)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4 ;
-(ADJasperPointCloud *)pointCloud;
-(SCD_Struct_AR1)cameraTransform;
-(void)setVisionCameraTransform:(SCD_Struct_AR1)arg1 ;
-(void)setCameraTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)visionCameraTransform;
-(id)initWithPointCloudData:(id)arg1 timestamp:(double)arg2 ;
@end


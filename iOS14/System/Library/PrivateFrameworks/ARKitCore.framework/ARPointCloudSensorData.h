/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <ARKitCore/ARSensorData.h>

@class AVPointCloudData, ADJasperPointCloud, NSString;

@interface ARPointCloudSensorData : NSObject <NSSecureCoding, ARSensorData> {

	AVPointCloudData* _pointCloudData;
	long long _projectorMode;
	double _timestamp;
	ADJasperPointCloud* _pointCloud;
	long long _cameraPosition;
	NSString* _cameraType;
	SCD_Struct_AR1 _visionCameraTransform;
	SCD_Struct_AR1 _cameraTransform;
	SCD_Struct_AR1 _extrinsicsToWideSensor;

}

@property (assign,nonatomic) double timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 visionCameraTransform;               //@synthesize visionCameraTransform=_visionCameraTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 cameraTransform;                     //@synthesize cameraTransform=_cameraTransform - In the implementation block
@property (nonatomic,readonly) ADJasperPointCloud * pointCloud;                  //@synthesize pointCloud=_pointCloud - In the implementation block
@property (nonatomic,readonly) long long cameraPosition;                         //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) NSString * cameraType;                            //@synthesize cameraType=_cameraType - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 extrinsicsToWideSensor;              //@synthesize extrinsicsToWideSensor=_extrinsicsToWideSensor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)cameraPosition;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)pointCloudData;
-(NSString *)cameraType;
-(long long)projectorMode;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(ADJasperPointCloud *)pointCloud;
-(id)initWithPointCloudData:(id)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4 ;
-(void)setExtrinsicsToWideSensor:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)extrinsicsToWideSensor;
-(SCD_Struct_AR1)cameraTransform;
-(SCD_Struct_AR1)visionCameraTransform;
-(void)setVisionCameraTransform:(SCD_Struct_AR1)arg1 ;
-(void)setCameraTransform:(SCD_Struct_AR1)arg1 ;
-(id)initWithPointCloudData:(id)arg1 projectorMode:(long long)arg2 timestamp:(double)arg3 ;
@end


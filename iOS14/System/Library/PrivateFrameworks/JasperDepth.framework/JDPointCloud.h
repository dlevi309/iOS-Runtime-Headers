/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class ADMutableJasperPointCloud, JDCameraCalibrationData;

@interface JDPointCloud : NSObject {

	ADMutableJasperPointCloud* _pc;
	JDCameraCalibrationData* _cameraCalibrationData;

}

@property (readonly) int length; 
@property (readonly) int size; 
@property (readonly) float* euclideanDistances; 
@property (readonly) CGPoint* cameraPixels; 
@property (readonly) CGPoint* undistortedCameraPixels; 
@property (readonly) * points; 
@property (readonly) JDCameraCalibrationData * cameraCalibrationData;              //@synthesize cameraCalibrationData=_cameraCalibrationData - In the implementation block
@property (readonly) float* intensities; 
@property (readonly) float* confidences; 
@property (readonly) float* signalToNoiseRatios; 
@property (readonly) char* bankIds; 
@property (readonly) char* spotIds; 
@property (readonly) char* echoIds; 
@property (readonly) unsigned* flags; 
+(unsigned)pixelFormat;
+(id)makeWithDataBuffer:(CVBufferRef)arg1 ;
+(unsigned long long)requiredStorageBytesForLength:(int)arg1 ;
+(id)makeWithDictionaryRepresentation:(id)arg1 ;
+(id)pointCloudByMergingPointClouds:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)size;
-(unsigned*)flags;
-(int)length;
-(char*)spotIds;
-(CVBufferRef)dataBuffer;
-(char*)bankIds;
-(float*)confidences;
-(char*)echoIds;
-(void)reset;
-(*)points;
-(JDCameraCalibrationData *)cameraCalibrationData;
-(void)dealloc;
-(id)initWithLength:(int)arg1 cameraCalibration:(id)arg2 storage:(CVBufferRef)arg3 ;
-(id)initWithSize:(int)arg1 calibrationData:(id)arg2 ;
-(id)initWithPointCloud:(id)arg1 ;
-(CGPoint*)cameraPixels;
-(float*)euclideanDistances;
-(CGPoint*)undistortedCameraPixels;
-(float*)intensities;
-(float*)signalToNoiseRatios;
-(void)calculateUndistortedPixelsFromCameraPixels;
-(void)calculatePixelsFromUndistortedPixels;
-(void)calculateWorldPointsFromUndistortedPixels;
-(void)calculateUndistortedPixelsFromWorldPoints;
-(void)replacePointsInRange:(NSRange)arg1 withPointsFrom:(id)arg2 range:(NSRange)arg3 ;
-(id)pointCloudByChangingPointOfView:(id)arg1 ;
@end


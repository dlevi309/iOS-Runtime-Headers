/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class JDCameraCalibrationData;

@interface JDPointCloud : NSObject {

	PointCloud* _pc;
	CVBufferRef _dataBuffer;
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
+(id)pointCloudByMergingPointClouds:(id)arg1 ;
+(id)makeWithDictionaryRepresentation:(id)arg1 ;
-(void)dealloc;
-(int)length;
-(unsigned*)flags;
-(int)size;
-(id)dictionaryRepresentation;
-(void)reset;
-(CVBufferRef)dataBuffer;
-(JDCameraCalibrationData *)cameraCalibrationData;
-(*)points;
-(float*)confidences;
-(char*)spotIds;
-(char*)bankIds;
-(CGPoint*)undistortedCameraPixels;
-(char*)echoIds;
-(id)initWithPointCloud:(id)arg1 ;
-(float*)euclideanDistances;
-(float*)intensities;
-(float*)signalToNoiseRatios;
-(CGPoint*)cameraPixels;
-(void)replacePointsInRange:(NSRange)arg1 withPointsFrom:(id)arg2 range:(NSRange)arg3 ;
-(id)initWithLength:(int)arg1 cameraCalibration:(id)arg2 storage:(CVBufferRef)arg3 ;
-(id)initWithSize:(int)arg1 calibrationData:(id)arg2 ;
-(void)calculateUndistortedPixelsFromCameraPixels;
-(void)calculatePixelsFromUndistortedPixels;
-(void)calculateWorldPointsFromUndistortedPixels;
-(void)calculateUndistortedPixelsFromWorldPoints;
-(id)pointCloudByChangingPointOfView:(id)arg1 ;
@end

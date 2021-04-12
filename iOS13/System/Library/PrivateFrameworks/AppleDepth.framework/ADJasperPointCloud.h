/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface ADJasperPointCloud : NSObject {

	JasperPointCloud* _pc;
	CVBufferRef _dataBuffer;

}

@property (readonly) int length; 
@property (readonly) const float* euclideanDistances; 
@property (readonly) const CGPoint* cameraPixels; 
@property (readonly) const CGPoint* undistortedCameraPixels; 
@property (readonly) const * points; 
@property (readonly) const float* intensities; 
@property (readonly) const float* confidences; 
@property (readonly) const float* signalToNoiseRatios; 
@property (readonly) const char* bankIds; 
@property (readonly) const char* spotIds; 
@property (readonly) const char* echoIds; 
@property (readonly) const unsigned* flags; 
+(unsigned)pixelFormat;
+(id)makeWithDataBuffer:(CVBufferRef)arg1 ;
+(unsigned long long)requiredStorageBytesForLength:(int)arg1 ;
+(id)pointCloudByMergingPointClouds:(id)arg1 applyingTransforms:(SCD_Struct_AD5*)arg2 projectingToCamera:(id)arg3 ;
+(BOOL)prepareDataBuffer:(CVBufferRef)arg1 forLength:(int)arg2 ;
+(id)pointCloudFromCSV:(id)arg1 ;
+(id)pointCloudFromFile:(id)arg1 ;
+(id)pointCloudByMergingPointClouds:(id)arg1 ;
-(void)dealloc;
-(int)length;
-(id)mutableCopy;
-(const unsigned*)flags;
-(int)size;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithLength:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)reset;
-(CVBufferRef)dataBuffer;
-(const *)points;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(const float*)confidences;
-(const char*)spotIds;
-(const char*)bankIds;
-(id)initWithDataBuffer:(CVBufferRef)arg1 ;
-(const CGPoint*)undistortedCameraPixels;
-(const char*)echoIds;
-(id)pointCloudByApplyingFilter:(id)arg1 ;
-(id)initWithPointCloud:(id)arg1 ;
-(long long)projectJasperPointsCroppedBy:(CGRect)arg1 rotatedBy:(long long)arg2 andScaledInto:(CVBufferRef)arg3 ;
-(long long)projectJasperPointsFilteredBy:(id)arg1 croppedBy:(CGRect)arg2 rotatedBy:(long long)arg3 andScaledInto:(CVBufferRef)arg4 ;
-(const float*)euclideanDistances;
-(const float*)intensities;
-(const float*)signalToNoiseRatios;
-(const CGPoint*)cameraPixels;
-(BOOL)pointCloudToCSV:(id)arg1 atomically:(BOOL)arg2 ;
-(id)pointCloudByChangingPointOfViewByTransform:(SCD_Struct_AD5)arg1 to:(id)arg2 ;
-(id)initWithLength:(int)arg1 storage:(CVBufferRef)arg2 ;
-(id)pointCloudByChangingPointOfViewFrom:(id)arg1 to:(id)arg2 ;
@end


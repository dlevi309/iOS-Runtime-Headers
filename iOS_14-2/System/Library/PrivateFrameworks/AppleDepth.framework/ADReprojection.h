/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface ADReprojection : NSObject {

	CGPoint* _intermediateUndistortedCameraPixels;
	* _points;
	float* _inOutDepth;
	CGPoint* _srcCameraPixels;
	CGPoint* _dstCameraPixels;
	int* _warpMaskX;
	int* _warpMaskY;
	float* _warpMaskZHelper;
	unsigned long long _capacity;
	unsigned long long _length;

}

@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) unsigned long long length;                //@synthesize length=_length - In the implementation block
-(id)init;
-(unsigned long long)capacity;
-(unsigned long long)length;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)updateCapacity:(unsigned long long)arg1 ;
-(void)deallocateBuffers;
-(int)vectorizeCameraPixels:(CVBufferRef)arg1 depthUnits:(unsigned long long)arg2 ;
-(void)calculateWarpedPixelsFromSrcCalibration:(id)arg1 dstCalibration:(id)arg2 poseTransform:(SCD_Struct_AD1*)arg3 validPixels:(unsigned long long)arg4 ;
-(long long)updateWarpWithWarpedDepthBuffer:(CVBufferRef)arg1 depthUnits:(unsigned long long)arg2 dimensions:(CGSize)arg3 validPixels:(unsigned long long)arg4 ;
-(long long)updateWarpMapWithDepth:(CVBufferRef)arg1 depthUnits:(unsigned long long)arg2 srcCalibration:(id)arg3 dstCalibration:(id)arg4 poseTransform:(SCD_Struct_AD1)arg5 warpedDepth:(CVBufferRef)arg6 ;
-(long long)warpImage:(CVBufferRef)arg1 intoImage:(CVBufferRef)arg2 ;
@end


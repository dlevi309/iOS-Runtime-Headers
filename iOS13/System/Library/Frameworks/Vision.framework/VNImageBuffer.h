/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class CIImage, CIContext, VNImageSourceManager, NSDictionary;

@interface VNImageBuffer : NSObject {

	CVBufferRef _origPixelBuffer;
	CFArrayRef _pixelBufferReps;
	os_unfair_lock_s _pixelBufferRepsLock;
	CIImage* _origCIImage;
	CIContext* _passedInCIContext;
	VNImageSourceManager* _imageSourceManager;
	int _orientation;
	unsigned long long _origImageWidth;
	unsigned long long _origImageHeight;
	NSDictionary* _options;

}

@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
+(const CFDictionaryRef)ioSurfaceBackedPixelBufferAttributes;
+(CGColorSpaceRef)copyColorspaceForFormat:(unsigned)arg1 bitmapInfo:(unsigned*)arg2 ;
+(CGRect)computeCenterCropRectFromCropRect:(CGRect)arg1 inImageSize:(CGSize)arg2 calculatedScaleX:(double*)arg3 calculatedScaleY:(double*)arg4 ;
+(int)_helpReadOrientationFromOptionsDictionary:(id)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(int)orientation;
-(id)fileURL;
-(unsigned long long)width;
-(unsigned long long)height;
-(id)imageProperties;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(CVBufferRef)cropAndScaleBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cropRect:(CGRect)arg3 format:(unsigned)arg4 imageCropAndScaleOption:(unsigned long long)arg5 options:(id)arg6 error:(id*)arg7 calculatedNormalizedOriginOffset:(CGPoint*)arg8 calculatedScaleX:(double*)arg9 calculatedScaleY:(double*)arg10 ;
-(void)purgeCachedRepresentations;
-(CVBufferRef)originalPixelBuffer;
-(CVBufferRef)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)_cropCVPixelBuffer:(CVBufferRef)arg1 outBuffer:(_CVBuffer*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned)arg5 cropRect:(CGRect)arg6 performCrop:(BOOL)arg7 options:(id)arg8 error:(id*)arg9 ;
-(CGRect)_calculateTargetRectFromCropRect:(CGRect)arg1 ;
-(BOOL)_isRectOutOfBounds:(CGRect)arg1 ;
-(BOOL)_cropCIImage:(id)arg1 outBuffer:(_CVBuffer*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned)arg5 cropRect:(CGRect)arg6 performCrop:(BOOL)arg7 options:(id)arg8 error:(id*)arg9 ;
-(BOOL)_cropImageSourceManager:(id)arg1 outBuffer:(_CVBuffer*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned)arg5 cropRect:(CGRect)arg6 performCrop:(BOOL)arg7 options:(id)arg8 error:(id*)arg9 ;
-(CVBufferRef)_retrieveBufferFromCacheIfFoundWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 ;
-(CVBufferRef)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 cropRect:(CGRect)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)calculateOrientationCorrectedImageDimensions;
-(BOOL)getPixelFocalLengthIfAvailable:(float*)arg1 ;
-(BOOL)getCameraOpticalCenterIfAvailable:(CGPoint*)arg1 ;
-(BOOL)getCameraIntrinsicsAvailable:(SCD_Struct_VN21*)arg1 ;
-(BOOL)processInChunksOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 options:(id)arg3 roi:(CGRect)arg4 handler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(CGRect)makeClippedRectAgainstImageExtentUsingOriginalRect:(CGRect)arg1 ;
-(CVBufferRef)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 andPixelFormat:(unsigned)arg2 andOptions:(id)arg3 error:(id*)arg4 ;
-(CVBufferRef)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 andCropBounds:(CGRect)arg2 andPixelFormat:(unsigned)arg3 andOptions:(id)arg4 error:(id*)arg5 ;
-(id)_baseCIImage;
-(CVBufferRef)_baseCVPixelBuffer;
-(id)augmentedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 options:(id)arg4 augmentationOptions:(id)arg5 error:(id*)arg6 ;
-(id)augmentedCroppedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 cropRect:(CGRect)arg4 options:(id)arg5 augmentationOptions:(id)arg6 error:(id*)arg7 ;
-(id)_optionsWithOverridingOptions:(id)arg1 ;
-(BOOL)_useCoreImageForFormat:(unsigned)arg1 ;
-(void)_dumpIntermediateImage:(CVBufferRef)arg1 withOptions:(id)arg2 ;
@end


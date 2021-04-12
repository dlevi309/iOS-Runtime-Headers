/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXMatting.h>

@protocol OS_dispatch_queue;
@class NSObject, JFXGuidedUpscaler, JFXGuidedFilter, JFXImageScaler;

@interface JFXCVASegMatting_SPI : JFXMatting {

	NSObject*<OS_dispatch_queue> _matteGenQ;
	CVASegmentationRef _segmenter;
	CVPixelBufferPoolRef _alphaMattePool;
	CVPixelBufferPoolRef _tinyAlphaMattePool;
	CVPixelBufferPoolRef _smallAlphaMattePool;
	CVPixelBufferPoolRef _smallForegroundColorPool;
	CVPixelBufferPoolRef _rotMattePool;
	CVPixelBufferPoolRef _flipColorPool;
	CVPixelBufferPoolRef _rotColorPool;
	CVBufferRef _foregroundColorEstimateBuffer;
	CVBufferRef _segmentationBuffer;
	int _cameraType;
	JFXGuidedUpscaler* _calmFilter;
	JFXGuidedFilter* _guidedFilter;
	JFXImageScaler* _imageScaler;
	int _mode;
	CGRect _largestFaceRect;
	long long _interfaceOrientation;
	unsigned long long _previousMattingStatus;
	unsigned long long _currentMattingStatus;
	BOOL _visualizeFaceRect;

}
+(id)segmentationOptionsForDepth:(CVBufferRef)arg1 rotColor:(CVBufferRef)arg2 pts:(SCD_Struct_JF3)arg3 cameraType:(int)arg4 ;
+(BOOL)_defaultMatteGeneratorPrefersDepth;
-(void)dealloc;
-(id)initForFrameSet:(id)arg1 ;
-(CVBufferRef)invertImageAndApplyGarbageMatteForPortraitOrientation:(CVBufferRef)arg1 garbageMatte:(CVBufferRef)arg2 erodedMatte:(CVBufferRef)arg3 ;
-(CVBufferRef)invertImageAndApplyGarbageMatteForPortraitUpsideDownOrientation:(CVBufferRef)arg1 garbageMatte:(CVBufferRef)arg2 erodedMatte:(CVBufferRef)arg3 ;
-(CVBufferRef)invertImageAndApplyGarbageMatteForLandscapeOrientation:(CVBufferRef)arg1 garbageMatte:(CVBufferRef)arg2 erodedMatte:(CVBufferRef)arg3 ;
-(int)depthThresholdForDepthMap:(CVBufferRef)arg1 processData:(DepthProcessingDataRGBD*)arg2 largestFaceRect:(CGRect)arg3 interfaceOrientation:(long long)arg4 ;
-(CVBufferRef)dilateImage:(CVBufferRef)arg1 toImage:(CVBufferRef)arg2 kernelSize:(unsigned long long)arg3 ;
-(void)erodeImage:(CVBufferRef)arg1 toImage:(CVBufferRef)arg2 kernelSize:(unsigned long long)arg3 ;
-(void)combineInnerAndOuterMattes:(CVBufferRef)arg1 dilatedOuterMatte:(CVBufferRef)arg2 ;
-(int)getFaceDepth:(DepthProcessingDataRGBD*)arg1 largestFaceRect:(CGRect)arg2 ;
-(CVBufferRef)garbageMatteForFrameSet:(id)arg1 matte:(CVBufferRef)arg2 erodedMatteOut:(CVBufferRef)arg3 ;
-(CVBufferRef)invertImageAndApplyGarbageMatte:(CVBufferRef)arg1 garbageMatte:(CVBufferRef)arg2 erodedMatte:(CVBufferRef)arg3 ;
-(CVBufferRef)invertImage:(CVBufferRef)arg1 ;
-(BOOL)isValidForCameraFrameSet:(id)arg1 ;
-(CVBufferRef)largeColorImageWithSmallForegroundEstimate:(CVBufferRef)arg1 rawAlpha:(CVBufferRef)arg2 color:(CVBufferRef)arg3 ;
-(void)requestMattingStatus;
-(void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

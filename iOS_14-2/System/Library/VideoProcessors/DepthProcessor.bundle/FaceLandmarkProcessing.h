/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@interface FaceLandmarkProcessing : NSObject {

	unsigned long long _width;
	unsigned long long _height;
	float _confidenceUpdateValue;
	float _minFaceQuality;
	float _confidenceMinValue;
	float _minRatioFaceFill;
	float _maskShrinkRatio;
	CVBufferRef _faceMaskBuffer;
	CVBufferRef _invalidInvZMaskBuffer;
	float* _validInvZArray;
	float* _validInvZPerRowArray;
	CGPoint* _contourC0;
	unsigned _contourC0Count;
	unsigned _minX;
	unsigned _maxX;
	unsigned _minY;
	unsigned _maxY;
	 * _pDepthOutputBuffer;
	 * _pConfidenceBuffer;
	char* _pFaceMaskBuffer;
	char* _pHoleMaskBuffer;
	unsigned long long _depthOutputBufferBpr;
	unsigned long long _confidenceBpr;
	unsigned long long _faceMaskBufferBpr;
	unsigned long long _invalidInvZMaskBufferBpr;
	BOOL _resourcesAllocated;

}
-(int)allocateResources;
-(void)releaseResources;
-(id)initWithParameters:(SCD_Struct_Fi16*)arg1 ;
-(void)dealloc;
-(int)faceLandmarkProcess:(id)arg1 exifOrientation:(int)arg2 depthInputBuffer:(CVBufferRef)arg3 confidence:(CVBufferRef)arg4 depthOutputBuffer:(CVBufferRef)arg5 ;
-(void)getMedianInvZInFaceMask:(unsigned)arg1 numInvalidFacePixels:(int*)arg2 numValidFacePixels:(int*)arg3 medianInvZF16:( *)arg4 ;
-(void)fillHolesInMask:( )arg1 ;
@end


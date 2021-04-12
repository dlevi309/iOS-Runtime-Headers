/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/


@protocol MTLBuffer, MTLTexture;
#import <InertiaCam/InertiaCam-Structs.h>
@class MPSKernel, NSArray;

@interface ORBExtractionIntermediateBuffers : NSObject {

	int _maxKeypointsPerRegion;
	unsigned _maxRegionHeight;
	unsigned _countOfRectRegions;
	MPSKernel* _mpsFindKeypoints;
	MPSKernel* _mpsHistogram;
	id<MTLBuffer> _rectRegionsBuffer;
	id<MTLBuffer> _rectRegionCount;
	id<MTLBuffer> _rectRegionsDesiredKeypoints;
	id<MTLBuffer> _thresholdRangeBuffer;
	NSArray* _rectRegions;
	id<MTLTexture> _gaussianBlurredTexture_RGBA8Uint;
	id<MTLTexture> _gaussianBlurredTexture_R8Uint;
	id<MTLTexture> _gaussianBlurredTexture_R8Unorm;
	id<MTLTexture> _responseTexture;
	id<MTLTexture> _suppressedResponseTexture_RGBA8Uint;
	id<MTLTexture> _suppressedResponseTexture_R8Uint;
	id<MTLTexture> _suppressedResponseTexture_R8Unorm;
	id<MTLTexture> _boxBlurredTexture_R8Uint;
	id<MTLTexture> _boxBlurredTexture_RGBA8Uint;
	id<MTLBuffer> _thresholdsBuffer;
	id<MTLBuffer> _histogramsBuffer;
	id<MTLBuffer> _countOfKeypointsPerRegion;
	id<MTLBuffer> _cumulativeCountOfKeypointsPerRegion;
	id<MTLBuffer> _truncatedRegionsBuffer;
	id<MTLBuffer> _compactKeypointsBuffer;
	id<MTLBuffer> _refinedKeypointsBuffer;
	id<MTLBuffer> _compactKeypointsAndResponsesBuffer;
	id<MTLBuffer> _responseBuffer;
	id<MTLBuffer> _descriptorBuffer;
	id<MTLBuffer> _keypointCountBuffer;
	id<MTLBuffer> _mpsRegionStrideBuffer;
	id<MTLBuffer> _refinementIntermediatesBuffer;
	unsigned long long _maxDescriptorCount;

}

@property (retain) MPSKernel * mpsFindKeypoints;                                    //@synthesize mpsFindKeypoints=_mpsFindKeypoints - In the implementation block
@property (retain) MPSKernel * mpsHistogram;                                        //@synthesize mpsHistogram=_mpsHistogram - In the implementation block
@property (retain) id<MTLBuffer> rectRegionsBuffer;                                 //@synthesize rectRegionsBuffer=_rectRegionsBuffer - In the implementation block
@property (retain) id<MTLBuffer> rectRegionCount;                                   //@synthesize rectRegionCount=_rectRegionCount - In the implementation block
@property (retain) id<MTLBuffer> rectRegionsDesiredKeypoints;                       //@synthesize rectRegionsDesiredKeypoints=_rectRegionsDesiredKeypoints - In the implementation block
@property (retain) id<MTLBuffer> thresholdRangeBuffer;                              //@synthesize thresholdRangeBuffer=_thresholdRangeBuffer - In the implementation block
@property (copy) NSArray * rectRegions;                                             //@synthesize rectRegions=_rectRegions - In the implementation block
@property (assign) int maxKeypointsPerRegion;                                       //@synthesize maxKeypointsPerRegion=_maxKeypointsPerRegion - In the implementation block
@property (retain) id<MTLTexture> gaussianBlurredTexture_RGBA8Uint;                 //@synthesize gaussianBlurredTexture_RGBA8Uint=_gaussianBlurredTexture_RGBA8Uint - In the implementation block
@property (retain) id<MTLTexture> gaussianBlurredTexture_R8Uint;                    //@synthesize gaussianBlurredTexture_R8Uint=_gaussianBlurredTexture_R8Uint - In the implementation block
@property (retain) id<MTLTexture> gaussianBlurredTexture_R8Unorm;                   //@synthesize gaussianBlurredTexture_R8Unorm=_gaussianBlurredTexture_R8Unorm - In the implementation block
@property (retain) id<MTLTexture> responseTexture;                                  //@synthesize responseTexture=_responseTexture - In the implementation block
@property (retain) id<MTLTexture> suppressedResponseTexture_RGBA8Uint;              //@synthesize suppressedResponseTexture_RGBA8Uint=_suppressedResponseTexture_RGBA8Uint - In the implementation block
@property (retain) id<MTLTexture> suppressedResponseTexture_R8Uint;                 //@synthesize suppressedResponseTexture_R8Uint=_suppressedResponseTexture_R8Uint - In the implementation block
@property (retain) id<MTLTexture> suppressedResponseTexture_R8Unorm;                //@synthesize suppressedResponseTexture_R8Unorm=_suppressedResponseTexture_R8Unorm - In the implementation block
@property (retain) id<MTLTexture> boxBlurredTexture_R8Uint;                         //@synthesize boxBlurredTexture_R8Uint=_boxBlurredTexture_R8Uint - In the implementation block
@property (retain) id<MTLTexture> boxBlurredTexture_RGBA8Uint;                      //@synthesize boxBlurredTexture_RGBA8Uint=_boxBlurredTexture_RGBA8Uint - In the implementation block
@property (retain) id<MTLBuffer> thresholdsBuffer;                                  //@synthesize thresholdsBuffer=_thresholdsBuffer - In the implementation block
@property (retain) id<MTLBuffer> histogramsBuffer;                                  //@synthesize histogramsBuffer=_histogramsBuffer - In the implementation block
@property (retain) id<MTLBuffer> countOfKeypointsPerRegion;                         //@synthesize countOfKeypointsPerRegion=_countOfKeypointsPerRegion - In the implementation block
@property (retain) id<MTLBuffer> cumulativeCountOfKeypointsPerRegion;               //@synthesize cumulativeCountOfKeypointsPerRegion=_cumulativeCountOfKeypointsPerRegion - In the implementation block
@property (retain) id<MTLBuffer> truncatedRegionsBuffer;                            //@synthesize truncatedRegionsBuffer=_truncatedRegionsBuffer - In the implementation block
@property (retain) id<MTLBuffer> compactKeypointsBuffer;                            //@synthesize compactKeypointsBuffer=_compactKeypointsBuffer - In the implementation block
@property (retain) id<MTLBuffer> refinedKeypointsBuffer;                            //@synthesize refinedKeypointsBuffer=_refinedKeypointsBuffer - In the implementation block
@property (retain) id<MTLBuffer> compactKeypointsAndResponsesBuffer;                //@synthesize compactKeypointsAndResponsesBuffer=_compactKeypointsAndResponsesBuffer - In the implementation block
@property (retain) id<MTLBuffer> responseBuffer;                                    //@synthesize responseBuffer=_responseBuffer - In the implementation block
@property (retain) id<MTLBuffer> descriptorBuffer;                                  //@synthesize descriptorBuffer=_descriptorBuffer - In the implementation block
@property (retain) id<MTLBuffer> keypointCountBuffer;                               //@synthesize keypointCountBuffer=_keypointCountBuffer - In the implementation block
@property (retain) id<MTLBuffer> mpsRegionStrideBuffer;                             //@synthesize mpsRegionStrideBuffer=_mpsRegionStrideBuffer - In the implementation block
@property (retain) id<MTLBuffer> refinementIntermediatesBuffer;                     //@synthesize refinementIntermediatesBuffer=_refinementIntermediatesBuffer - In the implementation block
@property (assign) unsigned maxRegionHeight;                                        //@synthesize maxRegionHeight=_maxRegionHeight - In the implementation block
@property (assign) unsigned countOfRectRegions;                                     //@synthesize countOfRectRegions=_countOfRectRegions - In the implementation block
@property (assign) unsigned long long maxDescriptorCount;                           //@synthesize maxDescriptorCount=_maxDescriptorCount - In the implementation block
-(id<MTLTexture>)responseTexture;
-(id<MTLTexture>)suppressedResponseTexture_RGBA8Uint;
-(id<MTLTexture>)suppressedResponseTexture_R8Unorm;
-(id<MTLBuffer>)rectRegionsBuffer;
-(id<MTLBuffer>)rectRegionsDesiredKeypoints;
-(id<MTLBuffer>)thresholdsBuffer;
-(id<MTLBuffer>)histogramsBuffer;
-(id<MTLBuffer>)thresholdRangeBuffer;
-(id<MTLBuffer>)countOfKeypointsPerRegion;
-(id<MTLBuffer>)truncatedRegionsBuffer;
-(unsigned)countOfRectRegions;
-(unsigned)maxRegionHeight;
-(id<MTLBuffer>)rectRegionCount;
-(id<MTLBuffer>)keypointCountBuffer;
-(id<MTLTexture>)suppressedResponseTexture_R8Uint;
-(id<MTLBuffer>)compactKeypointsBuffer;
-(id<MTLBuffer>)refinementIntermediatesBuffer;
-(id<MTLTexture>)boxBlurredTexture_R8Uint;
-(id<MTLTexture>)gaussianBlurredTexture_R8Unorm;
-(id<MTLTexture>)gaussianBlurredTexture_RGBA8Uint;
-(void)_reinitializeIntermediateBuffersWithDevice:(id)arg1 templateImage:(CVBufferRef)arg2 rectRegions:(id)arg3 maxKeypointsPerRegion:(int)arg4 minKeypointResponseThreshold:(float)arg5 ;
-(id)initWithDevice:(id)arg1 templateImage:(CVBufferRef)arg2 rectRegions:(id)arg3 maxKeypointsPerRegion:(int)arg4 minKeypointResponseThreshold:(float)arg5 ;
-(MPSKernel *)mpsFindKeypoints;
-(void)setMpsFindKeypoints:(MPSKernel *)arg1 ;
-(MPSKernel *)mpsHistogram;
-(void)setMpsHistogram:(MPSKernel *)arg1 ;
-(void)setRectRegionsBuffer:(id<MTLBuffer>)arg1 ;
-(void)setRectRegionCount:(id<MTLBuffer>)arg1 ;
-(void)setRectRegionsDesiredKeypoints:(id<MTLBuffer>)arg1 ;
-(void)setThresholdRangeBuffer:(id<MTLBuffer>)arg1 ;
-(NSArray *)rectRegions;
-(void)setRectRegions:(NSArray *)arg1 ;
-(int)maxKeypointsPerRegion;
-(void)setMaxKeypointsPerRegion:(int)arg1 ;
-(void)setGaussianBlurredTexture_RGBA8Uint:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)gaussianBlurredTexture_R8Uint;
-(void)setGaussianBlurredTexture_R8Uint:(id<MTLTexture>)arg1 ;
-(void)setGaussianBlurredTexture_R8Unorm:(id<MTLTexture>)arg1 ;
-(void)setResponseTexture:(id<MTLTexture>)arg1 ;
-(void)setSuppressedResponseTexture_RGBA8Uint:(id<MTLTexture>)arg1 ;
-(void)setSuppressedResponseTexture_R8Uint:(id<MTLTexture>)arg1 ;
-(void)setSuppressedResponseTexture_R8Unorm:(id<MTLTexture>)arg1 ;
-(void)setBoxBlurredTexture_R8Uint:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)boxBlurredTexture_RGBA8Uint;
-(void)setBoxBlurredTexture_RGBA8Uint:(id<MTLTexture>)arg1 ;
-(void)setThresholdsBuffer:(id<MTLBuffer>)arg1 ;
-(void)setHistogramsBuffer:(id<MTLBuffer>)arg1 ;
-(void)setCountOfKeypointsPerRegion:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)cumulativeCountOfKeypointsPerRegion;
-(void)setCumulativeCountOfKeypointsPerRegion:(id<MTLBuffer>)arg1 ;
-(void)setTruncatedRegionsBuffer:(id<MTLBuffer>)arg1 ;
-(void)setCompactKeypointsBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)refinedKeypointsBuffer;
-(void)setRefinedKeypointsBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)compactKeypointsAndResponsesBuffer;
-(void)setCompactKeypointsAndResponsesBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)responseBuffer;
-(void)setResponseBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)descriptorBuffer;
-(void)setDescriptorBuffer:(id<MTLBuffer>)arg1 ;
-(void)setKeypointCountBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)mpsRegionStrideBuffer;
-(void)setMpsRegionStrideBuffer:(id<MTLBuffer>)arg1 ;
-(void)setRefinementIntermediatesBuffer:(id<MTLBuffer>)arg1 ;
-(void)setMaxRegionHeight:(unsigned)arg1 ;
-(void)setCountOfRectRegions:(unsigned)arg1 ;
-(unsigned long long)maxDescriptorCount;
-(void)setMaxDescriptorCount:(unsigned long long)arg1 ;
@end

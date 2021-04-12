/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNTargetedImageRequest.h>

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest {

	BOOL _enableFiltering;
	float _filterLumaWeight;
	float _filterChromaWeight;
	float _filterOcclusionWeight;
	unsigned long long _levelCount;
	unsigned long long _warpCount;
	unsigned long long _filterSize;
	unsigned long long _filterSamplingDensity;

}

@property (assign,nonatomic) unsigned long long levelCount;                         //@synthesize levelCount=_levelCount - In the implementation block
@property (assign,nonatomic) unsigned long long warpCount;                          //@synthesize warpCount=_warpCount - In the implementation block
@property (assign,nonatomic) BOOL enableFiltering;                                  //@synthesize enableFiltering=_enableFiltering - In the implementation block
@property (assign,nonatomic) unsigned long long filterSize;                         //@synthesize filterSize=_filterSize - In the implementation block
@property (assign,nonatomic) unsigned long long filterSamplingDensity;              //@synthesize filterSamplingDensity=_filterSamplingDensity - In the implementation block
@property (assign,nonatomic) float filterLumaWeight;                                //@synthesize filterLumaWeight=_filterLumaWeight - In the implementation block
@property (assign,nonatomic) float filterChromaWeight;                              //@synthesize filterChromaWeight=_filterChromaWeight - In the implementation block
@property (assign,nonatomic) float filterOcclusionWeight;                           //@synthesize filterOcclusionWeight=_filterOcclusionWeight - In the implementation block
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)initWithTargetedImageSpecifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CVBufferRef)_createLKTPixelBufferFromPixelRegionOfInterest:(CGRect)arg1 inImageBuffer:(id)arg2 error:(id*)arg3 ;
-(CVBufferRef)_createLKTVectorResultPixelBufferForImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_initializedLKTMetalContextAndReturnError:(id*)arg1 ;
-(BOOL)_calculateLKTVectorResult:(CVBufferRef)arg1 fromPixelBuffer:(CVBufferRef)arg2 toPixelBuffer:(CVBufferRef)arg3 ofWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)_validateParameters:(id*)arg1 ;
-(unsigned long long)levelCount;
-(void)setLevelCount:(unsigned long long)arg1 ;
-(unsigned long long)warpCount;
-(void)setWarpCount:(unsigned long long)arg1 ;
-(BOOL)enableFiltering;
-(void)setEnableFiltering:(BOOL)arg1 ;
-(unsigned long long)filterSize;
-(void)setFilterSize:(unsigned long long)arg1 ;
-(unsigned long long)filterSamplingDensity;
-(void)setFilterSamplingDensity:(unsigned long long)arg1 ;
-(float)filterLumaWeight;
-(void)setFilterLumaWeight:(float)arg1 ;
-(float)filterChromaWeight;
-(void)setFilterChromaWeight:(float)arg1 ;
-(float)filterOcclusionWeight;
-(void)setFilterOcclusionWeight:(float)arg1 ;
@end


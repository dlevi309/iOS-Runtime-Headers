/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNTargetedImageRequest.h>

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest {

	unsigned long long _computationAccuracy;
	BOOL _enableFiltering;
	unsigned _outputPixelFormat;
	float _filterLumaWeight;
	float _filterChromaWeight;
	float _filterOcclusionWeight;
	unsigned long long _levelCount;
	unsigned long long _warpCount;
	unsigned long long _filterSize;
	unsigned long long _filterSamplingDensity;

}

@property (assign,nonatomic) unsigned long long generateLevel; 
@property (assign,nonatomic) unsigned long long levelCount;                         //@synthesize levelCount=_levelCount - In the implementation block
@property (assign,nonatomic) unsigned long long warpCount;                          //@synthesize warpCount=_warpCount - In the implementation block
@property (assign,nonatomic) BOOL enableFiltering;                                  //@synthesize enableFiltering=_enableFiltering - In the implementation block
@property (assign,nonatomic) unsigned long long filterSize;                         //@synthesize filterSize=_filterSize - In the implementation block
@property (assign,nonatomic) unsigned long long filterSamplingDensity;              //@synthesize filterSamplingDensity=_filterSamplingDensity - In the implementation block
@property (assign,nonatomic) float filterLumaWeight;                                //@synthesize filterLumaWeight=_filterLumaWeight - In the implementation block
@property (assign,nonatomic) float filterChromaWeight;                              //@synthesize filterChromaWeight=_filterChromaWeight - In the implementation block
@property (assign,nonatomic) float filterOcclusionWeight;                           //@synthesize filterOcclusionWeight=_filterOcclusionWeight - In the implementation block
@property (assign,nonatomic) unsigned long long computationAccuracy; 
@property (assign,nonatomic) unsigned outputPixelFormat;                            //@synthesize outputPixelFormat=_outputPixelFormat - In the implementation block
-(unsigned)outputPixelFormat;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(unsigned long long)levelCount;
-(id)initWithTargetedImageBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 previousObservation:(id)arg3 error:(id*)arg4 ;
-(id)_createGeneratorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 images:(id)arg3 previousTargetImageIsCurrentRefImage:(BOOL)arg4 previousObservation:(id)arg5 ;
-(unsigned long long)generateLevel;
-(void)setGenerateLevel:(unsigned long long)arg1 ;
-(unsigned long long)warpCount;
-(unsigned long long)computationAccuracy;
-(void)setComputationAccuracy:(unsigned long long)arg1 ;
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
-(void)setLevelCount:(unsigned long long)arg1 ;
@end


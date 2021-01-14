/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@class MPSImageGaussianBlur;

@interface MPSImageCanny : MPSUnaryImageKernel {

	float _colVec[3];
	float lThresh;
	float hThresh;
	BOOL _useFastMode;
	float _maxEdgeTracingIterations;
	unsigned short _canny_window;
	MPSImageGaussianBlur* gaussKernel;
	id<MTLBuffer> _indirectDispatchBufferArgs;

}

@property (assign,nonatomic) float maxEdgeTracingIterations;              //@synthesize maxEdgeTracingIterations=_maxEdgeTracingIterations - In the implementation block
@property (nonatomic,readonly) const float* colorTransform; 
@property (nonatomic,readonly) float sigma; 
@property (assign,nonatomic) float highThreshold; 
@property (assign,nonatomic) float lowThreshold; 
@property (assign,nonatomic) BOOL useFastMode;                            //@synthesize useFastMode=_useFastMode - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)sigma;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 linearToGrayScaleTransform:(const float*)arg2 sigma:(float)arg3 ;
-(const float*)colorTransform;
-(float)lowThreshold;
-(void)setLowThreshold:(float)arg1 ;
-(float)highThreshold;
-(void)setHighThreshold:(float)arg1 ;
-(BOOL)useFastMode;
-(void)setUseFastMode:(BOOL)arg1 ;
-(float)maxEdgeTracingIterations;
-(void)setMaxEdgeTracingIterations:(float)arg1 ;
@end


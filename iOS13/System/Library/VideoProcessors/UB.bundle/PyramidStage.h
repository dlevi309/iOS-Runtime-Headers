/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLBuffer;
#import <UB/UB-Structs.h>
@class PyramidStorage, FigM2MController, FigMetalContext;

@interface PyramidStage : NSObject {

	PyramidStageConfiguration _conf;
	PyramidStorage* _pyr;
	FigM2MController* _m2mController;
	FigMetalContext* _metal;
	id<MTLBuffer> _uniforms_Y[20];
	id<MTLBuffer> _uniforms_UV[20];
	BOOL _forceHW;
	int _band0ColorSpace;
	ColorSpaceConversionParameters _colorSpaceConversionParameters;

}

@property (nonatomic,readonly) BOOL useM2M; 
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithOptions:(id)arg1 context:(id)arg2 ;
-(int)setResourcesWithPyramid:(id)arg1 ;
-(int)runWithFilters:(PyramidFilterParams*)arg1 ;
-(void)setColorSpace:(int)arg1 withParams:(const ColorSpaceConversionParameters*)arg2 ;
-(int)runGPUWithFilters:(PyramidFilterParams*)arg1 doShift:(BOOL)arg2 ;
-(BOOL)dumpIntermediateData:(id)arg1 counter:(int)arg2 ;
-(int)runM2MWithFilters:(PyramidFilterParams*)arg1 ;
-(BOOL)useM2M;
@end


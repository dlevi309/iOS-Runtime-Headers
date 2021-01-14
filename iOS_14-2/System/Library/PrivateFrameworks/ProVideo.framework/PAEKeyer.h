/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEKeyer : PAEFilterDefaultBase {

	OMSamples* _omSamples;
	BOOL _isMotion;
	SCD_Struct_PV22 _prevRationalTime;
	SCD_Union_PA93* _prevRectanglesFrame;
	HGBitmapLoader* _lutsBitmapLoaderCache;
	PCMutex* _cacheMutex;
	PAEKeyerMatteTools* _matteTools;
	PAEKeyerPreprocess* _preprocessTools;

}
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfo:(SCD_Struct_PA83)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(void)getInputWidth:(float*)arg1 height:(float*)arg2 renderInfo:(SCD_Struct_PA84*)arg3 ;
-(double)autokeyAmountToHistoPercent:(double)arg1 ;
-(int)getColorPrimaries;
-(BOOL)use32x32Histogram;
-(BOOL)pullInitialKey:(id*)arg1 ;
-(BOOL)isSimpleKey;
-(HGRef<HGNode>*)getKeyerNode:(HGRef<HGNode>*)arg1 omKeyer:(PAEKeyerOMKeyer2D*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)isLumaKey;
-(BOOL)sampleEdge:(OMSamplesElem*)arg1 renderInfo:(SCD_Struct_PA84*)arg2 width:(float)arg3 height:(float)arg4 ;
-(BOOL)sampleRect:(OMSamplesElem*)arg1 renderInfo:(SCD_Struct_PA84*)arg2 width:(float)arg3 height:(float)arg4 ;
-(void)computeModel:(BOOL)arg1 atTime:(/*function pointer*/void**)arg2 ;
-(void)clearKey;
-(id)getBlendOptionsAtTime:(/*function pointer*/void**)arg1 ;
-(id)apiManager;
-(void)setInitialSamples:(OMSamplesElem*)arg1 ;
@end


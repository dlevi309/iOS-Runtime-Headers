/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface FigM2MController : NSObject {

	SCD_Struct_Fi33 _cap;
	IOSurfaceAcceleratorRef _accelRef;
	BOOL _useCustomCoeff;
	CFDictionaryRef _runOptions;

}
-(id)init;
-(int)setCustomFilter:(int)arg1 alignment:(int)arg2 sourceWidth:(unsigned long long)arg3 sourceHeight:(unsigned long long)arg4 destinationWidth:(unsigned long long)arg5 destinationHeight:(unsigned long long)arg6 luma_param:(float)arg7 chroma_param:(float)arg8 ;
-(int)transform:(CVBufferRef)arg1 srcRect:(CGRect)arg2 dst:(CVBufferRef)arg3 dstRect:(CGRect)arg4 rotate:(int)arg5 flipX:(BOOL)arg6 flipY:(BOOL)arg7 sync_m2m:(BOOL)arg8 ;
-(int)queryCapabilities;
-(int)_transform:(CVBufferRef)arg1 srcRect:(CGRect)arg2 dst:(CVBufferRef)arg3 dstRect:(CGRect)arg4 symmetricTransform:(unsigned)arg5 sync_m2m:(BOOL)arg6 ;
-(int)transform:(CVBufferRef)arg1 srcRect:(CGRect)arg2 dst:(CVBufferRef)arg3 dstRect:(CGRect)arg4 rotate:(int)arg5 sync_m2m:(BOOL)arg6 ;
-(int)transform:(CVBufferRef)arg1 srcRect:(CGRect)arg2 dst:(CVBufferRef)arg3 sync_m2m:(BOOL)arg4 ;
-(int)setHistogramMode:(int)arg1 dstRect:(CGRect)arg2 ;
-(int)copyHistogram:(SCD_Struct_Fi36*)arg1 ;
-(int)setCustomFilter:(int)arg1 alignment:(int)arg2 src:(CVBufferRef)arg3 dst:(CVBufferRef)arg4 luma_param:(float)arg5 chroma_param:(float)arg6 ;
-(int)clearHistorgramMode;
-(int)downsample:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 sync_m2m:(BOOL)arg3 ;
-(void)dealloc;
@end


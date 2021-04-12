/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	float _personSegmentationMainImageDownscalingFactor;
	BWPixelBufferPool* _personSegmentationPool;
	OpaqueVTPixelTransferSessionRef _personSegmentationScalingSession;
	opaqueCMFormatDescriptionRef _personSegmentationOutputFormatDescription;
	BOOL _defersCropToPhotoEncoderWhenPossible;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(void)_purgeResources;
-(int)_updatePoolWithSettings:(id)arg1 processingFlags:(unsigned)arg2 normalizedInputCropRect:(CGRect)arg3 scaledDenormalizedInputCropRectOut:(CGRect*)arg4 ;
-(int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_buildScalingSession;
-(void)setDefersCropToPhotoEncoderWhenPossible:(BOOL)arg1 ;
-(BOOL)defersCropToPhotoEncoderWhenPossible;
-(void)setPersonSegmentationMainImageDownscalingFactor:(float)arg1 ;
-(float)personSegmentationMainImageDownscalingFactor;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool, NSMutableDictionary;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	BOOL _blackFillingRequired;
	NSMutableDictionary* _mainImageDownscalingFactorByAttachedMediaKey;
	NSMutableDictionary* _pixelBufferPoolByAttachedMediaKey;
	OpaqueVTPixelTransferSessionRef _attachedMediaScalingSession;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)blackFillingRequired;
-(int)_blackenBorderAttachedMediasOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 normalizedInputCropRect:(CGRect)arg2 requestedSettings:(id)arg3 scaleFactor:(float)arg4 ;
-(int)_buildScalingSession;
-(int)_zoomAttachedMediasOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 normalizedInputCropRect:(CGRect)arg2 requestedSettings:(id)arg3 scaleFactor:(float)arg4 ;
-(void)setBlackFillingRequired:(BOOL)arg1 ;
-(BOOL)_decompressionRequiredWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)mainImageDownscalingFactorByAttachedMediaKey;
-(void)setMainImageDownscalingFactorByAttachedMediaKey:(id)arg1 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(int)_removeUnmodifiedAttachedMedias:(opaqueCMSampleBufferRef)arg1 ;
-(int)_resolveScalerModeAndUpdatePoolWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaleFactor:(float)arg3 stillImageScalerModeOut:(int*)arg4 scaledDenormalizedInputCropRectOut:(CGRect*)arg5 ;
-(void)dealloc;
-(void)_purgeResources;
@end


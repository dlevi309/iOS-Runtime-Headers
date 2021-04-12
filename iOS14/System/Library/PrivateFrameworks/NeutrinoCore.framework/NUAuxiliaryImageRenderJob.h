/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@protocol NUAuxiliaryImage;
@class CIRenderTask, NUCVPixelBuffer;

@interface NUAuxiliaryImageRenderJob : NURenderJob {

	unsigned _pixelFormat;
	CIRenderTask* _renderTask;
	NUCVPixelBuffer* _cvBuffer;
	id<NUAuxiliaryImage> _auxiliaryImage;
	long long _auxiliaryImageType;

}

@property (retain) id<NUAuxiliaryImage> auxiliaryImage;              //@synthesize auxiliaryImage=_auxiliaryImage - In the implementation block
@property (assign) long long auxiliaryImageType;                     //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
-(id<NUAuxiliaryImage>)auxiliaryImage;
-(void)setAuxiliaryImageType:(long long)arg1 ;
-(BOOL)complete:(out id*)arg1 ;
-(BOOL)render:(out id*)arg1 ;
-(id)result;
-(void)cleanUp;
-(BOOL)prepare:(out id*)arg1 ;
-(long long)auxiliaryImageType;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id)scalePolicy;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(void)setAuxiliaryImage:(id<NUAuxiliaryImage>)arg1 ;
@end


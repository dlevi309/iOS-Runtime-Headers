/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(void)cleanUp;
-(long long)auxiliaryImageType;
-(BOOL)complete:(out id*)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(void)setAuxiliaryImageType:(long long)arg1 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id)scalePolicy;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(id<NUAuxiliaryImage>)auxiliaryImage;
-(void)setAuxiliaryImage:(id<NUAuxiliaryImage>)arg1 ;
@end


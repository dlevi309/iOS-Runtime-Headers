/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/MTLSpline.framework/MTLSpline
*/


@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState, MTLRenderPipelineState;
#import <MTLSpline/MTLSpline-Structs.h>
@class MTKView, NSMutableArray;

@interface MTLSplineRenderer : NSObject {

	float _edgeFactor;
	float _insideFactor;
	MTKView* _view;
	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computeTessellationFactorsPipeline;
	id<MTLRenderPipelineState> _renderPostTessellationPipelineState;
	NSMutableArray* _dataCollection;
	unsigned long long _triangleFillMode;
	SCD_Struct_MT11 _projectionMatrix;

}

@property (retain) NSMutableArray * dataCollection;                  //@synthesize dataCollection=_dataCollection - In the implementation block
@property (assign) SCD_Struct_MT11 projectionMatrix;                 //@synthesize projectionMatrix=_projectionMatrix - In the implementation block
@property (assign) unsigned long long triangleFillMode;              //@synthesize triangleFillMode=_triangleFillMode - In the implementation block
-(id)init;
-(void)setTriangleFillMode:(unsigned long long)arg1 ;
-(SCD_Struct_MT11)projectionMatrix;
-(void)setProjectionMatrix:(SCD_Struct_MT11)arg1 ;
-(id)initWithMTKView:(id)arg1 dataCollection:(id)arg2 ;
-(void)createPipelineStates;
-(void)renderWithCommandBuffer:(id)arg1 ;
-(void)setDataCollection:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataCollection;
-(void)computeTessellationFactors:(id)arg1 data:(id)arg2 ;
-(void)renderPostTessellation:(id)arg1 data:(id)arg2 ;
-(void)renderToTextureWithCommandBuffer:(id)arg1 texture:(id)arg2 ;
-(unsigned long long)triangleFillMode;
@end


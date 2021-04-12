/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;
#import <CameraUI/CameraUI-Structs.h>
@class CAMetalLayer;

@interface CAMLiquidShutterRenderer : NSObject {

	BOOL _showDragHandle;
	BOOL _needsRender;
	BOOL __backgrounded;
	double _blurRadius;
	CAMetalLayer* _metalLayer;
	id<MTLDevice> __device;
	id<MTLCommandQueue> __commandQueue;
	id<MTLRenderPipelineState> __renderPipelineState;
	SCD_Struct_CA36 _centerShape;
	SCD_Struct_CA36 _dragHandleShape;

}

@property (nonatomic,readonly) id<MTLDevice> _device;                                        //@synthesize _device=__device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> _commandQueue;                            //@synthesize _commandQueue=__commandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLRenderPipelineState> _renderPipelineState;              //@synthesize _renderPipelineState=__renderPipelineState - In the implementation block
@property (assign,setter=_setBackgrounded:,nonatomic) BOOL _backgrounded;                    //@synthesize _backgrounded=__backgrounded - In the implementation block
@property (assign,nonatomic) SCD_Struct_CA37 centerShape;                                    //@synthesize centerShape=_centerShape - In the implementation block
@property (assign,nonatomic) SCD_Struct_CA37 dragHandleShape;                                //@synthesize dragHandleShape=_dragHandleShape - In the implementation block
@property (assign,nonatomic) BOOL showDragHandle;                                            //@synthesize showDragHandle=_showDragHandle - In the implementation block
@property (assign,nonatomic) double blurRadius;                                              //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) BOOL needsRender;                                               //@synthesize needsRender=_needsRender - In the implementation block
@property (assign,nonatomic,__weak) CAMetalLayer * metalLayer;                               //@synthesize metalLayer=_metalLayer - In the implementation block
-(void)dealloc;
-(id<MTLDevice>)_device;
-(id<MTLCommandQueue>)_commandQueue;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(void)_applicationDidEnterBackground;
-(BOOL)_backgrounded;
-(void)_applicationWillEnterForeground;
-(id<MTLRenderPipelineState>)_renderPipelineState;
-(CAMetalLayer *)metalLayer;
-(void)_setBackgrounded:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 pixelFormat:(unsigned long long)arg3 ;
-(void)setMetalLayer:(CAMetalLayer *)arg1 ;
-(void)renderIfNecessary;
-(void)setCenterShape:(SCD_Struct_CA37)arg1 ;
-(void)setDragHandleShape:(SCD_Struct_CA37)arg1 ;
-(void)setShowDragHandle:(BOOL)arg1 ;
-(void)setNeedsRender:(BOOL)arg1 ;
-(BOOL)showDragHandle;
-(BOOL)needsRender;
-(SCD_Struct_CA37)centerShape;
-(SCD_Struct_CA38)_fragmentForShape:(SCD_Struct_CA37)arg1 scale:(double)arg2 ;
-(SCD_Struct_CA37)dragHandleShape;
-(SCD_Struct_CA39)_orthographicMatrixWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6 ;
@end


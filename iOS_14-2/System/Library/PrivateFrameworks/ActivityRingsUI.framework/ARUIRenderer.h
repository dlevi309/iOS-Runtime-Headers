/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLDeviceSPI, MTLCommandQueue;
@class ARUIRingsRenderPipelineFactory, ARUIRingsRenderer, ARUISpritesRenderer;

@interface ARUIRenderer : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLCommandQueue> _commandQueue;
	ARUIRingsRenderPipelineFactory* _ringsRenderPipelineFactory;
	ARUIRingsRenderer* _ringsRenderer;
	ARUISpritesRenderer* _spritesRenderer;
	unsigned long long _renderStyle;

}

@property (nonatomic,readonly) unsigned long long renderStyle;              //@synthesize renderStyle=_renderStyle - In the implementation block
-(void)clearCaches;
-(id)init;
-(id)initWithCommandQueue:(id)arg1 ;
-(unsigned long long)renderStyle;
-(void)renderRingGroupControllers:(id)arg1 withSize:(id)arg2 intoTexture:(id)arg3 withDrawable:(BOOL)arg4 waitUntilCompleted:(/*^block*/id)arg5 ;
-(id)initWithRenderStyle:(unsigned long long)arg1 commandQueue:(id)arg2 ;
-(id)renderPipelineFactoryWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(void)_renderRings:(id)arg1 spriteSheet:(id)arg2 intoTexture:(id)arg3 presentingDrawable:(id)arg4 withContext:(id)arg5 waitUntilCompleted:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(id)ringsRenderPipelineConfigurationForRings:(id)arg1 context:(id)arg2 ;
-(id)_snapshotRings:(id)arg1 spriteSheet:(id)arg2 withContext:(id)arg3 ;
-(id)snapshotRings:(id)arg1 spriteSheet:(id)arg2 withContext:(id)arg3 ;
-(id)initWithRenderStyle:(unsigned long long)arg1 ;
-(id)renderPipelineFactoryWithDevice:(id)arg1 library:(id)arg2 ;
-(void)renderRings:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3 ;
-(void)renderRings:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)renderRings:(id)arg1 spriteSheet:(id)arg2 intoDrawable:(id)arg3 withContext:(id)arg4 ;
-(void)renderRings:(id)arg1 spriteSheet:(id)arg2 intoDrawable:(id)arg3 withContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)snapshotRings:(id)arg1 withContext:(id)arg2 ;
-(id)snapshotRingGroupControllers:(id)arg1 ;
@end


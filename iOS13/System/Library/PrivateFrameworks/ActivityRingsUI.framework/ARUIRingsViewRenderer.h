/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIRingsRendering.h>

@protocol MTLDeviceSPI, MTLCommandQueue;
@class ARUIRingsRenderPipelineFactory, ARUIRingsRenderer, ARUISpritesRenderPipelineFactory, ARUISpritesRenderer, ARUICelebrationsRenderer, NSString;

@interface ARUIRingsViewRenderer : NSObject <ARUIRingsRendering> {

	id<MTLDeviceSPI> _device;
	id<MTLCommandQueue> _commandQueue;
	ARUIRingsRenderPipelineFactory* _ringsRenderPipelineFactory;
	ARUIRingsRenderer* _ringsRenderer;
	ARUISpritesRenderPipelineFactory* _spritesRenderPipelineFactory;
	ARUISpritesRenderer* _spritesRenderer;
	ARUICelebrationsRenderer* _celebrationsRenderer;
	double _screenScale;
	BOOL _presentsWithTransaction;
	unsigned long long _maximumRingCount;

}

@property (assign,nonatomic) BOOL presentsWithTransaction;                       //@synthesize presentsWithTransaction=_presentsWithTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumRingCount;              //@synthesize maximumRingCount=_maximumRingCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maximumRingCountForControllers:(id)arg1 ;
+(id)rendererForRingGroupController:(id)arg1 ;
+(id)rendererForRingGroupControllers:(id)arg1 ;
-(void)dealloc;
-(BOOL)presentsWithTransaction;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(id)initWithMaximumRingCount:(unsigned long long)arg1 ;
-(id)initWithMaximumRingCount:(unsigned long long)arg1 commandQueue:(id)arg2 ;
-(id)renderPipelineFactoryWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(id)ringsRenderPipelineConfigurationForRings:(id)arg1 ;
-(id)ringsRenderPipelineConfigurationForRingGroupController:(id)arg1 ;
-(id)spriteRenderPipelineConfigurationForRingGroupController:(id)arg1 ;
-(void)_updateSpriteUniformsForRingGroupController:(id)arg1 andRingIndex:(unsigned long long)arg2 ;
-(void)_updateSpriteAttributesForRingGroupController:(id)arg1 andRingIndex:(unsigned long long)arg2 ;
-(void)renderRingGroupControllers:(id)arg1 withSize:(id)arg2 intoTexture:(id)arg3 withDrawable:(BOOL)arg4 waitUntilCompleted:(/*^block*/id)arg5 ;
-(id)ringTextureWithCommandBuffer:(id)arg1 rings:(id)arg2 ;
-(id)renderPipelineFactoryWithDevice:(id)arg1 library:(id)arg2 ;
-(id)snapshotRingGroupControllers:(id)arg1 ;
-(void)prewarmRendererForCelebrationOfType:(unsigned long long)arg1 ;
-(unsigned long long)maximumRingCount;
@end


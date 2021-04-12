/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNSourceRendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(id)init;
-(void)dealloc;
-(void)rendererDidChange:(id)arg1 ;
-(id)sourceRendererForEngineContext:(C3DEngineContextRef)arg1 source:(id)arg2 textureSource:(id)arg3 targetTexture:(id)arg4 ;
-(void)endFrameForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForSource:(id)arg1 ;
@end


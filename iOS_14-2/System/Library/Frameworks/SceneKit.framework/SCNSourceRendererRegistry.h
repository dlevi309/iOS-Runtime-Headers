/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNSourceRendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(id)init;
-(void)rendererDidChange:(id)arg1 ;
-(void)dealloc;
-(id)sourceRendererForEngineContext:(C3DEngineContextRef)arg1 source:(id)arg2 textureSource:(id)arg3 targetTexture:(id)arg4 ;
-(void)endFrameForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForSource:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSMutableDictionary;

@interface SCNMTLShaderBindingsGenerator : NSObject {

	os_unfair_lock_s _generateLock;
	SCD_Struct_SC127* _current;
	NSMutableDictionary* _nodeBindings;
	NSMutableDictionary* _frameBindings;
	NSMutableDictionary* _shadableBindings;
	NSMutableDictionary* _passBindings;
	NSMutableDictionary* _lightBindings;
	SCD_Struct_SC51 _sceneBuffer;

}
+(void)allocateRegistry;
+(void)registerSemantic:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)registerShadableArgumentBindingBlockForBuffers:(/*^block*/id)arg1 textures:(/*^block*/id)arg2 samplers:(/*^block*/id)arg3 ;
+(void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(BOOL)arg3 block:(/*^block*/id)arg4 ;
+(void)registerArgument:(id)arg1 frequency:(int)arg2 block:(/*^block*/id)arg3 ;
+(void)registerUserBlockTrampoline:(/*^block*/id)arg1 ;
+(void)deallocateRegistry;
-(id)init;
-(void)dealloc;
-(void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)addPassResourceBindingsForArgument:(id)arg1 ;
-(void)_parseArguments:(id)arg1 function:(id)arg2 renderPipeline:(id)arg3 ;
-(long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_dictionaryForFrequency:(int)arg1 ;
-(void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2 ;
-(void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(_C3DFXProgram*)arg3 material:(C3DMaterialRef)arg4 geometry:(_C3DGeometry*)arg5 pass:(_C3DFXPass*)arg6 ;
@end


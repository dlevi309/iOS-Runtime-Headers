/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {

	BOOL _useFunctionConstants;
	NSString* _originalSourceCode;
	NSArray* _injectionPointRanges;
	NSString* _originalLightingSourceCode;
	NSArray* _lightingInjectionPointRanges;

}
-(id)init;
-(int)profile;
-(void)dealloc;
-(void)emptyShaderCache;
-(void)collectShaderForProgram:(C3DFXMetalProgramRef)arg1 newVertexFunctionName:(id)arg2 newFragmentFunctionName:(id)arg3 sourceCodeBlock:(/*^block*/id)arg4 additionalFileBlock:(/*^block*/id)arg5 ;
-(C3DFXProgramRef)_newProgramWithHashCode:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
-(void)_loadSourceCode;
-(C3DFXProgramRef)_newProgramWithHashCodeWithFunctionConstants:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
@end


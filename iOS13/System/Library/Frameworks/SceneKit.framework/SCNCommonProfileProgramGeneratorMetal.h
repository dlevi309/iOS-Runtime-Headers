/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(int)profile;
-(void)emptyShaderCache;
-(C3DFXProgramRef)_newProgramWithHashCode:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
-(void)_loadSourceCode;
-(C3DFXProgramRef)_newProgramWithHashCodeWithFunctionConstants:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
@end


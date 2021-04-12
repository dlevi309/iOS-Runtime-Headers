/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNCommonProfileProgramGenerator : NSObject {

	os_unfair_lock_s _programMutex;
	CFDictionaryRef _shaders;
	CFDictionaryRef _trackedResourcesToHashcode;

}

@property (nonatomic,readonly) int profile; 
+(id)generatorWithProfile:(int)arg1 ;
+(id)deferredGeneratorWithProfile:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(int)profile;
-(void)emptyShaderCache;
-(C3DFXProgramRef)programWithHashCode:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void*)arg4 ;
-(void)releaseProgramForResource:(id)arg1 ;
@end


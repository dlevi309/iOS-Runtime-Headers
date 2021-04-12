/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLDevice, OS_dispatch_queue, OS_dispatch_group, MTLLibrary;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLLibrary, NSObject, NSDictionary, NSMapTable;

@interface SCNMTLLibraryManager : NSObject {

	id<MTLDevice> _device;
	SCNMTLLibrary* _frameworkLibrary;
	SCNMTLLibrary* _defaultLibrary;
	_C3DEngineStats* __engineStats;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSObject*<OS_dispatch_group> _shaderCompilationGroup;
	id<MTLLibrary> _commonProfileCacheLibrary;
	NSDictionary* _commonProfilePrecompiledFunctions;
	NSMapTable* _availableLibraries;
	CFDictionaryRef _availableCompiledLibraries;
	os_unfair_lock_s _availableCompiledLibrariesLock;

}
+(id)hashCodeForSource:(id)arg1 macros:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)device;
-(void)dealloc;
-(id)frameworkLibrary;
-(void)waitForShadersCompilation;
-(void)_setEngineStats:(_C3DEngineStats*)arg1 ;
-(void)clearCompiledLibraries;
-(id)libraryForSourceCode:(id)arg1 options:(id)arg2 ;
-(id)defaultLibrary;
-(id)commonProfileCacheLibrary;
-(id)shaderCompilationGroup;
-(id)deviceQueue;
-(id)libraryForFile:(id)arg1 ;
-(void)libraryForProgramDesc:(SCD_Struct_SC93*)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


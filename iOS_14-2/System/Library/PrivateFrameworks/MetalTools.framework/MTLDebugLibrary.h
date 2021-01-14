/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsLibrary.h>

@class MTLCompileOptions, NSArray;

@interface MTLDebugLibrary : MTLToolsLibrary {

	unsigned long long _debugType;
	id _code;
	MTLCompileOptions* _compileOptions;
	NSArray* _imageFilterFunctions;
	SCD_Struct_MT50* _imageFilterFunctionInfo;

}

@property (assign,nonatomic) unsigned long long debugType;                            //@synthesize debugType=_debugType - In the implementation block
@property (nonatomic,copy) id code;                                                   //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) MTLCompileOptions * compileOptions;                        //@synthesize compileOptions=_compileOptions - In the implementation block
@property (nonatomic,readonly) NSArray * imageFilterFunctions;                        //@synthesize imageFilterFunctions=_imageFilterFunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT50* imageFilterFunctionInfo;              //@synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo - In the implementation block
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newFunctionWithName:(id)arg1 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(void)setCode:(id)arg1 ;
-(void)newFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)code;
-(void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(unsigned long long)debugType;
-(id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5 ;
-(void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT50*)arg2 ;
-(void)validateDescriptor:(id)arg1 expectedClass:(Class)arg2 ;
-(id)copyConstantValues:(id)arg1 ;
-(void)setDebugType:(unsigned long long)arg1 ;
-(MTLCompileOptions *)compileOptions;
-(void)setCompileOptions:(MTLCompileOptions *)arg1 ;
-(NSArray *)imageFilterFunctions;
-(SCD_Struct_MT50*)imageFilterFunctionInfo;
@end


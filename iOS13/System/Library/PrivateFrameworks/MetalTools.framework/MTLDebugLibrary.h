/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsLibrary.h>

@class MTLCompileOptions, NSArray;

@interface MTLDebugLibrary : MTLToolsLibrary {

	unsigned long long _type;
	id _code;
	MTLCompileOptions* _compileOptions;
	NSArray* _imageFilterFunctions;
	SCD_Struct_MT62* _imageFilterFunctionInfo;

}

@property (assign,nonatomic) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id code;                                                   //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) MTLCompileOptions * compileOptions;                        //@synthesize compileOptions=_compileOptions - In the implementation block
@property (nonatomic,readonly) NSArray * imageFilterFunctions;                        //@synthesize imageFilterFunctions=_imageFilterFunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT62* imageFilterFunctionInfo;              //@synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)code;
-(id)newFunctionWithName:(id)arg1 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(void)setCode:(id)arg1 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT62*)arg2 ;
-(NSArray *)imageFilterFunctions;
-(SCD_Struct_MT62*)imageFilterFunctionInfo;
-(id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5 ;
-(MTLCompileOptions *)compileOptions;
-(void)setCompileOptions:(MTLCompileOptions *)arg1 ;
@end


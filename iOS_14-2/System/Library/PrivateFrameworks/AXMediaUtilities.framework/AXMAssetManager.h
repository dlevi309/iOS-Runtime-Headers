/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface AXMAssetManager : NSObject
+(id)defaultManager;
-(id)_modelsDirectoryForType:(unsigned long long)arg1 compiled:(BOOL)arg2 ;
-(id)_photoCaptionAssetsDirectory;
-(id)_compiledModelsDirectoryForType:(unsigned long long)arg1 ;
-(id)_modelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(BOOL)arg3 ;
-(id)_modelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(BOOL)arg3 ;
-(id)_modelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compiled:(BOOL)arg4 ;
-(id)compiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 ;
-(id)uncompiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 ;
-(id)_uncompiledModelsDirectoryForType:(unsigned long long)arg1 ;
-(id)compiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)uncompiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)compiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)uncompiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)modelWithName:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compileIfNeeded:(BOOL)arg4 persistCompiledModel:(BOOL)arg5 error:(id*)arg6 ;
@end


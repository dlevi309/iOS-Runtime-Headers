/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSArray, NSString;


@protocol MTLDynamicLibrarySPI <MTLDynamicLibrary>
@property (readonly) NSObject*<OS_dispatch_data> binaryData; 
@property (readonly) NSArray * exportedFunctions; 
@property (readonly) NSArray * exportedVariables; 
@property (readonly) NSArray * importedSymbols; 
@property (readonly) NSArray * importedLibraries; 
@property (readonly) NSString * libraryPath; 
@property (readonly) const SCD_Struct_MT20* libraryUUID; 
@required
-(id)formattedDescription:(unsigned long long)arg1;
-(NSArray *)importedSymbols;
-(NSArray *)importedLibraries;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(NSObject*<OS_dispatch_data>)binaryData;
-(NSArray *)exportedFunctions;
-(NSArray *)exportedVariables;
-(const SCD_Struct_MT20*)libraryUUID;
-(NSString *)libraryPath;

@end


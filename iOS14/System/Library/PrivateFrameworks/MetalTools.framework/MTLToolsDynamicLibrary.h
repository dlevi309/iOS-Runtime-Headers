/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLDynamicLibrarySPI.h>

@class NSArray, NSString;

@interface MTLToolsDynamicLibrary : MTLToolsObject <MTLDynamicLibrarySPI>

@property (readonly) NSObject*<OS_dispatch_data> binaryData; 
@property (readonly) NSArray * exportedFunctions; 
@property (readonly) NSArray * exportedVariables; 
@property (readonly) NSArray * importedSymbols; 
@property (readonly) NSArray * importedLibraries; 
@property (readonly) NSString * libraryPath; 
@property (readonly) const SCD_Struct_MT20* libraryUUID; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * installName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(NSString *)installName;
-(NSArray *)importedSymbols;
-(NSArray *)importedLibraries;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)serializeToURL:(id)arg1 error:(id*)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_data>)binaryData;
-(NSArray *)exportedFunctions;
-(NSArray *)exportedVariables;
-(const SCD_Struct_MT20*)libraryUUID;
-(NSString *)label;
-(NSString *)libraryPath;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLDynamicLibrarySPI.h>

@class NSArray, NSString, MTLDynamicLibraryContainer;

@interface _MTLDynamicLibrary : _MTLObjectWithLabel <MTLDynamicLibrarySPI> {

	NSString* _libraryPath;
	MTLDynamicLibraryContainer* _container;

}

@property (readonly) NSObject*<OS_dispatch_data> binaryData; 
@property (readonly) NSArray * exportedFunctions; 
@property (readonly) NSArray * exportedVariables; 
@property (readonly) NSArray * importedSymbols; 
@property (readonly) NSArray * importedLibraries; 
@property (readonly) NSString * libraryPath;                              //@synthesize libraryPath=_libraryPath - In the implementation block
@property (readonly) const SCD_Struct_MT19* libraryUUID; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * installName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(NSString *)description;
-(id)airData;
-(NSString *)installName;
-(NSArray *)importedSymbols;
-(NSArray *)importedLibraries;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)serializeToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithLibrary:(id)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSObject*<OS_dispatch_data>)binaryData;
-(NSArray *)exportedFunctions;
-(NSArray *)exportedVariables;
-(const SCD_Struct_MT19*)libraryUUID;
-(id)initWithURL:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)container;
-(NSString *)libraryPath;
-(void)dealloc;
@end


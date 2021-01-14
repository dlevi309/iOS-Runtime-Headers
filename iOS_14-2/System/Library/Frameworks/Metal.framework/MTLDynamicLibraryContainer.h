/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLDevice, OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class MTLLoadedFile, NSObject, NSArray, NSString, NSData;

@interface MTLDynamicLibraryContainer : NSObject {

	MTLLoadedFile* _fileMapping;
	id<MTLDevice> _device;
	NSObject*<OS_dispatch_data> _vendorData;
	NSArray* _exportedFunctions;
	NSArray* _exportedVariables;
	NSArray* _importedSymbols;
	NSArray* _importedLibraries;
	NSString* _installName;
	NSData* _airData;
	unsigned long long _airOffset;
	unsigned long long _airSize;
	int _airVersion;
	SCD_Struct_MT19 _libraryUUID;

}
-(oneway void)release;
-(id)airData;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithLibrary:(MTLLibraryData*)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end


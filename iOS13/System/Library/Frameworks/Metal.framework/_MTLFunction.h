/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLFunctionSPI.h>

@protocol MTLDevice;
@class NSString, MTLType, NSArray, NSDictionary, NSData;

@interface _MTLFunction : _MTLObjectWithLabel <MTLFunctionSPI> {

	id<MTLDevice> _device;
	unsigned long long _functionType;
	NSString* _name;
	MTLLibraryData* _libraryData;
	id _vendorPrivate;
	NSArray* _vertexAttributes;
	NSArray* _functionConstants;
	NSDictionary* _functionConstantDictionary;
	MTLType* _returnType;
	NSArray* _arguments;
	NSString* _unpackedFilePath;

}

@property (readonly) id<MTLDevice> device;                                       //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long functionType;                            //@synthesize functionType=_functionType - In the implementation block
@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) MTLLibraryData* libraryData;                                //@synthesize libraryData=_libraryData - In the implementation block
@property (copy) NSString * filePath; 
@property (assign) long long lineNumber; 
@property (copy) NSString * unpackedFilePath;                                    //@synthesize unpackedFilePath=_unpackedFilePath - In the implementation block
@property (assign,nonatomic) unsigned char bitcodeType; 
@property (assign) NSData * pluginData; 
@property (readonly) id vendorPrivate;                                           //@synthesize vendorPrivate=_vendorPrivate - In the implementation block
@property (readonly) unsigned long long bitCodeOffset; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (assign) NSArray * vertexAttributes; 
@property (assign) MTLType * returnType; 
@property (assign) NSArray * arguments; 
@property (assign) NSArray * functionConstants; 
@property (readonly) NSObject*<OS_dispatch_data> functionInputs; 
@property (readonly) BOOL needsFunctionConstantValues; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long patchType; 
@property (readonly) long long patchControlPointCount; 
@property (readonly) NSArray * stageInputAttributes; 
@property (readonly) NSDictionary * functionConstantsDictionary; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<MTLDevice>)device;
-(unsigned long long)functionType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(NSDictionary *)functionConstantsDictionary;
-(unsigned)functionRef;
-(MTLLibraryData*)libraryData;
-(unsigned long long)bitCodeFileSize;
-(const SCD_Struct_MT55*)bitCodeHash;
-(void)setUnpackedFilePath:(NSString *)arg1 ;
-(id)reflectionWithOptions:(unsigned long long)arg1 ;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bitcodeData;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2 ;
-(NSString *)unpackedFilePath;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 device:(id)arg4 ;
-(void)setVendorPrivate:(id)arg1 ;
-(id)vendorPrivate;
@end


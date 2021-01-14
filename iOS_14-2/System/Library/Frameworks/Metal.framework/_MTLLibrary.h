/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@protocol MTLDevice;
@class NSString, NSArray, NSMutableDictionary;

@interface _MTLLibrary : _MTLObjectWithLabel <MTLLibrarySPI> {

	id<MTLDevice> _device;
	MTLLibraryData* _libraryData;
	NSMutableDictionary* _functionDictionary;
	MTLLibraryContainer* _cacheEntry;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * functionDictionary;              //@synthesize functionDictionary=_functionDictionary - In the implementation block
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                                                   //@synthesize device=_device - In the implementation block
@property (retain,readonly) NSArray * functionNames; 
@property (retain,readonly) NSArray * externFunctionNames; 
@property (readonly) MTLLibraryData* libraryData;                                            //@synthesize libraryData=_libraryData - In the implementation block
@property (readonly) MTLLibraryContainer* cacheEntry;                                        //@synthesize cacheEntry=_cacheEntry - In the implementation block
@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * variableList; 
@property (readonly) long long type; 
@property (readonly) NSString * installName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTLLibraryData*)libraryData;
-(NSArray *)variableList;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newFunctionWithName:(id)arg1 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 specializedName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 specializedName:(id)arg4 error:(id*)arg5 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(id<MTLDevice>)device;
-(void)newFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(NSString *)description;
-(id)newExternFunctionWithName:(id)arg1 ;
-(NSString *)overrideTriple;
-(id)initWithLibraryContainer:(MTLLibraryContainer*)arg1 device:(id)arg2 ;
-(NSArray *)externFunctionNames;
-(NSString *)installName;
-(long long)type;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(id)libraryDataContents;
-(id)newFunctionWithNameInternal:(id)arg1 ;
-(MTLLibraryContainer*)cacheEntry;
-(NSArray *)functionNames;
-(void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)functionDictionary;
-(id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end


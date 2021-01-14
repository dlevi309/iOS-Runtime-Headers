/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLBinaryArchiveSPI.h>

@protocol MTLDevice, OS_dispatch_queue;
@class NSArray, MTLLoadedFile, NSData, NSObject, NSMutableDictionary, NSString;

@interface _MTLBinaryArchive : _MTLObjectWithLabel <MTLBinaryArchiveSPI> {

	id<MTLDevice> _device;
	unsigned long long _options;
	MTLLoadedFile* _fileMapping;
	NSData* _fileData;
	NSObject*<OS_dispatch_queue> _queue;
	map<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long>, CompareHash, std::__1::allocator<std::__1::pair<const MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > >* _fileIndex;
	NSMutableDictionary* _entries;
	unique_ptr<MTLPipelineCollection, std::__1::default_delete<MTLPipelineCollection> >* _pipelineCollection;
	BOOL _collectArchives;

}

@property (readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (readonly) NSArray * keys; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deserializeBinaryArchiveHeader:(SCD_Struct_MT27*)arg1 fileData:(id)arg2 device:(id)arg3 ;
+(BOOL)deserializeBinaryArchiveDescriptorMachO:(SCD_Struct_MT27*)arg1 fileData:(id)arg2 ;
+(id)descriptorDataForArchive:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(NSArray *)keys;
-(unsigned long long)options;
-(id<MTLDevice>)device;
-(NSString *)description;
-(id)initWithOptions:(unsigned long long)arg1 device:(id)arg2 url:(id)arg3 error:(id*)arg4 ;
-(id)materializeFromFileOffset:(unsigned long long)arg1 hash:(SCD_Struct_MT19*)arg2 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)materializeAll;
-(id)materializeFromHash:(SCD_Struct_MT19*)arg1 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)serializeToURL:(id)arg1 error:(id*)arg2 ;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2 ;
-(id)getBinaryDataForKey:(id)arg1 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end


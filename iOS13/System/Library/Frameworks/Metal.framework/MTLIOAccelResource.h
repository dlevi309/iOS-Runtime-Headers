/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class MTLResourceAllocationInfo, NSString;

@interface MTLIOAccelResource : NSObject <MTLResourceSPI> {

	MTLIOAccelResource* _res;
	MTLIOAccelResource* next;
	MTLIOAccelResource* prev;
	unsigned long long uniqueId;

}

@property (readonly) IOAccelResourceRef resourceRef; 
@property (nonatomic,readonly) void* virtualAddress; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned resourceID; 
@property (nonatomic,readonly) unsigned long long resourceSize; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLHeap> heap; 
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)storageMode;
-(unsigned long long)resourceOptions;
-(BOOL)isComplete;
-(id)initWithResource:(id)arg1 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)waitUntilComplete;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)protectionOptions;
-(void*)virtualAddress;
-(unsigned)resourceID;
-(BOOL)isPurgeable;
-(id<MTLHeap>)heap;
-(id)retainedLabel;
-(unsigned long long)gpuAddress;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(BOOL)isAliasable;
-(void)makeAliasable;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)heapOffset;
-(unsigned long long)allocatedSize;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOAccelNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(unsigned long long)resourceSize;
-(id)initMemoryless:(id)arg1 descriptor:(id)arg2 ;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(CFArrayRef)copyAnnotations;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(IOAccelResourceRef)resourceRef;
-(id)initStandinWithDevice:(id)arg1 ;
-(void)setAllocationInfoShared:(id)arg1 andCached:(id)arg2 ;
@end


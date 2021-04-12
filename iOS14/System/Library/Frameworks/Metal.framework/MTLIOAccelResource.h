/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLResource.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class NSString;

@interface MTLIOAccelResource : _MTLResource <MTLResourceSPI> {

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
@property (assign) int responsibleProcess; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)cpuCacheMode;
-(BOOL)isComplete;
-(id<MTLHeap>)heap;
-(BOOL)isAliasable;
-(unsigned long long)protectionOptions;
-(void)makeAliasable;
-(void)waitUntilComplete;
-(unsigned long long)storageMode;
-(id)initMemoryless:(id)arg1 descriptor:(id)arg2 ;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(void*)virtualAddress;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(unsigned long long)resourceSize;
-(unsigned long long)heapOffset;
-(id<MTLDevice>)device;
-(unsigned)resourceID;
-(unsigned long long)gpuAddress;
-(unsigned long long)allocatedSize;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(CFArrayRef)copyAnnotations;
-(unsigned long long)hazardTrackingMode;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(IOAccelResourceRef)resourceRef;
-(id)initStandinWithDevice:(id)arg1 ;
-(BOOL)isPurgeable;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithResource:(id)arg1 ;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOAccelNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(id)retainedLabel;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)label;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(unsigned long long)resourceOptions;
-(void)dealloc;
@end


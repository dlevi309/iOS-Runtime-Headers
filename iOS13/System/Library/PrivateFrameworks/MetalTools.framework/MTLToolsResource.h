/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class MTLResourceAllocationInfo, MTLToolsHeap, NSString;

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {

	unsigned long long _options;
	MTLToolsHeap* _heap;

}

@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
-(unsigned long long)options;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)storageMode;
-(unsigned long long)resourceOptions;
-(BOOL)isComplete;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)waitUntilComplete;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)protectionOptions;
-(BOOL)isPurgeable;
-(id<MTLHeap>)heap;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(BOOL)isAliasable;
-(void)makeAliasable;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)heapOffset;
-(unsigned long long)allocatedSize;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3 ;
-(void)validateCPUReadable;
-(void)validateCPUWriteable;
@end


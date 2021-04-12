/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class MTLToolsHeap, NSString;

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {

	unsigned long long _options;
	MTLToolsHeap* _heap;

}

@property (nonatomic,readonly) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (assign) int responsibleProcess; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
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
-(unsigned long long)options;
-(unsigned long long)heapOffset;
-(unsigned long long)allocatedSize;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(BOOL)isPurgeable;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)label;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(unsigned long long)resourceOptions;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3 ;
-(void)validateCPUReadable;
-(void)validateCPUWriteable;
@end


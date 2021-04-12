/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLIndirectCommandBufferSPI.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsIndirectCommandBuffer : MTLToolsResource <MTLIndirectCommandBufferSPI> {

	MTLToolsPointerArray* _indirectComputeCommand;
	MTLToolsPointerArray* _indirectRenderCommand;

}

@property (nonatomic,readonly) MTLToolsPointerArray * indirectComputeCommand;              //@synthesize indirectComputeCommand=_indirectComputeCommand - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * indirectRenderCommand;               //@synthesize indirectRenderCommand=_indirectRenderCommand - In the implementation block
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
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
-(void)dealloc;
-(unsigned long long)size;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)storageMode;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2 ;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(void)resetWithRange:(NSRange)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)indirectComputeCommand;
-(MTLToolsPointerArray *)indirectRenderCommand;
@end


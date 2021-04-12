/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLAccelerationStructureSPI.h>

@class MTLAccelerationStructureDescriptor, MTLToolsBuffer, NSString;

@interface MTLToolsAccelerationStructure : MTLToolsResource <MTLAccelerationStructureSPI> {

	MTLToolsBuffer* _toolsBuffer;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) id<MTLBuffer> buffer; 
@property (nonatomic,readonly) unsigned long long bufferOffset; 
@property (nonatomic,retain) MTLAccelerationStructureDescriptor * descriptor; 
@property (nonatomic,readonly) unsigned long long size; 
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
-(unsigned long long)size;
-(unsigned long long)uniqueIdentifier;
-(MTLAccelerationStructureDescriptor *)descriptor;
-(unsigned long long)bufferOffset;
-(id<MTLBuffer>)buffer;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)dealloc;
@end


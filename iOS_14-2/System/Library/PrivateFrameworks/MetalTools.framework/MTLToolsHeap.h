/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLHeapSPI.h>

@class NSString;

@interface MTLToolsHeap : MTLToolsResource <MTLHeapSPI>

@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long usedSize; 
@property (readonly) unsigned long long currentAllocatedSize; 
@property (readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)cpuCacheMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(unsigned long long)size;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(unsigned long long)gpuAddress;
-(unsigned long long)currentAllocatedSize;
-(long long)type;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)unfilteredResourceOptions;
-(unsigned long long)usedSize;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)resourceOptions;
-(id)_newToolsBuffer:(id)arg1 ;
-(id)_newToolsTexture:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLHeapSPI.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsHeap : MTLToolsResource <MTLHeapSPI> {

	MTLToolsPointerArray* _buffers;
	MTLToolsPointerArray* _textures;

}

@property (nonatomic,readonly) MTLToolsPointerArray * buffers;                  //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * textures;                 //@synthesize textures=_textures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (readonly) unsigned long long unfilteredResourceOptions; 
-(void)dealloc;
-(long long)type;
-(unsigned long long)size;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)storageMode;
-(unsigned long long)resourceOptions;
-(MTLToolsPointerArray *)textures;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)currentAllocatedSize;
-(MTLToolsPointerArray *)buffers;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)unfilteredResourceOptions;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)usedSize;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)_wrapBuffer:(id)arg1 ;
-(id)_wrapTexture:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBuffer.h>

@class MTLDebugResource, MTLDebugResourceAccessTracker, MTLDebugDevice, NSMutableArray, MTLIndirectCommandBufferDescriptor;

@interface MTLDebugBuffer : MTLToolsBuffer {

	MTLDebugResource* _common;
	unsigned long long _length;
	MTLDebugResourceAccessTracker* _resourceAccessTracker;
	MTLDebugDevice* _debugDevice;
	NSMutableArray* _debugMarkers;
	BOOL _purgeableStateHasBeenSet;
	BOOL _isContentsPointerExposed;
	BOOL _isContentExposedToCPU;
	unsigned _maxIndirectCommandCount;
	unsigned _checksum;
	const void* _pointer;
	unsigned long long _purgeableState;
	MTLIndirectCommandBufferDescriptor* _indirectCommandBufferDescriptor;

}

@property (nonatomic,readonly) MTLDebugResource * common;                                                         //@synthesize common=_common - In the implementation block
@property (nonatomic,readonly) const void* pointer;                                                               //@synthesize pointer=_pointer - In the implementation block
@property (nonatomic,readonly) unsigned long long purgeableState;                                                 //@synthesize purgeableState=_purgeableState - In the implementation block
@property (nonatomic,readonly) BOOL purgeableStateHasBeenSet;                                                     //@synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet - In the implementation block
@property (nonatomic,readonly) BOOL resourceTrackingEnabled; 
@property (nonatomic,readonly) unsigned resourceUsage; 
@property (nonatomic,readonly) MTLIndirectCommandBufferDescriptor * indirectCommandBufferDescriptor;              //@synthesize indirectCommandBufferDescriptor=_indirectCommandBufferDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned maxIndirectCommandCount;                                                  //@synthesize maxIndirectCommandCount=_maxIndirectCommandCount - In the implementation block
@property (nonatomic,readonly) BOOL isContentsPointerExposed;                                                     //@synthesize isContentsPointerExposed=_isContentsPointerExposed - In the implementation block
@property (assign,nonatomic) unsigned checksum;                                                                   //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) BOOL isContentExposedToCPU;                                                          //@synthesize isContentExposedToCPU=_isContentExposedToCPU - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(id)description;
-(void*)contents;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(MTLDebugResource *)common;
-(unsigned)checksum;
-(void)setChecksum:(unsigned)arg1 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(id)heap;
-(const void*)pointer;
-(unsigned long long)gpuAddress;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(void)makeAliasable;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2 ;
-(void)removeAllDebugMarkers;
-(void)didModifyRange:(NSRange)arg1 ;
-(void)accessedByGPU;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)resourceTrackingEnabled;
-(void)_initResourceTrackingWithDevice:(id)arg1 ;
-(void)accessedByCPU;
-(MTLIndirectCommandBufferDescriptor *)indirectCommandBufferDescriptor;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
-(id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCount:(unsigned long long)arg3 device:(id)arg4 options:(unsigned long long)arg5 ;
-(unsigned)resourceUsage;
-(id)copyDebugMarkers;
-(void)blitManagedToPrivate;
-(void)blitManagedToShared;
-(unsigned long long)purgeableState;
-(BOOL)purgeableStateHasBeenSet;
-(unsigned)maxIndirectCommandCount;
-(BOOL)isContentsPointerExposed;
-(BOOL)isContentExposedToCPU;
-(void)setIsContentExposedToCPU:(BOOL)arg1 ;
@end


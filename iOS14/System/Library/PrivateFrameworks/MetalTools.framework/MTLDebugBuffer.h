/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBuffer.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugResource, MTLDebugDevice, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable> {

	MTLDebugResource* _common;
	unsigned long long _length;
	MTLDebugDevice* _debugDevice;
	NSMutableArray* _debugMarkers;
	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	BOOL _isContentExposedToCPU;
	const void* _pointer;

}

@property (nonatomic,readonly) MTLDebugResource * common;              //@synthesize common=_common - In the implementation block
@property (nonatomic,readonly) const void* pointer;                    //@synthesize pointer=_pointer - In the implementation block
@property (assign,nonatomic) BOOL isContentExposedToCPU;               //@synthesize isContentExposedToCPU=_isContentExposedToCPU - In the implementation block
-(void*)contents;
-(unsigned long long)resourceIndex;
-(id)heap;
-(const void*)pointer;
-(void)makeAliasable;
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(unsigned long long)length;
-(id)description;
-(unsigned long long)gpuAddress;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2 ;
-(void)didModifyRange:(NSRange)arg1 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)removeAllDebugMarkers;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(MTLDebugResource *)common;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(void)dealloc;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 ;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
-(id)copyDebugMarkers;
-(BOOL)isContentExposedToCPU;
-(void)setIsContentExposedToCPU:(BOOL)arg1 ;
@end


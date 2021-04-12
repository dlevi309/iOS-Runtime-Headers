/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLBuffer.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer> {

	MTLToolsPointerArray* _textures;

}

@property (nonatomic,readonly) MTLToolsPointerArray * textures;              //@synthesize textures=_textures - In the implementation block
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
@property (readonly) unsigned long long length; 
-(void)dealloc;
-(unsigned long long)length;
-(void*)contents;
-(IOSurfaceRef)iosurface;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(MTLToolsPointerArray *)textures;
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)gpuAddress;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2 ;
-(void)removeAllDebugMarkers;
-(void)didModifyRange:(NSRange)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
@end


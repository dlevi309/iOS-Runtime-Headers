/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsHeap.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap <MTLDebugResourcePurgeable> {

	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	MTLDebugDevice* _debugDevice;

}

@property (nonatomic,readonly) MTLDebugDevice * debugDevice;              //@synthesize debugDevice=_debugDevice - In the implementation block
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithHeap:(id)arg1 device:(id)arg2 ;
-(void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3 ;
-(void)validateHeapTextureUsage:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)validatePixelFormatWithHeap:(unsigned long long)arg1 ;
-(void)validateOffset:(unsigned long long)arg1 withRequirements:(NSRange)arg2 ;
-(MTLDebugDevice *)debugDevice;
@end


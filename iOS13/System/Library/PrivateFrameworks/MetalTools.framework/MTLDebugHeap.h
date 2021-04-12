/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsHeap.h>

@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap {

	os_unfair_lock_s _historyLock;
	HeapHistoryEvent* _oldestEvent;
	HeapHistoryEvent* _latestEvent;
	MTLDebugDevice* _debugDevice;

}

@property (assign,nonatomic) HeapHistoryEvent* oldestEvent;               //@synthesize oldestEvent=_oldestEvent - In the implementation block
@property (assign,nonatomic) HeapHistoryEvent* latestEvent;               //@synthesize latestEvent=_latestEvent - In the implementation block
@property (nonatomic,readonly) MTLDebugDevice * debugDevice;              //@synthesize debugDevice=_debugDevice - In the implementation block
-(void)dealloc;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(void)removeResourceFromHistory:(id)arg1 ;
-(void)addResourceToHistory:(id)arg1 madeAliasable:(BOOL)arg2 ;
-(id)initWithHeap:(id)arg1 device:(id)arg2 ;
-(void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3 ;
-(void)validateHeapTextureUsage:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)validatePixelFormatWithHeap:(unsigned long long)arg1 ;
-(void)validateOffset:(unsigned long long)arg1 withRequirements:(NSRange)arg2 ;
-(void)accessHistoryEventsUsingBlock:(/*^block*/id)arg1 ;
-(HeapHistoryEvent*)oldestEvent;
-(void)setOldestEvent:(HeapHistoryEvent*)arg1 ;
-(HeapHistoryEvent*)latestEvent;
-(void)setLatestEvent:(HeapHistoryEvent*)arg1 ;
-(MTLDebugDevice *)debugDevice;
@end


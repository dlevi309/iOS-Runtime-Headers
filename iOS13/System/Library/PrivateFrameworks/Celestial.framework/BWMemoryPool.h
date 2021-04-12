/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface BWMemoryPool : NSObject {

	unsigned long long _defaultCacheBufferSize;
	unsigned long long _writeCombineCacheBufferSize;
	NSObject*<OS_dispatch_queue> _queue;
	IOSurfaceRef _writeCombineCacheBuffer;
	IOSurfaceRef _defaultCacheBuffer;

}
+(void)initialize;
-(void)dealloc;
-(void)discardMemory;
-(id)initWithDefaultCacheMemoryPoolSize:(long long)arg1 writeCombineCacheMemoryPoolSize:(long long)arg2 ;
-(void)ensureMemoryAsync;
-(void)discardMemoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addMemoryPoolToPixelBufferAttributes:(id)arg1 ;
-(void)_discardMemory;
-(void)_ensureMemoryPool;
-(void)ensureMemorySync;
-(int)addMemoryPoolToPropertiesForCaptureStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(int)addMemoryPoolToPropertiesForCaptureDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(id)newMTLBufferWithLength:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(int)removeMemoryPoolFromPropertiesForCaptureDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
@end


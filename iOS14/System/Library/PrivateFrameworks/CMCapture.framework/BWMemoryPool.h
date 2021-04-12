/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface BWMemoryPool : NSObject {

	unsigned long long _defaultCacheBufferSize;
	unsigned long long _writeCombineCacheBufferSize;
	NSObject*<OS_dispatch_queue> _queue;
	IOSurfaceRef _writeCombineCacheBuffer;
	IOSurfaceRef _defaultCacheBuffer;

}
+(void)initialize;
-(void)discardMemoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)newMTLBufferWithLength:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)ensureMemorySync;
-(int)removeMemoryPoolFromPropertiesForCaptureDevice:(id)arg1 ;
-(void)discardMemory;
-(void)addMemoryPoolToPixelBufferAttributes:(id)arg1 ;
-(void)_discardMemory;
-(int)addMemoryPoolToPropertiesForCaptureDevice:(id)arg1 ;
-(int)addMemoryPoolToPropertiesForCaptureStream:(id)arg1 ;
-(void)ensureMemoryAsync;
-(void)_ensureMemoryPool;
-(id)initWithDefaultCacheMemoryPoolSize:(long long)arg1 writeCombineCacheMemoryPoolSize:(long long)arg2 ;
-(void)dealloc;
@end


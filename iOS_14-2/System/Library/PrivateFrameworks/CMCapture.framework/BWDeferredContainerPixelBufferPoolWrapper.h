/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class BWPixelBufferPool, NSObject;

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {

	BWPixelBufferPool* _pool;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(void)flushToMinimumCapacity:(unsigned long long)arg1 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(void)signal;
-(CVBufferRef)newPixelBuffer;
-(void)dealloc;
@end


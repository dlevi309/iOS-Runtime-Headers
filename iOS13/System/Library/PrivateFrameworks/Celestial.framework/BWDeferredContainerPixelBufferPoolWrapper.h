/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_semaphore;
#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, NSObject;

@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {

	BWPixelBufferPool* _pool;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(void)dealloc;
-(void)signal;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
@end


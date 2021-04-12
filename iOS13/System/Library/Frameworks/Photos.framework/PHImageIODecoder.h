/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHImageDecoder.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface PHImageIODecoder : PHImageDecoder {

	NSObject*<OS_dispatch_queue> _pendingRequestQueue;
	NSObject*<OS_dispatch_queue> _activeRequestQueue;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSemaphore;

}
+(long long)maxConcurrentDecodeCount;
+(id)sharedDecoder;
+(void)setMaxConcurrentDecodeCount:(long long)arg1 ;
-(id)init;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(BOOL)arg5 optimizeForDrawing:(BOOL)arg6 highPriority:(BOOL)arg7 waitUntilComplete:(BOOL)arg8 completion:(/*^block*/id)arg9 ;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(BOOL)arg5 optimizeForDrawing:(BOOL)arg6 highPriority:(BOOL)arg7 waitUntilComplete:(BOOL)arg8 existingRequestHandle:(id)arg9 completion:(/*^block*/id)arg10 ;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedDecoder;
+(long long)maxConcurrentDecodeCount;
+(void)setMaxConcurrentDecodeCount:(long long)arg1 ;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1 ;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 existingRequestHandle:(id)arg4 completion:(/*^block*/id)arg5 ;
@end


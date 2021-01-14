/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface PLBoundedConcurrentQueue : NSObject {

	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSObject*<OS_dispatch_queue> _submissionQueue;
	NSObject*<OS_dispatch_semaphore> _bound;

}
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 concurrencyLimit:(unsigned char)arg2 ;
@end


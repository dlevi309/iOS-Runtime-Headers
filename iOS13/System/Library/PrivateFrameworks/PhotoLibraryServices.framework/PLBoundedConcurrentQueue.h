/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface PLBoundedConcurrentQueue : NSObject {

	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSObject*<OS_dispatch_queue> _submissionQueue;
	NSObject*<OS_dispatch_semaphore> _bound;

}
-(void)async:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 concurrencyLimit:(unsigned char)arg2 ;
@end


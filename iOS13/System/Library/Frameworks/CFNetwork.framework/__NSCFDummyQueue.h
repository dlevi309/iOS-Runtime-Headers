/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface __NSCFDummyQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(int)maxConcurrentOperationCount;
-(id)initWithDispatchQueue:(id)arg1 ;
@end


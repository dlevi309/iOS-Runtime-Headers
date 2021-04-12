/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, OS_dispatch_workloop;
@class NSObject;

@interface PLQueueDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _uiQueue;
	NSObject*<OS_dispatch_queue> _utilityQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _sharedUtilityQueue;
	NSObject*<OS_dispatch_queue> _sharedBackgroundQueue;
	NSObject*<OS_dispatch_workloop> _sharedWorkloop;

}
+(id)sharedQueueDispatcher;
-(id)init;
-(void)async:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(id)sharedUtilityQueue;
-(void)_handleUnexpectedQoSClass:(unsigned)arg1 ;
-(id)queueForCurrentQoS;
-(id)sharedBackgroundQueue;
@end


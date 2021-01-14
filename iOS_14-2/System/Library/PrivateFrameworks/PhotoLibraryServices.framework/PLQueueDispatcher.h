/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sync:(/*^block*/id)arg1 ;
-(id)init;
-(void)async:(/*^block*/id)arg1 ;
-(id)queueForCurrentQoS;
-(id)sharedUtilityQueue;
-(id)sharedBackgroundQueue;
-(void)_handleUnexpectedQoSClass:(unsigned)arg1 ;
@end


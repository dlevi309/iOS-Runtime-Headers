/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(BOOL)_addBlock:(/*^block*/id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(id)loggableOverviewForKey:(id)arg1 ;
-(BOOL)addBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(BOOL)addBlock:(/*^block*/id)arg1 forKey:(id)arg2 description:(id)arg3 ;
-(id)loggableOverview;
@end


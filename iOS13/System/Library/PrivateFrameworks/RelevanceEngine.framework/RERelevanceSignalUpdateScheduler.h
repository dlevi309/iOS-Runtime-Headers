/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, REUpNextTimer, NSDate;

@interface RERelevanceSignalUpdateScheduler : RESingleton {

	NSMutableDictionary* _updateBlocks;
	NSObject*<OS_dispatch_queue> _queue;
	REUpNextTimer* _timer;
	NSDate* _lastFireDate;
	BOOL _alreadyScheduled;

}
-(void)dealloc;
-(id)_init;
-(void)_updateBlocks;
-(void)_rescheduleTimer;
-(void)_queue_updateBlocks;
-(void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)unscheduleEventWithIdentifier:(id)arg1 ;
@end


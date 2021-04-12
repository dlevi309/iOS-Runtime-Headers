/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_rescheduleTimer;
-(void)_updateBlocks;
-(id)_init;
-(void)dealloc;
-(void)_queue_updateBlocks;
-(void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)unscheduleEventWithIdentifier:(id)arg1 ;
@end


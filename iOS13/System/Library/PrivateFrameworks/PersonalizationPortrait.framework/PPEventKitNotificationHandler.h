/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNotificationHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface PPEventKitNotificationHandler : PPNotificationHandler {

	atomic_flag _isFiring;
	atomic_flag _hasWaiter;
	NSMutableSet* _events;
	NSObject*<OS_dispatch_queue> _eventsQueue;
	NSObject*<OS_dispatch_queue> _waiterQueue;

}
-(id)description;
-(id)initWithName:(id)arg1 waitSeconds:(double)arg2 ;
-(void)_clearFlags;
-(void)_executeBlocksWithEvents:(id)arg1 ;
-(void)_pushEvents:(id)arg1 ;
-(id)_popEvents;
-(void)fireWithEvents:(id)arg1 ;
@end


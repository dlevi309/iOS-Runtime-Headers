/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue;
@class PCPersistentTimer, NSMutableArray, NSObject;

@interface BLTClientReplyTimeoutManager : NSObject {

	PCPersistentTimer* _clientReplyTimeoutTimer;
	NSMutableArray* _clientReplyTimeouts;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)_invalidateClientReplyTimer;
-(void)_startClientReplyTimerWithFireDate:(id)arg1 ;
-(void)_handleClientReplyTimeout;
-(void)_startNextClientReplyTimer;
-(void)_sortTimeouts;
-(BOOL)invalidateClientReplyTimeout:(id)arg1 ;
-(void)extendClientReplyTimeout:(id)arg1 additionalTime:(unsigned long long)arg2 ;
-(id)addClientReplyTimeoutForBulletin:(id)arg1 sectionID:(id)arg2 timeout:(double)arg3 handler:(/*^block*/id)arg4 ;
@end


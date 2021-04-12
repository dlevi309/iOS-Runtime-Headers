/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSTimer.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, PCPersistentTimer;

@interface BSPersistentTimer : NSObject <BSTimer> {

	double _fireInterval;
	NSString* _serviceIdentifier;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	/*^block*/id _handler;
	os_unfair_lock_s _lock;
	PCPersistentTimer* _timer;

}

@property (getter=isScheduled,nonatomic,readonly) BOOL scheduled; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double fireInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)schedule;
-(BOOL)isScheduled;
-(double)fireInterval;
-(void)cancel;
-(double)startTime;
-(void)dealloc;
-(void)_timerFired:(id)arg1 ;
@end


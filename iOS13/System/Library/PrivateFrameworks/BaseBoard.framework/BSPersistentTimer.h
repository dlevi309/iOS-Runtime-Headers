/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isScheduled,nonatomic,readonly) BOOL scheduled; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double fireInterval; 
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)schedule;
-(BOOL)isScheduled;
-(double)startTime;
-(double)fireInterval;
-(id)initWithFireInterval:(double)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_createTimerWithInterval:(double)arg1 serviceIdentifier:(id)arg2 ;
-(void)_timerFired:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSTimer.h>

@protocol BSTimer <NSObject>
@property (getter=isScheduled,nonatomic,readonly) BOOL scheduled; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double fireInterval; 
@required
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3;
-(void)schedule;
-(BOOL)isScheduled;
-(double)fireInterval;
-(void)cancel;
-(double)startTime;

@end


@protocol OS_dispatch_queue;
@class NSObject, BSDispatchSource, NSString;

@interface BSTimer : NSObject <BSTimer> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	/*^block*/id _handler;
	BSDispatchSource* _source;
	double _leewayInterval;
	BOOL _oneShot;
	BOOL _scheduled;
	double _startTime;
	double _fireInterval;
	double _repeatInterval;
	unsigned long long _fireCount;

}

@property (nonatomic,readonly) double repeatInterval;                          //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long fireCount;                   //@synthesize fireCount=_fireCount - In the implementation block
@property (getter=isScheduled,nonatomic,readonly) BOOL scheduled;              //@synthesize scheduled=_scheduled - In the implementation block
@property (nonatomic,readonly) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double fireInterval;                            //@synthesize fireInterval=_fireInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)schedule;
-(BOOL)isScheduled;
-(double)fireInterval;
-(id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)cancel;
-(unsigned long long)fireCount;
-(double)startTime;
-(double)repeatInterval;
-(void)dealloc;
@end


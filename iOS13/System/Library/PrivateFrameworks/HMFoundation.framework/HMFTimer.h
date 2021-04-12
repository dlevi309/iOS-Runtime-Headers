/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, HMFTimerDelegate, OS_dispatch_source;
@class HMFUnfairLock, NSObject, NSDate;

@interface HMFTimer : HMFObject {

	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	double _timeInterval;
	long long _leeway;
	BOOL _running;
	NSDate* _fireDate;
	id<HMFTimerDelegate> _delegate;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (__weak) id<HMFTimerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (nonatomic,readonly) double timeInterval;                              //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long leeway; 
@property (getter=isRunning,readonly) BOOL running; 
@property (copy,readonly) NSDate * fireDate;                                     //@synthesize fireDate=_fireDate - In the implementation block
+(id)shortDescription;
-(id)init;
-(void)dealloc;
-(unsigned long long)options;
-(double)timeInterval;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)fire;
-(id<HMFTimerDelegate>)delegate;
-(void)setDelegate:(id<HMFTimerDelegate>)arg1 ;
-(void)resume;
-(BOOL)isRunning;
-(void)suspend;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned long long)leeway;
-(void)__fire;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(id)attributeDescriptions;
-(void)kick;
-(void)__handleExpiration;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, HMFTimerDelegate, OS_dispatch_source;
@class NSObject, NSDate;

@interface HMFTimer : HMFObject {

	os_unfair_lock_s _lock;
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
-(NSDate *)fireDate;
-(void)kick;
-(NSObject*<OS_dispatch_source>)timer;
-(void)suspend;
-(id)init;
-(void)setFireDate:(NSDate *)arg1 ;
-(id<HMFTimerDelegate>)delegate;
-(void)fire;
-(double)timeInterval;
-(unsigned long long)options;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)__handleExpiration;
-(void)setDelegate:(id<HMFTimerDelegate>)arg1 ;
-(id)attributeDescriptions;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)isRunning;
-(unsigned long long)leeway;
-(void)__fire;
-(void)resume;
-(void)dealloc;
@end


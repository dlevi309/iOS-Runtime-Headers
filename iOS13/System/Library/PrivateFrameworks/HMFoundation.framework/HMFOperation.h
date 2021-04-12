/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <Foundation/NSOperation.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, OS_voucher;
@class NSError, HMFUnfairLock, NSObject, HMFActivity, NSUUID, HMFTimer, NSDate, NSString;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate> {

	BOOL _executing;
	BOOL _finished;
	NSError* _error;
	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_voucher> _voucher;
	HMFActivity* _activity;
	NSUUID* _identifier;
	HMFTimer* _timer;

}

@property (readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (retain) HMFTimer * timer;                                            //@synthesize timer=_timer - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> underlyingQueue; 
@property (retain) HMFActivity * activity;                                      //@synthesize activity=_activity - In the implementation block
@property (copy,readonly) NSDate * timeoutDate; 
@property (copy,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSUUID *)identifier;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(void)main;
-(HMFActivity *)activity;
-(void)setActivity:(HMFActivity *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)finish;
-(HMFTimer *)timer;
-(void)setTimer:(HMFTimer *)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSDate *)timeoutDate;
@end


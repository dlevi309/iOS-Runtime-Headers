/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <Foundation/NSOperation.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, OS_voucher;
@class NSError, NSObject, HMFActivity, NSUUID, HMFTimer, NSDate, NSString;

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate> {

	os_unfair_lock_s _lock;
	BOOL _executing;
	BOOL _finished;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_voucher> _voucher;
	HMFActivity* _activity;
	NSUUID* _identifier;
	HMFTimer* _timer;

}

@property (readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFTimer * timer;                                //@synthesize timer=_timer - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> underlyingQueue; 
@property (retain) HMFActivity * activity;                                      //@synthesize activity=_activity - In the implementation block
@property (copy,readonly) NSDate * timeoutDate; 
@property (copy,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)finish;
-(HMFTimer *)timer;
-(id)init;
-(void)start;
-(HMFActivity *)activity;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)isAsynchronous;
-(id)initWithTimeout:(double)arg1 ;
-(NSString *)debugDescription;
-(id)logIdentifier;
-(BOOL)isFinished;
-(NSError *)error;
-(void)setActivity:(HMFActivity *)arg1 ;
-(NSString *)description;
-(void)main;
-(BOOL)isExecuting;
-(NSUUID *)identifier;
-(void)cancel;
-(NSDate *)timeoutDate;
@end


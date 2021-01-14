/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <Foundation/NSOperation.h>

@class NSError, HMFActivity, HAP2PropertyLock;

@interface HAP2AsynchronousOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	BOOL _cancelled;
	NSError* _error;
	HMFActivity* _activity;
	HAP2PropertyLock* _propertyLock;

}

@property (getter=isExecuting,nonatomic,readonly) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                         //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)finish;
-(id)init;
-(void)start;
-(HMFActivity *)activity;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(NSError *)error;
-(id)initWithName:(id)arg1 ;
-(void)main;
-(BOOL)isExecuting;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(id)initWithName:(id)arg1 optionalActivity:(id)arg2 ;
-(id)initWithName:(id)arg1 activity:(id)arg2 ;
@end


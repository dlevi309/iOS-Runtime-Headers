/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;
@class BSTimer, NSObject, NSDate;

@interface BSWatchdog : NSObject {

	BSTimer* _timer;
	/*^block*/id _completion;
	BOOL _invalidated;
	BOOL _completed;
	BOOL _hasFired;
	id<BSWatchdogDelegate> _delegate;
	id<BSWatchdogProviding> _provider;
	double _timeout;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startDate;

}

@property (nonatomic,retain) id<BSWatchdogDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<BSWatchdogProviding> provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (getter=hasFired,nonatomic,readonly) BOOL fired;                      //@synthesize hasFired=_hasFired - In the implementation block
-(void)_watchdogTimerFired;
-(BOOL)hasFired;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<BSWatchdogDelegate>)delegate;
-(id<BSWatchdogProviding>)provider;
-(void)start;
-(NSDate *)startDate;
-(double)timeout;
-(void)_watchdogInvalidated;
-(void)setDelegate:(id<BSWatchdogDelegate>)arg1 ;
-(id)description;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end


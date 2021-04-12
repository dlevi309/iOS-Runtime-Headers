/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol ASDTaskScheduler;
@interface ASDPromiseObserver : NSObject {

	/*^block*/id _valueBlock;
	/*^block*/id _errorBlock;
	id<ASDTaskScheduler> _scheduler;

}

@property (readonly) id valueBlock;                               //@synthesize valueBlock=_valueBlock - In the implementation block
@property (readonly) id errorBlock;                               //@synthesize errorBlock=_errorBlock - In the implementation block
@property (readonly) id<ASDTaskScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
-(id)initWithValueBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 scheduler:(id)arg3 ;
-(void)notifyResolvedWithValue:(id)arg1 ;
-(void)notifyRejectedWithError:(id)arg1 ;
-(id)valueBlock;
-(id)errorBlock;
-(id<ASDTaskScheduler>)scheduler;
@end


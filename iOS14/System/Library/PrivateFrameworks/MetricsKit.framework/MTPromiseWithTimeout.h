/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol OS_dispatch_source;
@class NSDate, MTPromise, NSObject;

@interface MTPromiseWithTimeout : NSObject {

	NSDate* _startDate;
	MTPromise* _promise;
	NSObject*<OS_dispatch_source> _dispatchSourceTimer;

}

@property (nonatomic,retain) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) MTPromise * promise;                                            //@synthesize promise=_promise - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchSourceTimer;              //@synthesize dispatchSourceTimer=_dispatchSourceTimer - In the implementation block
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(MTPromise *)promise;
-(void)finishWithResult:(id)arg1 ;
-(void)setPromise:(MTPromise *)arg1 ;
-(void)dealloc;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(void)setDispatchSourceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dispatchSourceTimer;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface NACEventThrottler : NSObject {

	double _lastUpdateTime;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _eventBlock;
	double _minimumDelay;
	id _value;

}

@property (nonatomic,copy) id eventBlock;                      //@synthesize eventBlock=_eventBlock - In the implementation block
@property (assign,nonatomic) double minimumDelay;              //@synthesize minimumDelay=_minimumDelay - In the implementation block
@property (nonatomic,retain) id value;                         //@synthesize value=_value - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(id)eventBlock;
-(void)setEventBlock:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)_fire;
-(void)cancel;
-(id)value;
-(void)setMinimumDelay:(double)arg1 ;
-(double)minimumDelay;
@end


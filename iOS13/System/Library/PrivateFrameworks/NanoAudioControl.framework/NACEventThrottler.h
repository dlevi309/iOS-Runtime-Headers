/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)cancel;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)eventBlock;
-(void)setEventBlock:(id)arg1 ;
-(void)_fire;
-(void)setMinimumDelay:(double)arg1 ;
-(double)minimumDelay;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CAMPreciseTimer : NSObject {

	BOOL _fired;
	double _delay;
	double _interval;
	/*^block*/id __handler;
	NSObject*<OS_dispatch_source> __currentTimer;

}

@property (nonatomic,copy,readonly) id _handler;                                                                //@synthesize _handler=__handler - In the implementation block
@property (setter=_setCurrentTimer:,nonatomic,retain) NSObject*<OS_dispatch_source> _currentTimer;              //@synthesize _currentTimer=__currentTimer - In the implementation block
@property (assign,setter=_setFired:,nonatomic) BOOL fired;                                                      //@synthesize fired=_fired - In the implementation block
@property (nonatomic,readonly) double delay;                                                                    //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double interval;                                                                 //@synthesize interval=_interval - In the implementation block
-(id)init;
-(void)invalidate;
-(id)_handler;
-(void)start;
-(double)interval;
-(double)delay;
-(NSObject*<OS_dispatch_source>)_currentTimer;
-(BOOL)fired;
-(id)initWithDelay:(double)arg1 interval:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_setFired:(BOOL)arg1 ;
-(void)_setCurrentTimer:(id)arg1 ;
@end


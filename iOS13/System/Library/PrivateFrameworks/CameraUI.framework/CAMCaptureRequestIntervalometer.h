/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMCaptureRequestIntervalometerDelegate;
@class CAMCaptureRequest, CAMPreciseTimer;

@interface CAMCaptureRequestIntervalometer : NSObject {

	CAMCaptureRequest* _prototypeRequest;
	id<CAMCaptureRequestIntervalometerDelegate> _delegate;
	double _interval;
	double _delay;
	long long _maximumCount;
	long long _remaining;
	CAMPreciseTimer* __timer;

}

@property (assign,nonatomic) long long remaining;                                                        //@synthesize remaining=_remaining - In the implementation block
@property (nonatomic,readonly) CAMPreciseTimer * _timer;                                                 //@synthesize _timer=__timer - In the implementation block
@property (nonatomic,copy) CAMCaptureRequest * prototypeRequest;                                         //@synthesize prototypeRequest=_prototypeRequest - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMCaptureRequestIntervalometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double interval;                                                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double delay;                                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) long long maximumCount;                                                   //@synthesize maximumCount=_maximumCount - In the implementation block
-(id)init;
-(id<CAMCaptureRequestIntervalometerDelegate>)delegate;
-(double)interval;
-(double)delay;
-(CAMPreciseTimer *)_timer;
-(long long)remaining;
-(long long)maximumCount;
-(void)setRemaining:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 interval:(double)arg2 delay:(double)arg3 maximumCount:(long long)arg4 ;
-(void)setPrototypeRequest:(CAMCaptureRequest *)arg1 ;
-(void)startGeneratingRequests;
-(void)manuallyGenerateRequest;
-(CAMCaptureRequest *)prototypeRequest;
-(void)stopGeneratingRequests;
-(void)_generateRequestForDelegate;
@end


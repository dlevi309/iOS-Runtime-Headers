/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CAMPreciseTimer *)_timer;
-(void)setPrototypeRequest:(CAMCaptureRequest *)arg1 ;
-(long long)maximumCount;
-(id)init;
-(double)interval;
-(id<CAMCaptureRequestIntervalometerDelegate>)delegate;
-(long long)remaining;
-(void)startGeneratingRequests;
-(void)setRemaining:(long long)arg1 ;
-(double)delay;
-(void)_generateRequestForDelegate;
-(CAMCaptureRequest *)prototypeRequest;
-(void)stopGeneratingRequests;
-(void)manuallyGenerateRequest;
-(id)initWithDelegate:(id)arg1 interval:(double)arg2 delay:(double)arg3 maximumCount:(long long)arg4 ;
@end


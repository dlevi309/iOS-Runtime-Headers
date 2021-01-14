/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSTimer, NSDictionary, NSMutableDictionary, CAMediaTimingFunction;

@interface OKTimerAnimation : NSObject {

	NSTimer* _timer;
	NSDictionary* _fromValues;
	NSDictionary* _toValues;
	double _duration;
	double _currentInterval;
	NSMutableDictionary* _previousValues;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	BOOL _additionally;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) BOOL additionally;                                   //@synthesize additionally=_additionally - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
+(id)animationFromValues:(id)arg1 toValues:(id)arg2 withDuration:(double)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)start;
-(CAMediaTimingFunction *)timingFunction;
-(void)handleTimer:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)additionally;
-(void)setAdditionally:(BOOL)arg1 ;
@end


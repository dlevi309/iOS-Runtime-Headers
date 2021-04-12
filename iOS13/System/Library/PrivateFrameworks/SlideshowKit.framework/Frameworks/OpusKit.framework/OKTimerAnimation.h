/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(void)start;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)handleTimer:(id)arg1 ;
-(BOOL)additionally;
-(void)setAdditionally:(BOOL)arg1 ;
@end


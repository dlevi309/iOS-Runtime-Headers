/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol OS_dispatch_source;
@class NSObject, UIControl;

@interface MTMPUTransportButtonEventHandler : NSObject {

	NSObject*<OS_dispatch_source> _longPressTimer;
	BOOL _longPress;
	BOOL _shouldFakeEnabled;
	BOOL _supportsTapWhenDisabled;
	UIControl* _button;
	double _minimumLongPressDuration;

}

@property (assign,nonatomic,__weak) UIControl * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double minimumLongPressDuration;              //@synthesize minimumLongPressDuration=_minimumLongPressDuration - In the implementation block
@property (assign,nonatomic) BOOL supportsTapWhenDisabled;                 //@synthesize supportsTapWhenDisabled=_supportsTapWhenDisabled - In the implementation block
-(id)init;
-(void)dealloc;
-(UIControl *)button;
-(void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setButton:(UIControl *)arg1 ;
-(void)_clearLongPressTimer;
-(void)_longPressTimerAction;
-(id)performHitTestingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldFakeEnabled;
-(BOOL)shouldForceTrackingEnabled;
-(double)minimumLongPressDuration;
-(void)setMinimumLongPressDuration:(double)arg1 ;
-(BOOL)supportsTapWhenDisabled;
-(void)setSupportsTapWhenDisabled:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@protocol OS_dispatch_source;
@class NSObject, UIControl;

@interface MPUTransportButtonEventHandler : NSObject {

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
-(UIControl *)button;
-(id)init;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setButton:(UIControl *)arg1 ;
-(void)dealloc;
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


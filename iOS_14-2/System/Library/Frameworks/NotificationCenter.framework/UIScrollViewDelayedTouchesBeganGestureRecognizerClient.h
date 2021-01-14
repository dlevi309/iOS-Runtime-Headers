/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/


@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property (nonatomic,readonly) BOOL delaysContentTouches; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
@required
-(double)_scrollHysteresis;
-(BOOL)delaysContentTouches;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
-(BOOL)_canScrollX;
-(BOOL)_canScrollY;
-(double)_touchDelayForScrollDetection;

@end


/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/

#import <NotificationCenter/NCSizeObservingView.h>
#import <UIKit/UIScrollViewDelayedTouchesBeganGestureRecognizerClient.h>

@class NSString;

@interface _NCWidgetViewControllerView : NCSizeObservingView <UIScrollViewDelayedTouchesBeganGestureRecognizerClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL delaysContentTouches; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
-(BOOL)_canScrollX;
-(void)didMoveToWindow;
-(BOOL)_canScrollY;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3 ;
-(BOOL)delaysContentTouches;
-(double)_touchDelayForScrollDetection;
-(double)_scrollHysteresis;
@end


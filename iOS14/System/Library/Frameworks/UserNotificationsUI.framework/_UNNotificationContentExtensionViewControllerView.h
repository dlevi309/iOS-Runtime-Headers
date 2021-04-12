/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelayedTouchesBeganGestureRecognizerClient.h>

@class NSString;

@interface _UNNotificationContentExtensionViewControllerView : UIView <UIScrollViewDelayedTouchesBeganGestureRecognizerClient>

@property (nonatomic,readonly) BOOL delaysContentTouches; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_scrollHysteresis;
-(BOOL)delaysContentTouches;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3 ;
-(BOOL)_canScrollX;
-(BOOL)_canScrollY;
-(double)_touchDelayForScrollDetection;
@end


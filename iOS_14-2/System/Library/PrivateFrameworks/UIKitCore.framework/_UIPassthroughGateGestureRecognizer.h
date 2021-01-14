/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIScrollEventRespondable.h>

@class NSString;

@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_supportsTouchContinuation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)open;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)endClosed;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
@end


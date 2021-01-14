/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface UIUndoGestureObserver : UIGestureRecognizer
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_analyticsIsGestureHandled;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_failOrCancelIfNecessary;
@end


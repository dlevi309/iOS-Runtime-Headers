/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer {

	BOOL _triggered;
	NSSet* _currentTouches;

}
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_cancelOtherGestureRecognizersForTouches:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_tryToCancelTouches;
@end


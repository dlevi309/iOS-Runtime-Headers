/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIPanGestureRecognizer, NSString;

@interface _TVNonFocusSwipeUpCapture : NSObject <UIGestureRecognizerDelegate> {

	UIView* _initiallyFocusedView;
	CGPoint _translation;
	CGPoint _velocity;
	UIPanGestureRecognizer* _gestureRecognizer;
	id _target;
	SEL _action;

}

@property (nonatomic,readonly) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPanGestureRecognizer *)gestureRecognizer;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(SEL)action;
-(id)target;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_onPan:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class UIView, NSMutableSet;

@interface ASCModalViewGestureRecognizer : UIGestureRecognizer {

	UIView* _targetView;
	NSMutableSet* _activeTouches;

}

@property (nonatomic,readonly) NSMutableSet * activeTouches;              //@synthesize activeTouches=_activeTouches - In the implementation block
@property (nonatomic,readonly) UIView * targetView;                       //@synthesize targetView=_targetView - In the implementation block
-(NSMutableSet *)activeTouches;
-(UIView *)targetView;
-(void)encodeWithCoder:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isAnyTouch:(id)arg1 fromEvent:(id)arg2 outsideView:(id)arg3 ;
-(id)initWithTargetView:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end


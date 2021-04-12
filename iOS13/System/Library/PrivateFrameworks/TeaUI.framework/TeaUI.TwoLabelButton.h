/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@interface TeaUI.TwoLabelButton : UIControl <CAAnimationDelegate> {

	 highlightMask;
	 animationState;
	 buttonState;
	 animationTrigger;
	 titleLabelNormal;
	 titleLabelHighlighted;
	 labelNormal;
	 labelHighlighted;
	 borderColor;
	 backgroundColorNormal;
	 backgroundColorHighlighted;
	 onTap;
	 currentBorderColor;
	 currentBackgroundColorNormal;
	 currentBackgroundColorHighlighted;

}
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end


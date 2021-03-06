/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end


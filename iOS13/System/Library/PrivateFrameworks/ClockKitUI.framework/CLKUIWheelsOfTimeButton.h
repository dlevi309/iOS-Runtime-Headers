/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CLKUIWheelsOfTimeButton : UIButton {

	UIEdgeInsets _touchEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;              //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)touchEdgeInsets;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_getMaxTextBounds;
-(CFAttributedStringRef)_newAttributedString:(id)arg1 withFont:(id)arg2 usingKerning:(double)arg3 textColor:(id)arg4 ;
-(id)_createButtonImage:(CFAttributedStringRef)arg1 ;
-(void)setButtonText:(id)arg1 selectedFont:(id)arg2 selectedTextColor:(id)arg3 unselectedFont:(id)arg4 unselectedTextColor:(id)arg5 kerning:(double)arg6 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)touchEdgeInsets;
-(CGRect)_getMaxTextBounds;
-(CFAttributedStringRef)_newAttributedString:(id)arg1 withFont:(id)arg2 usingKerning:(double)arg3 textColor:(id)arg4 ;
-(id)_createButtonImage:(CFAttributedStringRef)arg1 ;
-(void)setButtonText:(id)arg1 selectedFont:(id)arg2 selectedTextColor:(id)arg3 unselectedFont:(id)arg4 unselectedTextColor:(id)arg5 kerning:(double)arg6 ;
@end


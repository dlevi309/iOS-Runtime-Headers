/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CPUIMediaButton.h>

@class UIColor;

@interface CPUILabelButton : CPUIMediaButton {

	UIColor* _disabledTextColor;

}

@property (nonatomic,retain) UIColor * disabledTextColor;              //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
-(UIColor *)disabledTextColor;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(id)tintColor;
-(id)colorForKnobFocusLayer;
-(void)updateButtonOpacityForKnobUnfocused;
@end


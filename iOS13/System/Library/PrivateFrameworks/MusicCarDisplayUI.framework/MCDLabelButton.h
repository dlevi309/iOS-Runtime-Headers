/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MCDButton.h>

@class UIColor;

@interface MCDLabelButton : MCDButton {

	UIColor* _disabledTextColor;

}

@property (nonatomic,retain) UIColor * disabledTextColor;              //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)tintColor;
-(UIColor *)disabledTextColor;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(id)colorForKnobFocusLayer;
-(void)updateButtonOpacityForKnobUnfocused;
@end


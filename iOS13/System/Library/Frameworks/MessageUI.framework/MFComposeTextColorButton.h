/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

@interface MFComposeTextColorButton : UIButton {

	UIColor* _color;
	UIView* _colorView;
	UIView* _colorRingView;

}

@property (nonatomic,retain) UIView * colorView;                  //@synthesize colorView=_colorView - In the implementation block
@property (nonatomic,retain) UIView * colorRingView;              //@synthesize colorRingView=_colorRingView - In the implementation block
@property (nonatomic,retain) UIColor * color;                     //@synthesize color=_color - In the implementation block
+(id)buttonWithColor:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UIView *)colorView;
-(void)setColorView:(UIView *)arg1 ;
-(void)setColorRingView:(UIView *)arg1 ;
-(UIView *)colorRingView;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)colorView;
-(void)layoutSubviews;
-(void)setColorRingView:(UIView *)arg1 ;
-(UIView *)colorRingView;
-(void)setColor:(UIColor *)arg1 ;
-(void)setColorView:(UIView *)arg1 ;
@end


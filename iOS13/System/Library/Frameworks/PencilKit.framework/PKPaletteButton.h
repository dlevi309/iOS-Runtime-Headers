/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIButton;

@interface PKPaletteButton : UIControl {

	long long _buttonType;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;                 //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) long long buttonType;              //@synthesize buttonType=_buttonType - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(long long)buttonType;
-(void)setButton:(UIButton *)arg1 ;
-(void)setButtonType:(long long)arg1 ;
@end


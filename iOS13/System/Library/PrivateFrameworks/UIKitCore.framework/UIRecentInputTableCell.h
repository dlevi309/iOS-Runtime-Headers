/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITextInputTraits, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell {

	UILabel* _floatingLabel;
	long long _blurEffectStyle;
	UITextInputTraits* _textInputTraits;

}

@property (nonatomic,retain) UILabel * floatingLabel;                                //@synthesize floatingLabel=_floatingLabel - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                              //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (nonatomic,retain) UITextInputTraits * textInputTraits;                    //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,readonly) _UIFloatingContentView * tvFloatingView; 
+(id)focusedTextColorForBlurEffectStyle:(long long)arg1 ;
+(id)unfocusedTextColorForBlurEffectStyle:(long long)arg1 ;
+(id)backgroundColorForBlurEffectStyle:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)layoutSubviews;
-(UITextInputTraits *)textInputTraits;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTextInputTraits:(UITextInputTraits *)arg1 ;
-(UILabel *)floatingLabel;
-(_UIFloatingContentView *)tvFloatingView;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(void)setFloatingLabel:(UILabel *)arg1 ;
-(void)_updateAppearance;
-(BOOL)_tvIsDarkMode;
-(long long)blurEffectStyle;
-(void)setInputText:(id)arg1 withBlurStyle:(long long)arg2 ;
@end


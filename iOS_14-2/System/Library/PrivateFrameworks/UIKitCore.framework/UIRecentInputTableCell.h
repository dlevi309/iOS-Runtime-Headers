/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITextInputTraits, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell {

	UILabel* _floatingLabel;
	long long _blurEffectStyle;
	UITextInputTraits* _textInputTraits;

}

@property (assign,nonatomic) long long blurEffectStyle;                                   //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (nonatomic,retain) UITextInputTraits * textInputTraits;                         //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) UILabel * floatingLabel;                                     //@synthesize floatingLabel=_floatingLabel - In the implementation block
@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView; 
+(id)focusedTextColorForBlurEffectStyle:(long long)arg1 ;
+(id)unfocusedTextColorForBlurEffectStyle:(long long)arg1 ;
+(id)backgroundColorForBlurEffectStyle:(long long)arg1 ;
-(UITextInputTraits *)textInputTraits;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)layoutSubviews;
-(long long)blurEffectStyle;
-(void)_updateAppearance;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setFloatingLabel:(UILabel *)arg1 ;
-(_UIFloatingContentView *)floatingContentView;
-(void)setTextInputTraits:(UITextInputTraits *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(void)setInputText:(id)arg1 withBlurStyle:(long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)floatingLabel;
-(BOOL)_tvIsDarkMode;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIStackView, UILabel, UITextField;

@interface FPUIAuthenticationTextInputCell : UITableViewCell {

	UIStackView* _stackView;
	UILabel* _label;
	UITextField* _textField;

}

@property (nonatomic,__weak,readonly) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)prepareForReuse;
-(UILabel *)label;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)_isLargeTextTraitCollection:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextField *)textField;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)_isLargeTextTraitCollection:(id)arg1 ;
@end


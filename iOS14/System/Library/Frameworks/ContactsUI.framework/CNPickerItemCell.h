/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextField;

@interface CNPickerItemCell : UITableViewCell {

	BOOL _placeholder;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                            //@synthesize textField=_textField - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(BOOL)isPlaceholder;
-(void)setTextField:(UITextField *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)endEditing;
-(UITextField *)textField;
-(void)setTextFieldHidden:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)beginEditing;
@end


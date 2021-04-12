/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactCell.h>

@protocol CNPropertyCellDelegate;
@class UITextField, UIResponder, CNPropertyGroupItem;

@interface CNPropertyNameCell : CNContactCell {

	UITextField* _textField;
	UIResponder* _firstResponderItem;
	id<CNPropertyCellDelegate> _delegate;

}

@property (nonatomic,retain) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UITextField * textField;                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIResponder * firstResponderItem;                      //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITextField *)textField;
-(BOOL)shouldIndentWhileEditing;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldChanged:(id)arg1 ;
-(double)minCellHeight;
-(void)setCardGroupItem:(id)arg1 ;
-(id)constantConstraints;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(UIResponder *)firstResponderItem;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
@end


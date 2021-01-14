/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldIndentWhileEditing;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(double)minCellHeight;
-(void)setCardGroupItem:(id)arg1 ;
-(id)constantConstraints;
-(CNPropertyGroupItem *)propertyItem;
-(UITextField *)textField;
-(void)textFieldChanged:(id)arg1 ;
-(UIResponder *)firstResponderItem;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end


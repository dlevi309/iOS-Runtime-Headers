/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextField;

@interface CNMeCardSharingSettingsNameCell : UITableViewCell {

	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
+(id)cellIdentifier;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end


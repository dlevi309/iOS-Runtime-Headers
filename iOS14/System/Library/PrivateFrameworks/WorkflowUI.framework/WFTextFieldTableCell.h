/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, WFTextFieldTableItem, UIStackView, UITextField, NSString;

@interface WFTextFieldTableCell : UITableViewCell <UITextFieldDelegate> {

	UILabel* _textLabel;
	WFTextFieldTableItem* _tableItem;
	UIStackView* _stackView;
	UITextField* _textField;

}

@property (assign,nonatomic,__weak) WFTextFieldTableItem * tableItem;              //@synthesize tableItem=_tableItem - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                            //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIStackView *)stackView;
-(void)prepareForReuse;
-(void)textDidChange:(id)arg1 ;
-(UITextField *)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)textLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTableItem:(WFTextFieldTableItem *)arg1 ;
-(WFTextFieldTableItem *)tableItem;
@end


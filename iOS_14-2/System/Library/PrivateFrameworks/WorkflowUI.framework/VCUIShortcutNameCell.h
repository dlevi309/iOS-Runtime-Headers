/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextField;

@interface VCUIShortcutNameCell : UITableViewCell {

	BOOL _editable;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;                    //@synthesize textField=_textField - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;              //@synthesize editable=_editable - In the implementation block
-(BOOL)isEditable;
-(BOOL)editable;
-(void)setEditable:(BOOL)arg1 ;
-(UITextField *)textField;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>

@class UIButton;

@interface CNContactActionSplitCell : CNLabeledCell {

	UIButton* _leftLabel;
	UIButton* _rightLabel;

}

@property (nonatomic,readonly) UIButton * leftLabel;               //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rightLabel;              //@synthesize rightLabel=_rightLabel - In the implementation block
-(id)labelView;
-(UIButton *)leftLabel;
-(double)minCellHeight;
-(id)rightMostView;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(id)standardButton;
-(id)constantConstraints;
-(void)_setupButton:(id)arg1 forAction:(id)arg2 ;
-(UIButton *)rightLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


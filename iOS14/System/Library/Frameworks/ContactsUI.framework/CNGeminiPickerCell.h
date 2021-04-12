/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNGeminiPickerCell : CNLabeledCell {

	UILabel* _labelLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(void)tintColorDidChange;
-(id)labelView;
-(UILabel *)labelLabel;
-(id)valueView;
-(void)setText:(id)arg1 detailText:(id)arg2 ;
-(UILabel *)valueLabel;
@end


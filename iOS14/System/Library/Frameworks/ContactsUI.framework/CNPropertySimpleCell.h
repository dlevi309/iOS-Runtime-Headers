/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyCell.h>

@class UILabel;

@interface CNPropertySimpleCell : CNPropertyCell {

	UILabel* _labelLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(id)labelView;
-(UILabel *)labelLabel;
-(id)valueView;
-(UILabel *)valueLabel;
@end


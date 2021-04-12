/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel, NSString, UIView;

@interface CNGeminiPickerCell : CNLabeledCell {

	UILabel* _labelLabel;
	UILabel* _valueLabel;
	NSString* _badgeText;
	UIView* _badgeView;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,readonly) NSString * badgeText;              //@synthesize badgeText=_badgeText - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                  //@synthesize badgeView=_badgeView - In the implementation block
-(void)dealloc;
-(void)tintColorDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UIView *)badgeView;
-(id)labelView;
-(void)setBadgeView:(UIView *)arg1 ;
-(NSString *)badgeText;
-(UILabel *)valueLabel;
-(void)setText:(id)arg1 detailText:(id)arg2 ;
-(id)valueView;
-(id)variableConstraints;
-(UILabel *)labelLabel;
@end


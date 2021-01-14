/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel;

@interface PKMultilineKeyValueTableViewCell : PKTableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * keyLabel;                //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(UILabel *)keyLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


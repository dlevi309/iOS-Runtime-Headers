/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCProfileKeyValueCell : UITableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * keyLabel;                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(void)_setupConstraints;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)_setup;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(UILabel *)keyLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setKeyValue:(id)arg1 ;
@end


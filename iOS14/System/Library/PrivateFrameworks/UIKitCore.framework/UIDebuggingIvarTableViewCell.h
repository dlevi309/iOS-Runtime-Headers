/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCell.h>

@class UIDebuggingIvar, UILabel;

@interface UIDebuggingIvarTableViewCell : UITableViewCell {

	UIDebuggingIvar* _ivar;
	UILabel* _nameLabel;
	UILabel* _typeLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                 //@synthesize typeLabel=_typeLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIDebuggingIvar * ivar;              //@synthesize ivar=_ivar - In the implementation block
-(void)prepareForReuse;
-(void)setIvar:(UIDebuggingIvar *)arg1 ;
-(UILabel *)typeLabel;
-(UILabel *)valueLabel;
-(UILabel *)nameLabel;
-(UIDebuggingIvar *)ivar;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)_prepareConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


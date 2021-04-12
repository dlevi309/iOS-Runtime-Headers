/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIDebuggingIvar *)ivar;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIvar:(UIDebuggingIvar *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)_prepareConstraints;
-(UILabel *)nameLabel;
-(UILabel *)valueLabel;
-(UILabel *)typeLabel;
@end


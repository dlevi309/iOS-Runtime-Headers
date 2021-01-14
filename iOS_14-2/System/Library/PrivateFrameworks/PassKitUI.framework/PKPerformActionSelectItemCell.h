/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString;

@interface PKPerformActionSelectItemCell : UITableViewCell {

	UILabel* _descriptionLabel;
	UILabel* _amountLabel;
	NSString* _descriptionText;
	NSString* _amountText;

}

@property (nonatomic,copy) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * amountText;                   //@synthesize amountText=_amountText - In the implementation block
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)_addSubviews;
-(void)setAmountText:(NSString *)arg1 ;
-(NSString *)amountText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setAmountText:(NSString *)arg1 ;
-(NSString *)amountText;
-(void)_addSubviews;
@end


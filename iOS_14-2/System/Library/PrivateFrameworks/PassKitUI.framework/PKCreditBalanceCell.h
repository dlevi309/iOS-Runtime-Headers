/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardCreditAccountItem, UILabel;

@interface PKCreditBalanceCell : PKDashboardCollectionViewCell {

	BOOL _isCompactUI;
	BOOL _useAccssibilityLayout;
	PKDashboardCreditAccountItem* _item;
	UILabel* _labelBalance;
	UILabel* _labelAmount;
	UILabel* _labelCreditAvailable;

}

@property (nonatomic,retain) PKDashboardCreditAccountItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) UILabel * labelBalance;                         //@synthesize labelBalance=_labelBalance - In the implementation block
@property (nonatomic,readonly) UILabel * labelAmount;                          //@synthesize labelAmount=_labelAmount - In the implementation block
@property (nonatomic,readonly) UILabel * labelCreditAvailable;                 //@synthesize labelCreditAvailable=_labelCreditAvailable - In the implementation block
@property (assign,nonatomic) BOOL useAccssibilityLayout;                       //@synthesize useAccssibilityLayout=_useAccssibilityLayout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)labelBalance;
-(UILabel *)labelAmount;
-(UILabel *)labelCreditAvailable;
-(PKDashboardCreditAccountItem *)item;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
-(void)_createSubviews;
@end


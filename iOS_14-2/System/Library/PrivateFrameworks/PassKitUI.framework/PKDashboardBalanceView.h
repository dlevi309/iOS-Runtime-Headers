/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, NSString, PKContinuousButton;

@interface PKDashboardBalanceView : PKDashboardCollectionViewCell {

	BOOL _isTemplateLayout;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _availableCreditLabel;
	NSString* _title;
	PKContinuousButton* _actionButton;
	BOOL _topUpEnabled;
	NSString* _balance;
	NSString* _availableCredit;
	NSString* _topUpTitle;
	/*^block*/id _topUpAction;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * balance;                      //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSString * availableCredit;              //@synthesize availableCredit=_availableCredit - In the implementation block
@property (nonatomic,copy) NSString * topUpTitle;                   //@synthesize topUpTitle=_topUpTitle - In the implementation block
@property (nonatomic,copy) id topUpAction;                          //@synthesize topUpAction=_topUpAction - In the implementation block
@property (assign,nonatomic) BOOL topUpEnabled;                     //@synthesize topUpEnabled=_topUpEnabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)availableCredit;
-(NSString *)balance;
-(void)setAvailableCredit:(NSString *)arg1 ;
-(void)setBalance:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)topUpTitle;
-(void)setTopUpTitle:(NSString *)arg1 ;
-(id)topUpAction;
-(void)setTopUpAction:(id)arg1 ;
-(BOOL)topUpEnabled;
-(void)setTopUpEnabled:(BOOL)arg1 ;
-(void)resetFonts;
-(void)createSubviews;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(NSString *)title;
@end


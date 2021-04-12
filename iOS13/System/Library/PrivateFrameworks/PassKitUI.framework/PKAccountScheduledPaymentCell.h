/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITableViewCellLayoutManager, NSTimeZone, PKAccountPayment, UIColor;

@interface PKAccountScheduledPaymentCell : UITableViewCell {

	UILabel* _frequencyLabel;
	UILabel* _statusLabel;
	UILabel* _amountLabel;
	UITableViewCellLayoutManager* _layoutManager;
	NSTimeZone* _timeZone;
	BOOL _hasPaymentDueDate;
	BOOL _sizing;
	BOOL _useStackedLayout;
	BOOL _onHold;
	PKAccountPayment* _payment;
	UIColor* _titleColor;
	unsigned long long _featureIdentifier;

}

@property (assign,nonatomic) BOOL onHold;                                       //@synthesize onHold=_onHold - In the implementation block
@property (assign,nonatomic,__weak) PKAccountPayment * payment;                 //@synthesize payment=_payment - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                                //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(id)_dateString;
-(unsigned long long)featureIdentifier;
-(PKAccountPayment *)payment;
-(void)setPayment:(PKAccountPayment *)arg1 ;
-(UIEdgeInsets)_effectiveLayoutMargins;
-(void)setOnHold:(BOOL)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(BOOL)_useStackedLayoutForUsableWidth:(double)arg1 ;
-(id)_frequencyAttributedString;
-(id)_amountAttributedString;
-(id)_statusAttributedString;
-(id)_frequencyString;
-(id)_amountString;
-(void)setPayment:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)onHold;
@end


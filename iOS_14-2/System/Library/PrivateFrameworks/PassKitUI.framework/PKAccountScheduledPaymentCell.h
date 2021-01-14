/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)titleColor;
-(BOOL)onHold;
-(void)prepareForReuse;
-(BOOL)_useStackedLayoutForUsableWidth:(double)arg1 ;
-(id)_amountAttributedString;
-(id)_frequencyAttributedString;
-(id)_statusAttributedString;
-(id)_frequencyString;
-(id)_amountString;
-(void)setPayment:(id)arg1 forAccount:(id)arg2 ;
-(void)setOnHold:(BOOL)arg1 ;
-(id)_dateString;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)featureIdentifier;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(UIEdgeInsets)_effectiveLayoutMargins;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(PKAccountPayment *)payment;
-(void)setPayment:(PKAccountPayment *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleColor:(UIColor *)arg1 ;
@end


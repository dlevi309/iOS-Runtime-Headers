/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class NSString, PKPaymentTransactionView, UIColor;

@interface PKPaymentTransactionTableCell : PKTableViewCell {

	NSString* _transactionIdentifier;
	PKPaymentTransactionView* _transactionView;

}

@property (nonatomic,copy) NSString * transactionIdentifier;                            //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor; 
@property (nonatomic,retain) UIColor * secondaryColor; 
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(NSString *)transactionIdentifier;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(PKPaymentTransactionView *)transactionView;
@end


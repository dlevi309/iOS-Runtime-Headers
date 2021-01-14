/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>
#import <libobjc.A.dylib/PKPaymentTransactionCellResponder.h>

@class NSString, PKPaymentTransactionView, UIColor;

@interface PKPaymentTransactionTableCell : PKTableViewCell <PKPaymentTransactionCellResponder> {

	NSString* _identifier;
	PKPaymentTransactionView* _transactionView;

}

@property (nonatomic,retain) UIColor * primaryColor; 
@property (nonatomic,retain) UIColor * secondaryColor; 
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransactionView *)transactionView;
-(UIColor *)secondaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(UIColor *)primaryColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


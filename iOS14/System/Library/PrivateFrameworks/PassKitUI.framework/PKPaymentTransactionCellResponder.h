/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class NSString, PKPaymentTransactionView;


@protocol PKPaymentTransactionCellResponder <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView; 
@required
-(PKPaymentTransactionView *)transactionView;
-(void)setIdentifier:(id)arg1;
-(NSString *)identifier;

@end


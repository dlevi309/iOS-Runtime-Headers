/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class UITextField;


@protocol PKPerformActionView <NSObject>
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate; 
@property (nonatomic,readonly) UITextField * amountTextField; 
@optional
-(void)willDismissViewController;

@required
-(id<PKPerformActionViewDelegate>)delegate;
-(id)transactionCurrency;
-(void)saveLastInputValues;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
-(void)setDelegate:(id)arg1;
-(id)pass;
-(id)transactionAmount;
-(UITextField *)amountTextField;
-(id)serviceProviderData;

@end


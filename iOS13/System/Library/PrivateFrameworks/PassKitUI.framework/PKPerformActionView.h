/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id)arg1;
-(id)transactionAmount;
-(id)pass;
-(id)serviceProviderData;
-(id)transactionCurrency;
-(UITextField *)amountTextField;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
-(void)saveLastInputValues;

@end


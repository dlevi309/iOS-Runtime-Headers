/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKExpressPassControllerDelegate <NSObject>
@optional
-(void)expressPassController:(id)arg1 didReceiveAuthenticationRequestForPass:(id)arg2;

@required
-(void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2 paymentApplicationIdentifier:(id)arg3;
-(void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2;
-(void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2;
-(void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3;

@end


/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PDAccountManagerObserver <NSObject>
@optional
-(void)accountManager:(id)arg1 didAddAccount:(id)arg2;
-(void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;
-(void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;
-(void)accountManager:(id)arg1 didAddAccountEvent:(id)arg2;
-(void)accountManager:(id)arg1 didUpdateAccountEvent:(id)arg2;
-(void)accountManager:(id)arg1 didRemoveAccountEvent:(id)arg2;
-(void)accountManager:(id)arg1 didSetScheduledPayments:(id)arg2 forAccountIdentifier:(id)arg3;
-(void)accountManager:(id)arg1 statementsChangedForAccountIdentifier:(id)arg2;
-(void)accountManager:(id)arg1 scheduledPaymentsChangedForAccountIdentifier:(id)arg2;

@end


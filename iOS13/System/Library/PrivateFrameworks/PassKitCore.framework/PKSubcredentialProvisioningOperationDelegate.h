/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKSubcredentialProvisioningOperationDelegate <NSObject>
@required
-(void)operation:(id)arg1 addedCredential:(id)arg2;
-(void)operation:(id)arg1 addedPass:(id)arg2;
-(void)operationWasCanceled:(id)arg1;
-(void)operation:(id)arg1 advanceToState:(long long)arg2;
-(void)operation:(id)arg1 failWithError:(id)arg2;

@end


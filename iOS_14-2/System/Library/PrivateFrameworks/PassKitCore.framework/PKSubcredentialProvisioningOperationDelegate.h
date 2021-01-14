/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKSubcredentialProvisioningOperationDelegate <NSObject>
@required
-(void)operation:(id)arg1 advanceToState:(long long)arg2;
-(void)operation:(id)arg1 failWithError:(id)arg2;
-(void)operation:(id)arg1 addedCredential:(id)arg2;
-(void)operation:(id)arg1 addedPass:(id)arg2;
-(void)operationWasCanceled:(id)arg1;

@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKSubcredentialProvisioningControllerDelegate <NSObject>
@optional
-(void)subcredentialProvisioningController:(id)arg1 didEnterState:(long long)arg2;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2;
-(void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(/*^block*/id)arg3;

@required
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;

@end


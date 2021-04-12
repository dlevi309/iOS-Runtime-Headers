/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKSubcredentialProvisioningControllerDelegate <NSObject>
@optional
-(void)subcredentialProvisioningController:(id)arg1 didEnterState:(long long)arg2;
-(void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(/*^block*/id)arg3;

@required
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2;

@end


/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <PassKitCore/PKPaymentWebServiceTargetDevice.h>

@protocol NPKPaymentWebServiceStandaloneTargetDeviceDelegate;
@interface NPKPaymentWebServiceStandaloneTargetDevice : PKPaymentWebServiceTargetDevice {

	id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)standalonePaymentWebServiceWithDelegate:(id)arg1 ;
-(id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate>)delegate;
-(void)setDelegate:(id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate>)arg1 ;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
@end


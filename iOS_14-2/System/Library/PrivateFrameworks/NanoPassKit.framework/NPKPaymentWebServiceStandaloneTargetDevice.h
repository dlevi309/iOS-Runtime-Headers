/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate>)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerConfiguration.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class NSString;

@interface PKPeerPaymentSetupFlowProvisionConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration> {

	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)peerPaymentSetupConfigurationType;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)initWithSetupDelegate:(id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
@end


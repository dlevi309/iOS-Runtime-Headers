/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class PKSubcredentialPairingFlowControllerContext;


@protocol PKSubcredentialPairingFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation,PKFieldDetectSuppressor>
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext; 
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController; 
@property (nonatomic,readonly) unsigned long long operation; 
@required
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;

@end


/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class PKSubcredentialInvitationFlowControllerContext;


@protocol PKSubcredentialInvitationFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation>
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) id<PKSubcredentialInvitationFlowControllerProtocol> flowController; 
@property (nonatomic,retain) PKSubcredentialInvitationFlowControllerContext * provisioningContext; 
@required
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2;
-(id<PKSubcredentialInvitationFlowControllerProtocol>)flowController;
-(PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;

@end


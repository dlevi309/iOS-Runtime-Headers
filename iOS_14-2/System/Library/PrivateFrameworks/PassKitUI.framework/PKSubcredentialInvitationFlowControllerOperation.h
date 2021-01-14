/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;
-(id<PKSubcredentialInvitationFlowControllerProtocol>)flowController;

@end


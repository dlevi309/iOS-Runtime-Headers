/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class PKSubcredentialPairingFlowControllerContext;


@protocol PKSubcredentialPairingFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation,PKFieldDetectSuppressor>
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext; 
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController; 
@property (nonatomic,readonly) unsigned long long operation; 
@optional
-(void)hostApplicationDidEnterBackground;
-(void)hostApplicationWillEnterForeground;

@required
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;

@end


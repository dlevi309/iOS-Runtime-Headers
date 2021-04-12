/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKSubcredentialInvitationFlowControllerOperation.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSubcredentialInvitationFlowControllerProtocol;
@class PKSubcredentialInvitationFlowControllerContext, PKHeroCardExplainationHeaderView, NSString;

@interface PKSubcredentialInvitationAcceptedViewController : PKExplanationViewController <PKSubcredentialInvitationFlowControllerOperation, PKViewControllerPreflightable> {

	PKHeroCardExplainationHeaderView* _heroCardView;
	BOOL _isPassExpress;
	PKSubcredentialInvitationFlowControllerContext* _provisioningContext;
	id<PKSubcredentialInvitationFlowControllerProtocol> _flowController;

}

@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,retain) PKSubcredentialInvitationFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialInvitationFlowControllerContext *)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id<PKSubcredentialInvitationFlowControllerProtocol>)flowController;
@end


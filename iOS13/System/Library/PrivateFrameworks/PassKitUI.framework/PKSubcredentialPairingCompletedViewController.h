/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerOperation.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSubcredentialPairingFlowControllerProtocol;
@class PKHeroCardExplainationHeaderView, UIViewController, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKSubcredentialPairingCompletedViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable> {

	BOOL _isLastOperation;
	PKHeroCardExplainationHeaderView* _heroCardView;
	UIViewController* _nextVC;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PKSubcredentialProvisioningFlowController> flowController; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
-(unsigned long long)operation;
-(void)viewDidLoad;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(BOOL)suppressFieldDetect;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(id<PKSubcredentialProvisioningFlowController>)flowController;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
@end


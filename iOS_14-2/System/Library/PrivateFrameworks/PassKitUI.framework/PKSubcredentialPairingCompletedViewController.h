/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _isPassExpress;
	PKHeroCardExplainationHeaderView* _heroCardView;
	UIViewController* _nextVC;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(BOOL)suppressFieldDetect;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerOperation.h>

@protocol PKSubcredentialPairingFlowControllerProtocol;
@class PKExplanationView, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKSubcredentialPairingErrorViewController : UIViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {

	PKExplanationView* _explainationView;
	long long _errorCode;
	BOOL _isAdvancing;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;

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
-(void)viewWillLayoutSubviews;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(BOOL)suppressFieldDetect;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(id<PKSubcredentialProvisioningFlowController>)flowController;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(void)cancelButtonPressed;
@end


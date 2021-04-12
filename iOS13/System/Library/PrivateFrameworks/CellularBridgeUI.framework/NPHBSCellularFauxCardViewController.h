/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NPHCellularBridgeBarcodeScannerCaptureDelegate.h>
#import <libobjc.A.dylib/NPHBSCellularConfirmationCodeViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString, NSDate, CAShapeLayer, CTXPCServiceSubscriptionContext, UIView, UIButton, UILabel, NPHCellularBridgeBarcodeScannerView;

@interface NPHBSCellularFauxCardViewController : UIViewController <NPHCellularBridgeBarcodeScannerCaptureDelegate, NPHBSCellularConfirmationCodeViewControllerDelegate, UINavigationControllerDelegate> {

	NSString* _fauxCardData;
	NSDate* _nextTimeToAcceptScan;
	CAShapeLayer* _fillWithHoleLayer;
	CAShapeLayer* _holeOutlineLayer;
	/*^block*/id _completion;
	/*^block*/id _codelessActivationBlock;
	long long _userConsentResponse;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	UIView* _fauxScanView;
	UIView* _cutoutView;
	UIButton* _bypassFauxCardButton;
	UIButton* _enterFauxCardDataManuallyButton;
	UILabel* _fauxDataLabel;
	UILabel* _activationCodeLabel;
	NPHCellularBridgeBarcodeScannerView* _scannerView;

}

@property (nonatomic,copy) id completion;                                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id codelessActivationBlock;                                           //@synthesize codelessActivationBlock=_codelessActivationBlock - In the implementation block
@property (assign,nonatomic) long long userConsentResponse;                                      //@synthesize userConsentResponse=_userConsentResponse - In the implementation block
@property (assign,nonatomic) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic,__weak) UIView * fauxScanView;                                       //@synthesize fauxScanView=_fauxScanView - In the implementation block
@property (assign,nonatomic,__weak) UIView * cutoutView;                                         //@synthesize cutoutView=_cutoutView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * bypassFauxCardButton;                             //@synthesize bypassFauxCardButton=_bypassFauxCardButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * enterFauxCardDataManuallyButton;                  //@synthesize enterFauxCardDataManuallyButton=_enterFauxCardDataManuallyButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * fauxDataLabel;                                     //@synthesize fauxDataLabel=_fauxDataLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * activationCodeLabel;                               //@synthesize activationCodeLabel=_activationCodeLabel - In the implementation block
@property (nonatomic,retain) NPHCellularBridgeBarcodeScannerView * scannerView;                  //@synthesize scannerView=_scannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)cancelAction:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(long long)userConsentResponse;
-(void)captureSession:(id)arg1 isRunning:(BOOL)arg2 ;
-(id)codelessActivationBlock;
-(void)_setFauxCardData:(id)arg1 ;
-(id)_getFauxCardData;
-(void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 ;
-(void)presentConfirmationCodeRequest;
-(void)cellularConfirmationCodeViewController:(id)arg1 confirmedWithCode:(id)arg2 ;
-(void)bypassFauxCard:(id)arg1 ;
-(void)enterFauxCardDataManually:(id)arg1 ;
-(void)setCodelessActivationBlock:(id)arg1 ;
-(void)setUserConsentResponse:(long long)arg1 ;
-(UIView *)fauxScanView;
-(void)setFauxScanView:(UIView *)arg1 ;
-(UIView *)cutoutView;
-(void)setCutoutView:(UIView *)arg1 ;
-(UIButton *)bypassFauxCardButton;
-(void)setBypassFauxCardButton:(UIButton *)arg1 ;
-(UIButton *)enterFauxCardDataManuallyButton;
-(void)setEnterFauxCardDataManuallyButton:(UIButton *)arg1 ;
-(UILabel *)fauxDataLabel;
-(void)setFauxDataLabel:(UILabel *)arg1 ;
-(UILabel *)activationCodeLabel;
-(void)setActivationCodeLabel:(UILabel *)arg1 ;
-(NPHCellularBridgeBarcodeScannerView *)scannerView;
-(void)setScannerView:(NPHCellularBridgeBarcodeScannerView *)arg1 ;
@end

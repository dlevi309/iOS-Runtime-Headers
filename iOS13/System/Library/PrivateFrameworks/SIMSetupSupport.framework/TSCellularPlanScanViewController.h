/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSDate, CAShapeLayer, TSCellularPlanQRCodeScannerView, NSString, UIView, UIButton, UILabel;

@interface TSCellularPlanScanViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {

	BOOL _preinstallCompleted;
	NSDate* _nextTimeToAcceptScan;
	CAShapeLayer* _fillWithHoleLayer;
	CAShapeLayer* _holeOutlineLayer;
	TSCellularPlanQRCodeScannerView* _scannerView;
	BOOL _confirmationCodeRequired;
	BOOL _manualCardInfoEntry;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSString* _fauxCardData;
	UIView* _scanView;
	UIView* _cutoutView;
	UIButton* _enterDetailsManuallyButton;
	UILabel* _scanQRCodeLabel;
	UILabel* _positionQRCodeLabel;

}

@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * fauxCardData;                                           //@synthesize fauxCardData=_fauxCardData - In the implementation block
@property (readonly) BOOL confirmationCodeRequired;                                     //@synthesize confirmationCodeRequired=_confirmationCodeRequired - In the implementation block
@property (readonly) BOOL manualCardInfoEntry;                                          //@synthesize manualCardInfoEntry=_manualCardInfoEntry - In the implementation block
@property (assign,nonatomic,__weak) UIView * scanView;                                  //@synthesize scanView=_scanView - In the implementation block
@property (assign,nonatomic,__weak) UIView * cutoutView;                                //@synthesize cutoutView=_cutoutView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * enterDetailsManuallyButton;              //@synthesize enterDetailsManuallyButton=_enterDetailsManuallyButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * scanQRCodeLabel;                          //@synthesize scanQRCodeLabel=_scanQRCodeLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * positionQRCodeLabel;                      //@synthesize positionQRCodeLabel=_positionQRCodeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(long long)navigationBarScrollToEdgeBehavior;
-(BOOL)canBeShownFromSuspendedState;
-(void)enterFauxCardDataManually:(id)arg1 ;
-(UIView *)cutoutView;
-(void)setCutoutView:(UIView *)arg1 ;
-(UIButton *)enterDetailsManuallyButton;
-(void)_addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 ;
-(UIView *)scanView;
-(NSString *)fauxCardData;
-(BOOL)confirmationCodeRequired;
-(BOOL)manualCardInfoEntry;
-(void)setScanView:(UIView *)arg1 ;
-(void)setEnterDetailsManuallyButton:(UIButton *)arg1 ;
-(UILabel *)scanQRCodeLabel;
-(void)setScanQRCodeLabel:(UILabel *)arg1 ;
-(UILabel *)positionQRCodeLabel;
-(void)setPositionQRCodeLabel:(UILabel *)arg1 ;
-(void)planInfoDidUpdate:(id)arg1 planListError:(id)arg2 ;
@end


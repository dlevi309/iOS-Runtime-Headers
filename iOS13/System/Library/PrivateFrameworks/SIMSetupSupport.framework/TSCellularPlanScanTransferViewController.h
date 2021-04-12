/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSDate, CAShapeLayer, NSArray, CTDisplayPlanList, TSCellularPlanQRCodeScannerView, UIActivityIndicatorView, NSString, UIView, UILabel, UIButton, UITableView;

@interface TSCellularPlanScanTransferViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {

	BOOL _receivedPendingInstallItems;
	BOOL _receivedTransferItems;
	BOOL _isInEligiblePlanPresent;
	NSDate* _nextTimeToAcceptScan;
	CAShapeLayer* _fillWithHoleLayer;
	CAShapeLayer* _holeOutlineLayer;
	NSArray* _transferItems;
	CTDisplayPlanList* _pendingInstallItems;
	TSCellularPlanQRCodeScannerView* _scannerView;
	UIActivityIndicatorView* _activityView;
	BOOL _confirmationCodeRequired;
	BOOL _manualCardInfoEntry;
	BOOL _transferring;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSString* _fauxCardData;
	UIView* _scanView;
	UIView* _cutoutView;
	UIActivityIndicatorView* _checkingAvailablePlansSpinner;
	UILabel* _checkingAvailablePlansLabel;
	UIButton* _enterDetailsManuallyButton;
	UILabel* _scanQRCodeLabel;
	UILabel* _positionQRCodeLabel;
	UITableView* _pendingPlansListTableView;

}

@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * fauxCardData;                                                             //@synthesize fauxCardData=_fauxCardData - In the implementation block
@property (readonly) BOOL confirmationCodeRequired;                                                       //@synthesize confirmationCodeRequired=_confirmationCodeRequired - In the implementation block
@property (readonly) BOOL manualCardInfoEntry;                                                            //@synthesize manualCardInfoEntry=_manualCardInfoEntry - In the implementation block
@property (assign,nonatomic,__weak) UIView * scanView;                                                    //@synthesize scanView=_scanView - In the implementation block
@property (assign,nonatomic,__weak) UIView * cutoutView;                                                  //@synthesize cutoutView=_cutoutView - In the implementation block
@property (readonly) BOOL transferring;                                                                   //@synthesize transferring=_transferring - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * checkingAvailablePlansSpinner;              //@synthesize checkingAvailablePlansSpinner=_checkingAvailablePlansSpinner - In the implementation block
@property (assign,nonatomic,__weak) UILabel * checkingAvailablePlansLabel;                                //@synthesize checkingAvailablePlansLabel=_checkingAvailablePlansLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * enterDetailsManuallyButton;                                //@synthesize enterDetailsManuallyButton=_enterDetailsManuallyButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * scanQRCodeLabel;                                            //@synthesize scanQRCodeLabel=_scanQRCodeLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * positionQRCodeLabel;                                        //@synthesize positionQRCodeLabel=_positionQRCodeLabel - In the implementation block
@property (assign,nonatomic,__weak) UITableView * pendingPlansListTableView;                              //@synthesize pendingPlansListTableView=_pendingPlansListTableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(long long)navigationBarScrollToEdgeBehavior;
-(BOOL)canBeShownFromSuspendedState;
-(void)enterFauxCardDataManually:(id)arg1 ;
-(UIView *)cutoutView;
-(void)setCutoutView:(UIView *)arg1 ;
-(void)_maybeUpdateTableView;
-(UIButton *)enterDetailsManuallyButton;
-(void)_addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 ;
-(void)_presentActionSheetForPendingInstall:(id)arg1 ;
-(void)_presentActionSheetForPlanTransfer:(id)arg1 ;
-(UITableView *)pendingPlansListTableView;
-(UIView *)scanView;
-(void)_startPlanTransfer:(id)arg1 ;
-(id)_messageTextForActionSheet:(id)arg1 carrierName:(id)arg2 countryCode:(id)arg3 ;
-(void)_startPendingInstall:(id)arg1 ;
-(UIActivityIndicatorView *)checkingAvailablePlansSpinner;
-(UILabel *)checkingAvailablePlansLabel;
-(id)initWithTransferItems:(id)arg1 ;
-(void)updateTransferList:(id)arg1 isInEligiblePlanPresent:(BOOL)arg2 ;
-(void)updatePendingInstallItems:(id)arg1 ;
-(NSString *)fauxCardData;
-(BOOL)confirmationCodeRequired;
-(BOOL)manualCardInfoEntry;
-(void)setScanView:(UIView *)arg1 ;
-(BOOL)transferring;
-(void)setCheckingAvailablePlansSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setCheckingAvailablePlansLabel:(UILabel *)arg1 ;
-(void)setEnterDetailsManuallyButton:(UIButton *)arg1 ;
-(UILabel *)scanQRCodeLabel;
-(void)setScanQRCodeLabel:(UILabel *)arg1 ;
-(UILabel *)positionQRCodeLabel;
-(void)setPositionQRCodeLabel:(UILabel *)arg1 ;
-(void)setPendingPlansListTableView:(UITableView *)arg1 ;
@end


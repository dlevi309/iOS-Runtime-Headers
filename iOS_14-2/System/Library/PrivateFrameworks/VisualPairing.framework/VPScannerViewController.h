/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UIView, UIButton, VPScannerView, UILabel;

@interface VPScannerViewController : UIViewController {

	/*^block*/id _eventHandler;
	/*^block*/id _scannedCodeHandler;
	NSString* _titleMessage;
	UIView* _containerView;
	UIButton* _cancelButton;
	UIButton* _pairManuallyButton;
	VPScannerView* _scannerView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	UIView* _viewfinderView;

}

@property (nonatomic,retain) UIView * containerView;                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * pairManuallyButton;              //@synthesize pairManuallyButton=_pairManuallyButton - In the implementation block
@property (nonatomic,retain) VPScannerView * scannerView;                //@synthesize scannerView=_scannerView - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * viewfinderView;                    //@synthesize viewfinderView=_viewfinderView - In the implementation block
@property (nonatomic,copy) id eventHandler;                              //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) id scannedCodeHandler;                        //@synthesize scannedCodeHandler=_scannedCodeHandler - In the implementation block
@property (nonatomic,copy) NSString * titleMessage;                      //@synthesize titleMessage=_titleMessage - In the implementation block
+(id)instantiateViewController;
-(UILabel *)titleLabel;
-(UIView *)viewfinderView;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(UIButton *)cancelButton;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UILabel *)subtitleLabel;
-(UIView *)containerView;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleCancelButton:(id)arg1 ;
-(void)setViewfinderView:(UIView *)arg1 ;
-(VPScannerView *)scannerView;
-(void)setScannerView:(VPScannerView *)arg1 ;
-(id)scannedCodeHandler;
-(void)setScannedCodeHandler:(id)arg1 ;
-(void)handlePairManuallyButton:(id)arg1 ;
-(NSString *)titleMessage;
-(void)setTitleMessage:(NSString *)arg1 ;
-(UIButton *)pairManuallyButton;
-(void)setPairManuallyButton:(UIButton *)arg1 ;
@end


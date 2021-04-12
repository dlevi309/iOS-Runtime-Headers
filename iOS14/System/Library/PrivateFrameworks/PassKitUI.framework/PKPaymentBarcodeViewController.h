/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class PKRightAngleRotatingView, UILabel, UIButton, UILayoutGuide, UIImageView, PKPaymentPass, NSData;

@interface PKPaymentBarcodeViewController : UIViewController {

	PKRightAngleRotatingView* _barcodeView;
	UILabel* _disclaimerText;
	UIButton* _closeButton;
	UILayoutGuide* _barcodeGuide;
	UIImageView* _compactBankLogoView;
	PKPaymentPass* _pass;
	SCD_Struct_PK35 _viewSizeInfo;
	NSData* _barcodeData;

}

@property (nonatomic,retain) NSData * barcodeData;              //@synthesize barcodeData=_barcodeData - In the implementation block
-(void)viewWillLayoutSubviews;
-(SCD_Struct_PK35)_barcodePadding;
-(CGSize)_barcodeSize;
-(NSData *)barcodeData;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)invalidate;
-(void)setBarcodeData:(NSData *)arg1 ;
-(id)initWithPass:(id)arg1 ;
@end


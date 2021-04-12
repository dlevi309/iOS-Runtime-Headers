/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class PKBarcode, UIImage, UIImageView, NSMutableArray, UILabel, UIView;

@interface PKBarcodeStickerView : UIButton {

	PKBarcode* _barcode;
	UIImage* _barcodeImage;
	UIImageView* _matteView;
	UIImageView* _barcodeView;
	NSMutableArray* _stickerConstraints;
	NSMutableArray* _matteConstraints;
	UILabel* _altTextLabel;
	BOOL _drawBarcode;
	long long _validity;

}

@property (assign,nonatomic) long long validity;                //@synthesize validity=_validity - In the implementation block
@property (nonatomic,readonly) UIView * matteView;              //@synthesize matteView=_matteView - In the implementation block
+(long long)validityStateForPass:(id)arg1 ;
+(CGSize)_sizeForBarcode:(id)arg1 ;
+(PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(long long)validity;
-(void)setValidity:(long long)arg1 ;
-(void)_updateValidity;
-(id)initWithBarcode:(id)arg1 validityState:(long long)arg2 ;
-(CGSize)_varianceForBarcode:(id)arg1 ;
-(id)barcodeImage;
-(id)_resizedBarcode:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)_updateDrawBarcode;
-(void)_generateMatteRect:(CGRect*)arg1 barcodeRect:(CGRect*)arg2 altTextRect:(CGRect*)arg3 boundingSize:(CGSize)arg4 ;
-(UIView *)matteView;
@end


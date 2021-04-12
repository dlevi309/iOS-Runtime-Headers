/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class PKBarcode, UIImage, UIImageView, NSMutableArray, UILabel, UIFont;

@interface PKBarcodeStickerView : UIButton {

	PKBarcode* _barcode;
	UIImage* _barcodeImage;
	UIImageView* _matteView;
	UIImageView* _barcodeView;
	NSMutableArray* _stickerConstraints;
	NSMutableArray* _matteConstraints;
	UILabel* _altTextLabel;
	double _altTextInset;
	BOOL _barcodeViewInvalidated;
	BOOL _drawBarcode;
	BOOL _shouldMatteCode;
	long long _validity;
	CGSize _desiredBarcodeSize;

}

@property (assign,nonatomic) long long validity;                     //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) CGSize desiredBarcodeSize;              //@synthesize desiredBarcodeSize=_desiredBarcodeSize - In the implementation block
@property (assign,nonatomic) BOOL shouldMatteCode;                   //@synthesize shouldMatteCode=_shouldMatteCode - In the implementation block
@property (assign,nonatomic) UIFont * altTextFont; 
@property (assign,nonatomic) double altTextInset;                    //@synthesize altTextInset=_altTextInset - In the implementation block
+(CGSize)_sizeForBarcode:(id)arg1 ;
+(PKBarcodeQuietZone)_quietZoneForBarcode:(id)arg1 ;
+(long long)validityStateForPass:(id)arg1 ;
-(void)setValidity:(long long)arg1 ;
-(long long)validity;
-(void)_updateValidity;
-(void)_updateMatteViewHiding;
-(CGSize)_varianceForBarcode:(id)arg1 ;
-(id)barcodeImage;
-(id)_resizedBarcode:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)_updateDrawBarcode;
-(void)_generateMatteRect:(CGRect*)arg1 barcodeRect:(CGRect*)arg2 altTextRect:(CGRect*)arg3 boundingSize:(CGSize)arg4 ;
-(void)setAltTextFont:(UIFont *)arg1 ;
-(UIFont *)altTextFont;
-(void)setAltTextInset:(double)arg1 ;
-(void)setDesiredBarcodeSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)desiredBarcodeSize;
-(BOOL)shouldMatteCode;
-(void)setShouldMatteCode:(BOOL)arg1 ;
-(double)altTextInset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithBarcode:(id)arg1 validityState:(long long)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPassFrontFaceView.h>

@class UILabel, UIView, PKBackdropView, PKBarcodeStickerView, NSMutableArray, UIButton, UIImageView;

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {

	UILabel* _balanceLabel;
	UIView* _scrimView;
	PKBackdropView* _backdropView;
	PKBarcodeStickerView* _topBarcodeView;
	PKBarcodeStickerView* _bottomBarcodeView;
	NSMutableArray* _oldTopBarcodeViews;
	NSMutableArray* _oldBottomBarcodeViews;
	UIButton* _fullScreenButton;
	UIImageView* _compactBankLogoView;

}
-(id)_filterAuxiliaryField:(id)arg1 ;
-(id)_filterSecondaryField:(id)arg1 ;
-(void)_showFullScreenBarcodeForButton:(id)arg1 ;
-(void)_updateBalanceLabelFontSize;
-(void)_updateBalanceWithAccount:(id)arg1 ;
-(double)_barcodePadding;
-(CGSize)_barcodeSize;
-(BOOL)showsShare;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)_handleAccountChanged:(id)arg1 ;
-(void)layoutSubviews;
-(void)createBodyContentViews;
-(id)templateForLayoutMode:(long long)arg1 ;
-(void)createHeaderContentViews;
-(void)setViewExpanded:(BOOL)arg1 ;
-(void)setDynamicBarcodeData:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)templateForHeaderBucket;
-(void)setShowsLiveBalance:(BOOL)arg1 ;
-(void)dealloc;
@end


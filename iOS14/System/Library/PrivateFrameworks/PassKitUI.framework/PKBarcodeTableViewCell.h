/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class PKBarcodeStickerView, PKPass;

@interface PKBarcodeTableViewCell : UITableViewCell {

	PKBarcodeStickerView* _barcodeStickerView;
	CGSize _maximumBarcodeSize;
	PKPass* _pass;
	long long _barcodeStyle;

}

@property (nonatomic,retain) PKPass * pass;                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) long long barcodeStyle;              //@synthesize barcodeStyle=_barcodeStyle - In the implementation block
-(void)setPass:(PKPass *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_computeMaxBarcodeSize;
-(void)setBarcodeStyle:(long long)arg1 ;
-(long long)barcodeStyle;
-(PKPass *)pass;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end


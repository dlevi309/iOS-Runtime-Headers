/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class PKPass, PKBarcodeStickerView;

@interface PKBarcodeTableViewCell : UITableViewCell {

	PKPass* _pass;
	PKBarcodeStickerView* _barcodeStickerView;
	CGSize _maximumBarcodeSize;

}

@property (assign,nonatomic) CGSize maximumBarcodeSize;              //@synthesize maximumBarcodeSize=_maximumBarcodeSize - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithPass:(id)arg1 ;
-(CGSize)maximumBarcodeSize;
-(void)setMaximumBarcodeSize:(CGSize)arg1 ;
@end


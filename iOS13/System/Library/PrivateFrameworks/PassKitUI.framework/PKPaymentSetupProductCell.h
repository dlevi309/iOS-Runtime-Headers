/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentSetupProduct;

@interface PKPaymentSetupProductCell : PKTableViewCell {

	BOOL _drawsTopSeperator;
	PKPaymentSetupProduct* _product;
	double _textLabelOffset;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) double textLabelOffset;                       //@synthesize textLabelOffset=_textLabelOffset - In the implementation block
@property (assign,nonatomic) BOOL drawsTopSeperator;                       //@synthesize drawsTopSeperator=_drawsTopSeperator - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)_updateDisplay;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setTextLabelOffset:(double)arg1 ;
-(double)textLabelOffset;
-(BOOL)drawsTopSeperator;
-(void)setDrawsTopSeperator:(BOOL)arg1 ;
@end


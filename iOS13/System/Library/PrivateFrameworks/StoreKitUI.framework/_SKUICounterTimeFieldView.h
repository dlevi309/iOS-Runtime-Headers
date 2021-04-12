/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _SKUICounterTimeFieldView : UIView {

	UILabel* _labelLabel;
	UILabel* _valueLabel;
	unsigned long long _visibilityField;

}

@property (nonatomic,readonly) UILabel * labelLabel;                          //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                          //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) unsigned long long visibilityField;              //@synthesize visibilityField=_visibilityField - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)valueLabel;
-(UILabel *)labelLabel;
-(void)setVisibilityField:(unsigned long long)arg1 ;
-(unsigned long long)visibilityField;
@end


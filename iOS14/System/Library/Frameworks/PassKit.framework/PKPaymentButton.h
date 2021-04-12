/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class CAShapeLayer, CAFilter;

@interface PKPaymentButton : UIButton {

	CAShapeLayer* _layer;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	double _cornerRadius;
	long long _type;
	long long _style;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long style;                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(Class)layerClass;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
+(id)titleForType:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)style;
-(void)_createHighlightFilterIfNecessary;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2 ;
-(void)applyAccessibilityValues;
-(long long)_effectiveButtonStyle;
@end


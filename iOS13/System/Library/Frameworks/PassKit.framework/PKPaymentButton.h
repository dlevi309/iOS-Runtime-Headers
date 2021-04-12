/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class CAShapeLayer, UIView, UILabel, CAFilter, PKShapeView;

@interface PKPaymentButton : UIButton {

	CAShapeLayer* _layer;
	long long _style;
	long long _type;
	UIView* _container;
	UILabel* _buyLabel;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	CGSize _boundsSize;
	PKShapeView* _maskView;
	double _fontRatio;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(Class)layerClass;
+(id)titleForType:(long long)arg1 ;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2 ;
-(void)applyAccessibilityValues;
@end


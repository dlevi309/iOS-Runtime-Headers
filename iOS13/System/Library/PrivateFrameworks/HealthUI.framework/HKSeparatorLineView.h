/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HKSeparatorLineView : UIView {

	UIColor* _color;
	double _separatorThickness;
	long long _dashStyle;
	double _leadingMargin;
	double _trailingMargin;

}

@property (nonatomic,copy) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double separatorThickness;              //@synthesize separatorThickness=_separatorThickness - In the implementation block
@property (assign,nonatomic) long long dashStyle;                    //@synthesize dashStyle=_dashStyle - In the implementation block
@property (assign,nonatomic) double leadingMargin;                   //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                  //@synthesize trailingMargin=_trailingMargin - In the implementation block
+(id)_hrafibgate_separatorView;
+(id)_hragegate_separatorView;
+(id)_hkecg_separatorView;
-(id)init;
-(UIColor *)color;
-(BOOL)isOpaque;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_isVertical;
-(double)leadingMargin;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(long long)dashStyle;
-(void)setSeparatorThickness:(double)arg1 ;
-(void)setDashStyle:(long long)arg1 ;
-(void)_applyStyleToContext:(CGContextRef)arg1 ;
-(double)separatorThickness;
@end

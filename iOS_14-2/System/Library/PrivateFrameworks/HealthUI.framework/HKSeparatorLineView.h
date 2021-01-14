/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isOpaque;
-(CGSize)intrinsicContentSize;
-(BOOL)_isVertical;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIColor *)color;
-(double)separatorThickness;
-(void)drawRect:(CGRect)arg1 ;
-(double)leadingMargin;
-(void)setColor:(UIColor *)arg1 ;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(void)setSeparatorThickness:(double)arg1 ;
-(void)setDashStyle:(long long)arg1 ;
-(long long)dashStyle;
-(void)_applyStyleToContext:(CGContextRef)arg1 ;
@end


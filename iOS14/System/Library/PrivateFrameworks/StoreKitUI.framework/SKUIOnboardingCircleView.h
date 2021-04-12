/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIColor, UILabel;

@interface SKUIOnboardingCircleView : UIView {

	UIImageView* _backgroundImageView;
	UIEdgeInsets _edgeInsets;
	double _minimumDiameter;
	UIColor* _fillColor;
	UILabel* _titleLabel;
	long long _titlePosition;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double minimumDiameter;               //@synthesize minimumDiameter=_minimumDiameter - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (assign,nonatomic) long long titlePosition;              //@synthesize titlePosition=_titlePosition - In the implementation block
-(UILabel *)titleLabel;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)fillColor;
-(void)setBackgroundImageAlpha:(double)arg1 ;
-(void)setBackgroundImage:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)setTitlePosition:(long long)arg1 ;
-(long long)titlePosition;
-(void)setMinimumDiameter:(double)arg1 ;
-(double)minimumDiameter;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImage;

@interface SKUIStarBarView : UIView {

	UIColor* _emptyColor;
	UIImage* _emptyStarImage;
	UIColor* _filledColor;
	UIImage* _filledStarImage;
	long long _numberOfStars;
	double _value;

}

@property (nonatomic,copy) UIColor * emptyColor;                   //@synthesize emptyColor=_emptyColor - In the implementation block
@property (nonatomic,copy) UIColor * filledColor;                  //@synthesize filledColor=_filledColor - In the implementation block
@property (assign,nonatomic) long long numberOfStars;              //@synthesize numberOfStars=_numberOfStars - In the implementation block
@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setValue:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)value;
-(void)setEmptyColor:(UIColor *)arg1 ;
-(void)setFilledColor:(UIColor *)arg1 ;
-(void)setColoringUsingStyle:(id)arg1 ;
-(void)setNumberOfStars:(long long)arg1 ;
-(UIColor *)emptyColor;
-(long long)numberOfStars;
-(UIColor *)filledColor;
@end


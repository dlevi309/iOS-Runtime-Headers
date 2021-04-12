/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEmptyColor:(UIColor *)arg1 ;
-(void)setFilledColor:(UIColor *)arg1 ;
-(void)setColoringUsingStyle:(id)arg1 ;
-(void)setNumberOfStars:(long long)arg1 ;
-(UIColor *)emptyColor;
-(long long)numberOfStars;
-(UIColor *)filledColor;
@end


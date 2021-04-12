/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface SKUIBarRatingView : UIView {

	long long _barRatingStyle;
	long long _numberOfBars;
	float _ratingValue;

}

@property (assign,nonatomic) long long barRatingStyle;              //@synthesize barRatingStyle=_barRatingStyle - In the implementation block
@property (assign,nonatomic) long long numberOfBars;                //@synthesize numberOfBars=_numberOfBars - In the implementation block
@property (assign,nonatomic) float ratingValue;                     //@synthesize ratingValue=_ratingValue - In the implementation block
-(void)setNumberOfBars:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)ratingValue;
-(void)setRatingValue:(float)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)numberOfBars;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBarRatingStyle:(long long)arg1 ;
-(long long)barRatingStyle;
@end


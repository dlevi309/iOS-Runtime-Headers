/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface SKUIStarRatingView : UIView {

	double _elementSpacing;
	UIImageView* _ratingStarsImageView;
	UILabel* _textLabel;

}

@property (assign,nonatomic) double elementSpacing;                   //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (nonatomic,retain) UIImage * ratingStarsImage; 
@property (nonatomic,readonly) UILabel * textLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(void)setElementSpacing:(double)arg1 ;
-(UIImage *)ratingStarsImage;
-(void)setRatingStarsImage:(UIImage *)arg1 ;
-(double)elementSpacing;
@end


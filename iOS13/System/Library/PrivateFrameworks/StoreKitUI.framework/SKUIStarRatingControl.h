/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UIImage;

@interface SKUIStarRatingControl : UIControl {

	long long _previousUserRating;
	UIImageView* _emptyStarsImageView;
	UIImageView* _filledStarsImageView;
	long long _userRating;
	float _starSpacing;
	float _starWidth;

}

@property (nonatomic,retain) UIImage * emptyStarsImage; 
@property (nonatomic,retain) UIImage * filledStarsImage; 
@property (assign,nonatomic) long long userRating;                    //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) float starSpacing;                       //@synthesize starSpacing=_starSpacing - In the implementation block
@property (assign,nonatomic) float starWidth;                         //@synthesize starWidth=_starWidth - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_isRTL;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(long long)userRating;
-(void)setUserRating:(long long)arg1 ;
-(float)starWidth;
-(void)setStarWidth:(float)arg1 ;
-(void)setStarSpacing:(float)arg1 ;
-(void)setEmptyStarsImage:(UIImage *)arg1 ;
-(void)setFilledStarsImage:(UIImage *)arg1 ;
-(void)_updateUserRatingWithTouch:(id)arg1 ;
-(double)_unfilledStarsMinX;
-(float)starSpacing;
-(unsigned long long)_ratingForUIDirection:(unsigned long long)arg1 ;
-(double)_unfilledStarsWidth;
-(unsigned long long)_firstStar;
-(unsigned long long)_lastStar;
-(UIImage *)emptyStarsImage;
-(UIImage *)filledStarsImage;
@end


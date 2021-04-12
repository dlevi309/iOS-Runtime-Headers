/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVRatingBadgeLayout;

@interface TVRatingBadgeView : UIView {

	TVRatingBadgeLayout* _ratingBadgeLayout;
	double _ratingValue;

}

@property (nonatomic,retain) TVRatingBadgeLayout * ratingBadgeLayout;              //@synthesize ratingBadgeLayout=_ratingBadgeLayout - In the implementation block
@property (assign,nonatomic) double ratingValue;                                   //@synthesize ratingValue=_ratingValue - In the implementation block
+(id)ratingBadgeViewWithValue:(double)arg1 layout:(id)arg2 existingBadgeView:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_tintColor;
-(void)drawRect:(CGRect)arg1 ;
-(double)_interitemSpacing;
-(void)setRatingValue:(double)arg1 ;
-(double)ratingValue;
-(id)_halfStarImage;
-(double)_circleRadius;
-(id)_starImage;
-(id)_ratingStyle;
-(void)setRatingBadgeLayout:(TVRatingBadgeLayout *)arg1 ;
-(CGSize)_starSize;
-(double)_starHeight;
-(TVRatingBadgeLayout *)ratingBadgeLayout;
@end


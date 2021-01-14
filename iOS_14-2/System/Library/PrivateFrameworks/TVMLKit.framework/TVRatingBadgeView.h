/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)ratingValue;
-(id)_tintColor;
-(void)setRatingValue:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_circleRadius;
-(id)_halfStarImage;
-(double)_interitemSpacing;
-(TVRatingBadgeLayout *)ratingBadgeLayout;
-(id)_starImage;
-(id)_ratingStyle;
-(void)setRatingBadgeLayout:(TVRatingBadgeLayout *)arg1 ;
-(CGSize)_starSize;
-(double)_starHeight;
@end


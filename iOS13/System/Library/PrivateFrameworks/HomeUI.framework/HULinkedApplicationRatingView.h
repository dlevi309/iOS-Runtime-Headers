/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface HULinkedApplicationRatingView : UIView {

	double _rating;
	NSArray* _starViews;

}

@property (nonatomic,retain) NSArray * starViews;              //@synthesize starViews=_starViews - In the implementation block
@property (assign,nonatomic) double rating;                    //@synthesize rating=_rating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)rating;
-(void)setRating:(double)arg1 ;
-(void)setupConstraints;
-(void)setStarViews:(NSArray *)arg1 ;
-(void)updateStarViews;
-(NSArray *)starViews;
@end


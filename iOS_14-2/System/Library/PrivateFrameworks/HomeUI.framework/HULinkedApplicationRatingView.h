/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)rating;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRating:(double)arg1 ;
-(void)setupConstraints;
-(void)setStarViews:(NSArray *)arg1 ;
-(void)updateStarViews;
-(NSArray *)starViews;
@end


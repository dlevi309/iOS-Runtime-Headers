/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIImage;

@interface MKStarRatingView : UIView {

	double _rating;
	unsigned long long _numLevels;
	double _padding;
	BOOL _highlighted;
	NSMutableArray* _ratingViews;
	long long _numReviews;
	long long _starStyle;
	UIImage* _fullStarImage;
	UIImage* _halfStarImage;
	UIImage* _emptyStarImage;
	UIImage* _fullStarHighlightedImage;
	UIImage* _halfStarHighlightedImage;
	UIImage* _emptyStarHighlightedImage;

}

@property (assign,nonatomic) unsigned long long numberOfRatingLevels;              //@synthesize numLevels=_numLevels - In the implementation block
@property (assign,nonatomic) double rating;                                        //@synthesize rating=_rating - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIImage * fullStarImage;                              //@synthesize fullStarImage=_fullStarImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarImage;                              //@synthesize halfStarImage=_halfStarImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarImage;                             //@synthesize emptyStarImage=_emptyStarImage - In the implementation block
@property (nonatomic,retain) UIImage * fullStarHighlightedImage;                   //@synthesize fullStarHighlightedImage=_fullStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarHighlightedImage;                   //@synthesize halfStarHighlightedImage=_halfStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarHighlightedImage;                  //@synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage - In the implementation block
@property (assign,nonatomic) long long starStyle;                                  //@synthesize starStyle=_starStyle - In the implementation block
+(id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3 theme:(id)arg4 ;
+(id)textAttachmentimageNamed:(id)arg1 font:(id)arg2 ;
+(id)colorForRating:(double)arg1 ;
+(id)fullStarTextAttachmentWithFont:(id)arg1 ;
+(id)ratingShortAsAttributedString:(double)arg1 baseFont:(id)arg2 theme:(id)arg3 ;
+(id)halfStarTextAttachmentWithFont:(id)arg1 ;
+(id)emptyStarTextAttachmentWithFont:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPadding:(double)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)didMoveToWindow;
-(double)rating;
-(void)setRating:(double)arg1 ;
-(void)setStarStyle:(long long)arg1 ;
-(void)setNumberOfRatingLevels:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRatingLevels;
-(void)_layoutStarViewsCreatingIfNeeded:(BOOL)arg1 ;
-(id)imageWithName:(id)arg1 andColor:(id)arg2 ;
-(double)verticalAlignmentCenterPercentage;
-(long long)starStyle;
-(UIImage *)fullStarImage;
-(void)setFullStarImage:(UIImage *)arg1 ;
-(UIImage *)halfStarImage;
-(void)setHalfStarImage:(UIImage *)arg1 ;
-(UIImage *)emptyStarImage;
-(void)setEmptyStarImage:(UIImage *)arg1 ;
-(UIImage *)fullStarHighlightedImage;
-(void)setFullStarHighlightedImage:(UIImage *)arg1 ;
-(UIImage *)halfStarHighlightedImage;
-(void)setHalfStarHighlightedImage:(UIImage *)arg1 ;
-(UIImage *)emptyStarHighlightedImage;
-(void)setEmptyStarHighlightedImage:(UIImage *)arg1 ;
@end


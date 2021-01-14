/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVViewLayout.h>

@class UIColor, NSString;

@interface TVRatingBadgeLayout : TVViewLayout {

	UIColor* _fillColor;
	NSString* _ratingStyle;
	NSString* _ratingStyleAXSmall;
	NSString* _ratingStyleAXLarge;
	double _interitemSpacing;
	double _interitemSpacingAXSmall;
	double _interitemSpacingAXLarge;

}

@property (nonatomic,retain) UIColor * fillColor;                         //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) NSString * ratingStyle;                      //@synthesize ratingStyle=_ratingStyle - In the implementation block
@property (nonatomic,retain) NSString * ratingStyleAXSmall;               //@synthesize ratingStyleAXSmall=_ratingStyleAXSmall - In the implementation block
@property (nonatomic,retain) NSString * ratingStyleAXLarge;               //@synthesize ratingStyleAXLarge=_ratingStyleAXLarge - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                     //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacingAXSmall;              //@synthesize interitemSpacingAXSmall=_interitemSpacingAXSmall - In the implementation block
@property (assign,nonatomic) double interitemSpacingAXLarge;              //@synthesize interitemSpacingAXLarge=_interitemSpacingAXLarge - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setRatingStyle:(NSString *)arg1 ;
-(void)setRatingStyleAXLarge:(NSString *)arg1 ;
-(void)setRatingStyleAXSmall:(NSString *)arg1 ;
-(void)setInteritemSpacingAXLarge:(double)arg1 ;
-(void)setInteritemSpacingAXSmall:(double)arg1 ;
-(NSString *)ratingStyle;
-(NSString *)ratingStyleAXSmall;
-(NSString *)ratingStyleAXLarge;
-(double)interitemSpacingAXSmall;
-(double)interitemSpacingAXLarge;
@end


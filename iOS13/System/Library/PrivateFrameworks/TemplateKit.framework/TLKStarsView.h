/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKStackView.h>

@class UIFont;

@interface TLKStarsView : TLKStackView {

	double _starRating;
	UIFont* _font;
	double _currentStarRating;

}

@property (assign,nonatomic) double currentStarRating;              //@synthesize currentStarRating=_currentStarRating - In the implementation block
@property (assign,nonatomic) double starRating;                     //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(double)starRating;
-(void)setStarRating:(double)arg1 ;
-(void)updateStarImages;
-(double)currentStarRating;
-(void)setCurrentStarRating:(double)arg1 ;
@end


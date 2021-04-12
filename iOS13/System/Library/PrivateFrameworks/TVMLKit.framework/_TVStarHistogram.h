/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSArray, UIColor;

@interface _TVStarHistogram : UIView {

	UIImage* _starImage;
	NSArray* _starBars;
	UIColor* _barEmptyColor;
	UIColor* _barFillColor;
	double _lineSpacing;

}

@property (nonatomic,copy) NSArray * starBars;                     //@synthesize starBars=_starBars - In the implementation block
@property (nonatomic,retain) UIImage * starImage;                  //@synthesize starImage=_starImage - In the implementation block
@property (nonatomic,retain) UIColor * barEmptyColor;              //@synthesize barEmptyColor=_barEmptyColor - In the implementation block
@property (nonatomic,retain) UIColor * barFillColor;               //@synthesize barFillColor=_barFillColor - In the implementation block
@property (assign,nonatomic) double lineSpacing;                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
+(id)_histogramViewWithElement:(id)arg1 existingView:(id)arg2 ;
+(id)histogramViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(BOOL)canBecomeFocused;
-(void)drawRect:(CGRect)arg1 ;
-(UIImage *)starImage;
-(void)setStarBars:(NSArray *)arg1 ;
-(void)setStarImage:(UIImage *)arg1 ;
-(void)setBarEmptyColor:(UIColor *)arg1 ;
-(void)setBarFillColor:(UIColor *)arg1 ;
-(NSArray *)starBars;
-(UIColor *)barEmptyColor;
-(UIColor *)barFillColor;
@end


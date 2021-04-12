/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GameCenterUI.RoundedCornerView.h>

@class UIColor;

@interface GameCenterUI.ArtworkView : GameCenterUI.RoundedCornerView {

	 imageView;
	 shadowView;
	 shadow;
	 isStyleInvalid;
	 style;
	 internalBackgroundColor;
	 imageSize;
	 isCornerRadiusInvalid;
	 artworkTintColor;

}

@property (retain,nonatomic) UIColor * backgroundColor; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) BOOL accessibilityIgnoresInvertColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setAccessibilityIgnoresInvertColors:(BOOL)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


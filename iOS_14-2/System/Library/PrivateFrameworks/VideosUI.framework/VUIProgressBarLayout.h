/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class UIColor;

@interface VUIProgressBarLayout : NSObject {

	BOOL _shouldProgressBarUseRoundCorner;
	BOOL _useMaterial;
	UIColor* _fillColor;
	UIColor* _tintColor;
	UIColor* _gradientStartColor;
	UIColor* _gradientEndColor;
	double _height;
	double _cornerRadius;
	UIEdgeInsets _margin;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIColor * fillColor;                               //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientStartColor;                      //@synthesize gradientStartColor=_gradientStartColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;                        //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (assign,nonatomic) double height;                                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                               //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                              //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL shouldProgressBarUseRoundCorner;              //@synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner - In the implementation block
@property (assign,nonatomic) BOOL useMaterial;                                  //@synthesize useMaterial=_useMaterial - In the implementation block
+(id)defaultProgressBarLayout;
-(void)setHeight:(double)arg1 ;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIEdgeInsets)margin;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)height;
-(double)cornerRadius;
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientStartColor;
-(UIColor *)gradientEndColor;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)tintColor;
-(BOOL)shouldProgressBarUseRoundCorner;
-(void)setShouldProgressBarUseRoundCorner:(BOOL)arg1 ;
-(BOOL)useMaterial;
-(void)setUseMaterial:(BOOL)arg1 ;
@end


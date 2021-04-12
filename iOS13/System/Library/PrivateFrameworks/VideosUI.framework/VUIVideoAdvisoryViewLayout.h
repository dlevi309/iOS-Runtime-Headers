/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class UIColor, VUITextLayout;

@interface VUIVideoAdvisoryViewLayout : TVViewLayout {

	double _legendMaxWidth;
	double _legendNameMinWidth;
	UIColor* _legendBackgroundColor;
	double _legendCornerRadius;
	UIColor* _dividerColor;
	VUITextLayout* _legendLayout;
	VUITextLayout* _legendDescriptionLayout;
	VUITextLayout* _portraitLegendLayout;
	VUITextLayout* _portraitLegendDescriptionLayout;
	CGSize _logoSize;
	CGSize _legendSize;
	CGSize _dividerSize;
	CGSize _portraitLogoSize;
	CGSize _portraitLegendSize;
	CGSize _portraitDividerSize;
	UIEdgeInsets _logoMargin;
	UIEdgeInsets _legendsMargin;
	UIEdgeInsets _legendNamePadding;
	UIEdgeInsets _dividerMargin;
	UIEdgeInsets _portraitMargin;
	UIEdgeInsets _portraitLogoMargin;
	UIEdgeInsets _portraitLegendsMargin;
	UIEdgeInsets _portraitDividerMargin;

}

@property (assign,nonatomic) CGSize logoSize;                                                //@synthesize logoSize=_logoSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets logoMargin;                                        //@synthesize logoMargin=_logoMargin - In the implementation block
@property (assign,nonatomic) CGSize legendSize;                                              //@synthesize legendSize=_legendSize - In the implementation block
@property (assign,nonatomic) double legendMaxWidth;                                          //@synthesize legendMaxWidth=_legendMaxWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets legendsMargin;                                     //@synthesize legendsMargin=_legendsMargin - In the implementation block
@property (assign,nonatomic) double legendNameMinWidth;                                      //@synthesize legendNameMinWidth=_legendNameMinWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets legendNamePadding;                                 //@synthesize legendNamePadding=_legendNamePadding - In the implementation block
@property (nonatomic,readonly) UIColor * legendBackgroundColor;                              //@synthesize legendBackgroundColor=_legendBackgroundColor - In the implementation block
@property (assign,nonatomic) double legendCornerRadius;                                      //@synthesize legendCornerRadius=_legendCornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets dividerMargin;                                     //@synthesize dividerMargin=_dividerMargin - In the implementation block
@property (assign,nonatomic) CGSize dividerSize;                                             //@synthesize dividerSize=_dividerSize - In the implementation block
@property (nonatomic,readonly) UIColor * dividerColor;                                       //@synthesize dividerColor=_dividerColor - In the implementation block
@property (nonatomic,readonly) VUITextLayout * legendLayout;                                 //@synthesize legendLayout=_legendLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * legendDescriptionLayout;                      //@synthesize legendDescriptionLayout=_legendDescriptionLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets portraitMargin;                                    //@synthesize portraitMargin=_portraitMargin - In the implementation block
@property (assign,nonatomic) CGSize portraitLogoSize;                                        //@synthesize portraitLogoSize=_portraitLogoSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets portraitLogoMargin;                                //@synthesize portraitLogoMargin=_portraitLogoMargin - In the implementation block
@property (assign,nonatomic) CGSize portraitLegendSize;                                      //@synthesize portraitLegendSize=_portraitLegendSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets portraitLegendsMargin;                             //@synthesize portraitLegendsMargin=_portraitLegendsMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets portraitDividerMargin;                             //@synthesize portraitDividerMargin=_portraitDividerMargin - In the implementation block
@property (assign,nonatomic) CGSize portraitDividerSize;                                     //@synthesize portraitDividerSize=_portraitDividerSize - In the implementation block
@property (nonatomic,readonly) VUITextLayout * portraitLegendLayout;                         //@synthesize portraitLegendLayout=_portraitLegendLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * portraitLegendDescriptionLayout;              //@synthesize portraitLegendDescriptionLayout=_portraitLegendDescriptionLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(UIColor *)dividerColor;
-(void)setDividerSize:(CGSize)arg1 ;
-(CGSize)dividerSize;
-(void)setLogoSize:(CGSize)arg1 ;
-(CGSize)logoSize;
-(UIEdgeInsets)legendNamePadding;
-(double)legendNameMinWidth;
-(UIEdgeInsets)legendsMargin;
-(VUITextLayout *)legendDescriptionLayout;
-(VUITextLayout *)legendLayout;
-(UIColor *)legendBackgroundColor;
-(double)legendCornerRadius;
-(void)setPortraitMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)logoMargin;
-(void)setLogoMargin:(UIEdgeInsets)arg1 ;
-(CGSize)legendSize;
-(void)setLegendSize:(CGSize)arg1 ;
-(double)legendMaxWidth;
-(void)setLegendMaxWidth:(double)arg1 ;
-(void)setLegendsMargin:(UIEdgeInsets)arg1 ;
-(void)setLegendNameMinWidth:(double)arg1 ;
-(void)setLegendNamePadding:(UIEdgeInsets)arg1 ;
-(void)setLegendCornerRadius:(double)arg1 ;
-(UIEdgeInsets)dividerMargin;
-(void)setDividerMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)portraitMargin;
-(CGSize)portraitLogoSize;
-(void)setPortraitLogoSize:(CGSize)arg1 ;
-(UIEdgeInsets)portraitLogoMargin;
-(void)setPortraitLogoMargin:(UIEdgeInsets)arg1 ;
-(CGSize)portraitLegendSize;
-(void)setPortraitLegendSize:(CGSize)arg1 ;
-(UIEdgeInsets)portraitLegendsMargin;
-(void)setPortraitLegendsMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)portraitDividerMargin;
-(void)setPortraitDividerMargin:(UIEdgeInsets)arg1 ;
-(CGSize)portraitDividerSize;
-(void)setPortraitDividerSize:(CGSize)arg1 ;
-(VUITextLayout *)portraitLegendLayout;
-(VUITextLayout *)portraitLegendDescriptionLayout;
@end


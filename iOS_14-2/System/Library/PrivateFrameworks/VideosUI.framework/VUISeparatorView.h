/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView;

@interface VUISeparatorView : UIView {

	UIColor* _color;
	UIColor* _darkColor;
	double _lineHeight;
	UIView* _line;

}

@property (nonatomic,retain) UIView * line;                    //@synthesize line=_line - In the implementation block
@property (nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * darkColor;              //@synthesize darkColor=_darkColor - In the implementation block
@property (assign,nonatomic) double lineHeight;                //@synthesize lineHeight=_lineHeight - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLine:(UIView *)arg1 ;
-(UIColor *)color;
-(void)setDarkColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(double)lineHeight;
-(void)setColor:(UIColor *)arg1 ;
-(id)lineColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)darkColor;
-(UIView *)line;
-(void)initializeVUISeparatorView;
-(void)_updateLineColor;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)lineHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)lineColor;
-(UIView *)line;
-(void)setLine:(UIView *)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(UIColor *)darkColor;
-(void)setDarkColor:(UIColor *)arg1 ;
-(void)initializeVUISeparatorView;
-(void)_updateLineColor;
@end


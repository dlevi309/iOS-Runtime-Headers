/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBannerContent, CALayer, UIView, UILabel, UIImageView;

@interface _UIBannerView : UIView {

	BOOL _highlighted;
	_UIBannerContent* _content;
	CALayer* _backgroundLayer;
	UIView* _highlightView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) _UIBannerContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) CALayer * backgroundLayer;               //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                  //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                     //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                        //@synthesize highlighted=_highlighted - In the implementation block
-(_UIBannerContent *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)highlightView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setContent:(_UIBannerContent *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
@end


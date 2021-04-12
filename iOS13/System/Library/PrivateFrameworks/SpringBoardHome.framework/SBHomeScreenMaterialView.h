/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView;

@interface SBHomeScreenMaterialView : UIView {

	UIView* _backgroundView;
	UIView* _whiteTintView;
	UIImageView* _xColorBurnView;
	UIImageView* _xPlusDView;
	UIView* _highlightView;
	CGPoint _wallpaperRelativeCenter;
	BOOL _highlighted;
	UIEdgeInsets _backgroundInsets;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) double brightness; 
@property (nonatomic,readonly) UIView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInsets;                      //@synthesize backgroundInsets=_backgroundInsets - In the implementation block
+(id)colorBurnContentImageForImage:(id)arg1 ;
-(double)brightness;
-(void)setBrightness:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
-(UIEdgeInsets)backgroundInsets;
-(id)initWithFrame:(CGRect)arg1 backgroundView:(id)arg2 foregroundImage:(id)arg3 ;
-(void)setBackgroundInsets:(UIEdgeInsets)arg1 ;
-(void)_addHighlightViewIfNecessary;
@end


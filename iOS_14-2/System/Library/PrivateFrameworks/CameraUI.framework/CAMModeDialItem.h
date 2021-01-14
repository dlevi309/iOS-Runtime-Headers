/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, CAShapeLayer;

@interface CAMModeDialItem : UIView {

	BOOL _selected;
	BOOL _shouldShadowTitleText;
	NSString* _title;
	UIFont* _font;
	CAShapeLayer* __scalableTextLayer;
	CGSize __textFrameSize;

}

@property (nonatomic,readonly) CFAttributedStringRef _attributedTitle; 
@property (nonatomic,readonly) CAShapeLayer * _scalableTextLayer;                          //@synthesize _scalableTextLayer=__scalableTextLayer - In the implementation block
@property (assign,setter=_setTextFrameSize:,nonatomic) CGSize _textFrameSize;              //@synthesize _textFrameSize=__textFrameSize - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) BOOL shouldShadowTitleText;                                   //@synthesize shouldShadowTitleText=_shouldShadowTitleText - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGColorRef)_textColor;
-(BOOL)shouldShadowTitleText;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)isSelected;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGPathRef)_pathForAttributedString:(CFAttributedStringRef)arg1 ;
-(void)setShouldShadowTitleText:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CAShapeLayer *)_scalableTextLayer;
-(CFAttributedStringRef)_attributedTitle;
-(id)initWithCoder:(id)arg1 ;
-(void)_setTextFrameSize:(CGSize)arg1 ;
-(void)_updateScalableTextPathFromAttributedTitle;
-(NSString *)title;
-(UIFont *)font;
-(CGSize)_textFrameSize;
-(void)_commonCAMModeDialItemInitialization;
@end

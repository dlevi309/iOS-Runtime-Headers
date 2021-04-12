/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIImage;

@interface AKMarkupButtonContainerView : UIView {

	BOOL _selected;
	UIButton* _button;
	UIImage* _templateImage;
	UIImage* _colorizedImage;

}

@property (nonatomic,retain) UIButton * button;                     //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIImage * templateImage;               //@synthesize templateImage=_templateImage - In the implementation block
@property (nonatomic,retain) UIImage * colorizedImage;              //@synthesize colorizedImage=_colorizedImage - In the implementation block
@property (assign,nonatomic) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(CGSize)_buttonSize;
-(UIImage *)templateImage;
-(void)setTemplateImage:(UIImage *)arg1 ;
-(UIImage *)colorizedImage;
-(void)setColorizedImage:(UIImage *)arg1 ;
@end


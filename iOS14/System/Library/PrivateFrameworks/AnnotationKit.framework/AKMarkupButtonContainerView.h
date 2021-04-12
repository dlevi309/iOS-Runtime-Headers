/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface AKMarkupButtonContainerView : UIView {

	BOOL _selected;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL selected;                  //@synthesize selected=_selected - In the implementation block
-(UIButton *)button;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_buttonSize;
-(void)updateForMiniBarState:(BOOL)arg1 ;
@end


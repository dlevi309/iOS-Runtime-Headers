/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class AVTUIEnvironment, UIButton;

@interface AVTCarouselPlusButtonView : UIView {

	BOOL _highlighted;
	BOOL _allowHighlight;
	AVTUIEnvironment* _environment;
	UIButton* _button;
	CGSize _maxItemSize;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) CGSize maxItemSize;                                 //@synthesize maxItemSize=_maxItemSize - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL allowHighlight;                                //@synthesize allowHighlight=_allowHighlight - In the implementation block
-(AVTUIEnvironment *)environment;
-(UIButton *)button;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 environment:(id)arg2 ;
-(void)setMaxItemSize:(CGSize)arg1 ;
-(void)setAllowHighlight:(BOOL)arg1 ;
-(BOOL)allowHighlight;
-(CGSize)maxItemSize;
@end


/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _PKToolIndicatorDelegate, PKInkToolButton;
@class PKInk, UIButton;

@interface _PKToolIndicator : UIView {

	BOOL _isEmbossed;
	BOOL _isUsedOnDarkBackground;
	id<_PKToolIndicatorDelegate> _delegate;
	unsigned long long _sizeState;
	unsigned long long _attributeSet;
	PKInk* _ink;
	UIButton*<PKInkToolButton> _toolButton;
	unsigned long long _animationState;

}

@property (nonatomic,retain) UIButton*<PKInkToolButton> toolButton;                     //@synthesize toolButton=_toolButton - In the implementation block
@property (assign,nonatomic) unsigned long long animationState;                         //@synthesize animationState=_animationState - In the implementation block
@property (assign,nonatomic,__weak) id<_PKToolIndicatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isEmbossed;                                           //@synthesize isEmbossed=_isEmbossed - In the implementation block
@property (assign,nonatomic) BOOL isUsedOnDarkBackground;                               //@synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground - In the implementation block
@property (assign,nonatomic) unsigned long long sizeState;                              //@synthesize sizeState=_sizeState - In the implementation block
@property (assign,nonatomic) unsigned long long attributeSet;                           //@synthesize attributeSet=_attributeSet - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                               //@synthesize ink=_ink - In the implementation block
+(void)_animationWithSetup:(/*^block*/id)arg1 animationBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
+(id)_defaultAnimator;
-(id<_PKToolIndicatorDelegate>)delegate;
-(void)setDelegate:(id<_PKToolIndicatorDelegate>)arg1 ;
-(unsigned long long)attributeSet;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)animationState;
-(void)setAnimationState:(unsigned long long)arg1 ;
-(void)setAttributeSet:(unsigned long long)arg1 ;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(BOOL)isUsedOnDarkBackground;
-(void)setIsUsedOnDarkBackground:(BOOL)arg1 ;
-(unsigned long long)sizeState;
-(void)setSizeState:(unsigned long long)arg1 ;
-(void)setIsEmbossed:(BOOL)arg1 ;
-(void)setInk:(id)arg1 animated:(BOOL)arg2 ;
-(id)_createToolButtonForInk:(id)arg1 ;
-(void)setToolButton:(UIButton*<PKInkToolButton>)arg1 ;
-(UIButton*<PKInkToolButton>)toolButton;
-(void)_setupToolButton:(id)arg1 forInk:(id)arg2 ;
-(CGRect)_frameForVisibleToolButton;
-(CGRect)_frameForHiddenToolButton;
-(void)setAnimationState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_switchToInkAnimation:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentInkAnimation:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissInkAnimation:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isEmbossed;
-(CGRect)_toolIndicatorCenteringRect;
-(id)_toolButtonView;
@end


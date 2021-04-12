/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, SBUIActionViewLabel, NSArray, MTVisualStylingProvider, SBUIAction;

@interface SBUIActionView : UIView {

	BOOL _interfaceOrientationIsPortrait;
	UIImageView* _imageView;
	UIView* _textContainer;
	SBUIActionViewLabel* _titleLabel;
	SBUIActionViewLabel* _subtitleLabel;
	UIView* _highlightView;
	NSArray* _imageViewLayoutConstraints;
	MTVisualStylingProvider* _visualStylingProviderStroke;
	MTVisualStylingProvider* _visualStylingProviderFill;
	BOOL _highlighted;
	SBUIAction* _action;
	long long _imagePosition;

}

@property (nonatomic,readonly) SBUIAction * action;                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long imagePosition;                            //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) double leadingContentMargin; 
@property (nonatomic,readonly) double trailingContentMargin; 
-(id)initWithCoder:(id)arg1 ;
-(SBUIAction *)action;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_setupSubviews;
-(long long)imagePosition;
-(void)setImagePosition:(long long)arg1 ;
-(double)leadingContentMargin;
-(void)setHighlighted:(BOOL)arg1 withFeedbackRetargetBehavior:(id)arg2 ;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(void)_updateImageViewLayoutConstraints;
-(double)trailingContentMargin;
@end


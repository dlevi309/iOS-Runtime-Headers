/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class LPMusicPlayButtonStyle, LPPlayButtonShapeView, UILongPressGestureRecognizer, UIView, UIImageView, NSString;

@interface LPPlayButtonControl : UIControl <UIGestureRecognizerDelegate> {

	LPMusicPlayButtonStyle* _style;
	LPPlayButtonShapeView* _borderView;
	LPPlayButtonShapeView* _innerProgressView;
	LPPlayButtonShapeView* _outerProgressView;
	LPPlayButtonShapeView* _highlightView;
	UILongPressGestureRecognizer* _highlightRecognizer;
	UIView* _backgroundView;
	UIImageView* _imageView;
	BOOL _indeterminate;
	float _progress;
	BOOL _showingProgress;

}

@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (getter=isIndeterminate,nonatomic,readonly) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
@property (assign,nonatomic) float progress;                                           //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnabled:(BOOL)arg1 ;
-(float)progress;
-(BOOL)isIndeterminate;
-(void)setProgress:(float)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(id)initWithStyle:(id)arg1 ;
-(void)_didScroll;
-(float)buttonCornerRadius;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(void)_createBorderView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(id)defaultBackgroundColor;
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(void)_createBackgroundView;
-(void)endIndeterminateAnimation;
-(void)showPlayIndicator:(BOOL)arg1 ;
-(void)setPlayButtonState:(unsigned long long)arg1 ;
-(void)beginIndeterminateAnimation;
-(void)_createImageView;
-(void)_createOuterProgressView;
-(void)_createInnerProgressView;
-(void)_createHighlightView;
-(void)setShowOuterBorder:(BOOL)arg1 ;
-(void)setShowBorder:(BOOL)arg1 ;
-(CGSize)buttonSize;
-(void)_hideTapHighlight;
-(void)_updateEnabledState;
-(void)_updateOuterProgressLayerStroke;
-(void)_showPlayIndicator:(BOOL)arg1 ;
-(void)_toggleToPlayState;
-(id)outerBorderColor;
-(id)_createProgressIndicatorViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(void)_updateInnerProgressLayerStroke;
-(id)playImage;
-(id)pauseImage;
-(void)installRecognizersOnView:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_createBorderView;
-(float)progress;
-(void)_createBackgroundView;
-(UIImageView *)imageView;
-(id)initWithStyle:(id)arg1 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(CGSize)buttonSize;
-(void)_didScroll;
-(void)buttonPressed:(id)arg1 ;
-(void)endIndeterminateAnimation;
-(void)showPlayIndicator:(BOOL)arg1 ;
-(void)setPlayButtonState:(unsigned long long)arg1 ;
-(void)beginIndeterminateAnimation;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_createImageView;
-(void)_createOuterProgressView;
-(void)_createInnerProgressView;
-(void)_createHighlightView;
-(void)setShowOuterBorder:(BOOL)arg1 ;
-(void)setShowBorder:(BOOL)arg1 ;
-(void)_hideTapHighlight;
-(void)_updateEnabledState;
-(void)_updateOuterProgressLayerStroke;
-(void)_showPlayIndicator:(BOOL)arg1 ;
-(void)_toggleToPlayState;
-(id)outerBorderColor;
-(id)_createProgressIndicatorViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(void)_updateInnerProgressLayerStroke;
-(void)installRecognizersOnView:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)defaultBackgroundColor;
-(id)playImage;
-(BOOL)isIndeterminate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(float)buttonCornerRadius;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)pauseImage;
@end


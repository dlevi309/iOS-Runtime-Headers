/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKPaddleOverlayViewDelegate;
@class UIView, UIImageView, UIVisualEffectView;

@interface CKPaddleOverlayView : UIView {

	id<CKPaddleOverlayViewDelegate> _delegate;
	UIView* _contentView;
	UIImageView* _shadowView;
	UIVisualEffectView* _visualEffectView;
	UIView* _darkOuterGlowView;
	UIView* _innerGlowView;
	UIView* _paddleView;
	UIView* _viewToShow;
	CGRect _overlayRect;
	CGRect _anchorRect;

}

@property (assign,nonatomic,__weak) id<CKPaddleOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowView;                                     //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                        //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIView * darkOuterGlowView;                                   //@synthesize darkOuterGlowView=_darkOuterGlowView - In the implementation block
@property (nonatomic,retain) UIView * innerGlowView;                                       //@synthesize innerGlowView=_innerGlowView - In the implementation block
@property (nonatomic,retain) UIView * paddleView;                                          //@synthesize paddleView=_paddleView - In the implementation block
@property (nonatomic,retain) UIView * viewToShow;                                          //@synthesize viewToShow=_viewToShow - In the implementation block
@property (assign,nonatomic) CGRect overlayRect;                                           //@synthesize overlayRect=_overlayRect - In the implementation block
@property (assign,nonatomic) CGRect anchorRect;                                            //@synthesize anchorRect=_anchorRect - In the implementation block
-(id<CKPaddleOverlayViewDelegate>)delegate;
-(UIVisualEffectView *)visualEffectView;
-(UIImageView *)shadowView;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)paddleView;
-(void)setDelegate:(id<CKPaddleOverlayViewDelegate>)arg1 ;
-(CGRect)overlayRect;
-(void)drawMacPaddle;
-(void)setAnchorRect:(CGRect)arg1 ;
-(void)updateShadowVisualStyling;
-(UIView *)darkOuterGlowView;
-(void)setDarkOuterGlowView:(UIView *)arg1 ;
-(UIView *)innerGlowView;
-(void)setInnerGlowView:(UIView *)arg1 ;
-(void)setViewToShow:(UIView *)arg1 ;
-(void)setOverlayRect:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(CGRect)anchorRect;
-(void)setShadowView:(UIImageView *)arg1 ;
-(UIView *)contentView;
-(id)initWithOverlayView:(id)arg1 atAnchorRect:(CGRect)arg2 inView:(id)arg3 delegate:(id)arg4 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)showPaddleAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPaddleView:(UIView *)arg1 ;
-(UIView *)viewToShow;
-(void)dismiss;
@end


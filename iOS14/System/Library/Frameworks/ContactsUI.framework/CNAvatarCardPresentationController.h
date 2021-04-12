/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@protocol CNCardTransitioning;
@class UIView, UITapGestureRecognizer, UIViewController, CNAvatarCardTransition, UIVisualEffectView;

@interface CNAvatarCardPresentationController : UIPresentationController {

	unsigned _alignmentEdge;
	UIView* _sourceView;
	double _alignmentY;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIViewController* _sourceViewController;
	CNAvatarCardTransition* _transition;
	id<CNCardTransitioning> _originalTransitioning;
	UIVisualEffectView* _backgroundView;
	UIVisualEffectView* _vibrancyView;
	UIView* _dimmingView;
	UIView* _cardView;
	UIView* _contentView;
	CGRect _sourceTargetRect;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * sourceViewController;                    //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,retain) CNAvatarCardTransition * transition;                        //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) id<CNCardTransitioning> originalTransitioning;              //@synthesize originalTransitioning=_originalTransitioning - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyView;                          //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                       //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                          //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGRect sourceTargetRect;                                    //@synthesize sourceTargetRect=_sourceTargetRect - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                        //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                          //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) double alignmentY;                                          //@synthesize alignmentY=_alignmentY - In the implementation block
@property (assign,nonatomic) unsigned alignmentEdge;                                     //@synthesize alignmentEdge=_alignmentEdge - In the implementation block
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(id)presentedView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)sourceView;
-(UIView *)cardView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(double)alignmentY;
-(void)setSourceRect:(CGRect)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(void)_layoutViews;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setContentView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setTransition:(CNAvatarCardTransition *)arg1 ;
-(void)setAlignmentY:(double)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(CGRect)sourceTargetRect;
-(void)setSourceTargetRect:(CGRect)arg1 ;
-(unsigned)alignmentEdge;
-(void)setAlignmentEdge:(unsigned)arg1 ;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(id<CNCardTransitioning>)originalTransitioning;
-(void)setOriginalTransitioning:(id<CNCardTransitioning>)arg1 ;
-(UIVisualEffectView *)vibrancyView;
-(void)setVibrancyView:(UIVisualEffectView *)arg1 ;
-(void)setCardView:(UIView *)arg1 ;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)presentationTransitionWillBegin;
-(UIViewController *)sourceViewController;
-(UIView *)dimmingView;
-(UIView *)contentView;
-(CNAvatarCardTransition *)transition;
@end


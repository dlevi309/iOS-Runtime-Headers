/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/_UIClickPresentationTransition.h>

@protocol CNAvatarCardControllerOrbTransitionDelegate;
@class UITargetedPreview, UIViewPropertyAnimator, CNContactOrbHeaderView, CNAvatarCardViewController, UIView, UIVisualEffectView, NSString;

@interface CNAvatarCardControllerOrbTransition : NSObject <_UIClickPresentationTransition> {

	BOOL _isDismissing;
	CNContactOrbHeaderView* _headerView;
	CNAvatarCardViewController* _cardViewController;
	UIView* _sourceView;
	UIView* _highlightedView;
	id<CNAvatarCardControllerOrbTransitionDelegate> _delegate;
	double _highlightViewToAlpha;
	UIVisualEffectView* _visualEffectView;
	CGRect _sourceRect;
	CGAffineTransform _endHeaderTransform;
	CGAffineTransform _endActionListTransform;

}

@property (assign,nonatomic) CGAffineTransform endHeaderTransform;                                         //@synthesize endHeaderTransform=_endHeaderTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform endActionListTransform;                                     //@synthesize endActionListTransform=_endActionListTransform - In the implementation block
@property (assign,nonatomic) double highlightViewToAlpha;                                                  //@synthesize highlightViewToAlpha=_highlightViewToAlpha - In the implementation block
@property (assign,nonatomic) BOOL isDismissing;                                                            //@synthesize isDismissing=_isDismissing - In the implementation block
@property (assign,nonatomic,__weak) CNContactOrbHeaderView * headerView;                                   //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) CNAvatarCardViewController * cardViewController;                       //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;                                      //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                   //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIView * highlightedView;                                              //@synthesize highlightedView=_highlightedView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                            //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarCardControllerOrbTransitionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCardViewController:(id)arg1 headerView:(id)arg2 sourceView:(id)arg3 highlightedView:(id)arg4 sourceRect:(CGRect)arg5 backgroundVisualEffectView:(id)arg6 isDismissing:(BOOL)arg7 ;
-(void)setHeaderView:(CNContactOrbHeaderView *)arg1 ;
-(void)setCardViewController:(CNAvatarCardViewController *)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id<CNAvatarCardControllerOrbTransitionDelegate>)delegate;
-(CNAvatarCardViewController *)cardViewController;
-(UIVisualEffectView *)visualEffectView;
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(UIView *)sourceView;
-(void)setDelegate:(id<CNAvatarCardControllerOrbTransitionDelegate>)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setIsDismissing:(BOOL)arg1 ;
-(void)setupTransitionFromView:(id)arg1 toView:(id)arg2 withContainerView:(id)arg3 ;
-(CGRect)_sourceRectInContainerView:(id)arg1 ;
-(CGAffineTransform)endHeaderTransform;
-(void)setEndHeaderTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)endActionListTransform;
-(void)setEndActionListTransform:(CGAffineTransform)arg1 ;
-(double)highlightViewToAlpha;
-(void)setHighlightViewToAlpha:(double)arg1 ;
-(CGRect)sourceRect;
-(CNContactOrbHeaderView *)headerView;
-(BOOL)isDismissing;
-(void)transitionDidEnd:(BOOL)arg1 ;
-(UIView *)highlightedView;
-(void)setHighlightedView:(UIView *)arg1 ;
@end


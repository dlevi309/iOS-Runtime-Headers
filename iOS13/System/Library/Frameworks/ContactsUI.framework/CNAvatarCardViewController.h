/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarCardActionsViewDelegate.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNAvatarCardViewControllerDelegate;
@class CNAvatarCardController, UIView, CNAvatarCardActionsView, CNContactActionsController, NSLayoutConstraint, NSArray, NSString, UIImage;

@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNContactActionsControllerDelegate, CNCardTransitioning, UIGestureRecognizerDelegate> {

	BOOL _visible;
	BOOL _hasHeader;
	BOOL _headerOnTop;
	CNAvatarCardController* _cardController;
	id<CNAvatarCardViewControllerDelegate> _delegate;
	UIView* _sourceView;
	CNAvatarCardActionsView* _legacyContactActionsView;
	CNContactActionsController* _actionsController;
	NSLayoutConstraint* _actionsViewControllerHeightConstraint;
	UIView* _effectView;
	NSArray* _verticalConstraints;
	double _borderMargin;
	UIView* _headerContainerView;
	UIView* _actionsListView;

}

@property (nonatomic,retain) CNAvatarCardActionsView * legacyContactActionsView;                           //@synthesize legacyContactActionsView=_legacyContactActionsView - In the implementation block
@property (nonatomic,retain) CNContactActionsController * actionsController;                               //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * actionsViewControllerHeightConstraint;                   //@synthesize actionsViewControllerHeightConstraint=_actionsViewControllerHeightConstraint - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                                          //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSArray * verticalConstraints;                                                //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (assign,nonatomic) double borderMargin;                                                          //@synthesize borderMargin=_borderMargin - In the implementation block
@property (nonatomic,retain) UIView * headerContainerView;                                                 //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (nonatomic,retain) UIView * actionsListView;                                                     //@synthesize actionsListView=_actionsListView - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) CNAvatarCardController * cardController;                               //@synthesize cardController=_cardController - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarCardViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasHeader;                                                               //@synthesize hasHeader=_hasHeader - In the implementation block
@property (assign,nonatomic) BOOL headerOnTop;                                                             //@synthesize headerOnTop=_headerOnTop - In the implementation block
@property (assign,nonatomic) BOOL actionsReversed; 
@property (assign,nonatomic) BOOL dismissesBeforePerforming; 
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (nonatomic,readonly) id<CNAvatarCardActionListController> actionListController; 
@property (nonatomic,readonly) id<CNAvatarCardActionListOrbSupport> actionListViewController; 
@property (nonatomic,retain) UIView * sourceView;                                                          //@synthesize sourceView=_sourceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
-(void)dealloc;
-(id<CNAvatarCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNAvatarCardViewControllerDelegate>)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIView *)sourceView;
-(void)setActionsReversed:(BOOL)arg1 ;
-(BOOL)actionsReversed;
-(UIView *)effectView;
-(void)setSourceView:(UIView *)arg1 ;
-(id)actionsView;
-(void)updateViewConstraints;
-(UIView *)transitioningView;
-(CGRect)transitioningFrame;
-(void)setHeaderContainerView:(UIView *)arg1 ;
-(UIView *)headerContainerView;
-(void)setEffectView:(UIView *)arg1 ;
-(NSArray *)verticalConstraints;
-(void)setVerticalConstraints:(NSArray *)arg1 ;
-(id)initWithContacts:(id)arg1 ;
-(void)refreshActions;
-(BOOL)bypassActionValidation;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(NSArray *)actionCategories;
-(CNAvatarCardController *)cardController;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(CNContactActionsController *)actionsController;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)cardActionsView:(id)arg1 didShowActions:(id)arg2 ;
-(void)dismissViewControllerForCardActionsView:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewControllerForCardActionsView:(id)arg1 ;
-(void)setHeaderOnTop:(BOOL)arg1 ;
-(void)setDismissesBeforePerforming:(BOOL)arg1 ;
-(BOOL)dismissesBeforePerforming;
-(CGRect)_photoFrameInView:(id)arg1 ;
-(id)viewForTouchContinuation;
-(id<CNAvatarCardActionListOrbSupport>)actionListViewController;
-(id<CNAvatarCardActionListController>)actionListController;
-(void)willAddActionsViewToHierarchy;
-(void)didAddActionsViewToHierarchy;
-(void)updateActionsControllerHeightConstraint;
-(void)updateActionsViewBackgroundColor;
-(void)_updatePreferredSize;
-(BOOL)hasHeader;
-(void)setHasHeader:(BOOL)arg1 ;
-(BOOL)headerOnTop;
-(CNAvatarCardActionsView *)legacyContactActionsView;
-(void)setLegacyContactActionsView:(CNAvatarCardActionsView *)arg1 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(NSLayoutConstraint *)actionsViewControllerHeightConstraint;
-(void)setActionsViewControllerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)borderMargin;
-(void)setBorderMargin:(double)arg1 ;
-(UIView *)actionsListView;
-(void)setActionsListView:(UIView *)arg1 ;
@end


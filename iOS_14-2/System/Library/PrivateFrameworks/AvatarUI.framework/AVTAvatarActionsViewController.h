/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTAvatarActionsControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/AVTToolBarDelegate.h>
#import <libobjc.A.dylib/AVTFaceTrackingManagerDelegate.h>
#import <libobjc.A.dylib/AVTUIControllerPresentationDelegate.h>

@protocol AVTAvatarActionsViewControllerDelegate, AVTAvatarActionsViewControllerLayout;
@class UIStackView, AVTImageTransitioningContainerView, AVTToolBar, AVTAvatarInlineActionsController, AVTViewSessionProvider, AVTViewSession, UIImageView, UITapGestureRecognizer, AVTUIEnvironment, AVTAvatarEditorViewController, NSString;

@interface AVTAvatarActionsViewController : UIViewController <AVTAvatarActionsControllerDelegate, UINavigationControllerDelegate, AVTToolBarDelegate, AVTFaceTrackingManagerDelegate, AVTUIControllerPresentationDelegate> {

	BOOL _isAnimating;
	BOOL _allowFacetracking;
	id<AVTAvatarActionsViewControllerDelegate> _delegate;
	id<AVTAvatarActionsViewControllerLayout> _currentLayout;
	UIStackView* _buttonsView;
	AVTImageTransitioningContainerView* _avatarContainer;
	AVTToolBar* _toolbar;
	AVTAvatarInlineActionsController* _actionsController;
	AVTViewSessionProvider* _sessionProvider;
	AVTViewSession* _avtViewSession;
	/*^block*/id _postSessionDidBecomeActiveHandler;
	UIImageView* _transitionImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	AVTUIEnvironment* _environment;
	AVTAvatarEditorViewController* _editorViewController;

}

@property (nonatomic,retain) UIStackView * buttonsView;                                                //@synthesize buttonsView=_buttonsView - In the implementation block
@property (nonatomic,retain) AVTImageTransitioningContainerView * avatarContainer;                     //@synthesize avatarContainer=_avatarContainer - In the implementation block
@property (nonatomic,retain) AVTToolBar * toolbar;                                                     //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) AVTAvatarInlineActionsController * actionsController;                     //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * sessionProvider;                               //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,retain) AVTViewSession * avtViewSession;                                          //@synthesize avtViewSession=_avtViewSession - In the implementation block
@property (nonatomic,retain) id<AVTAvatarActionsViewControllerLayout> currentLayout;                   //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,copy) id postSessionDidBecomeActiveHandler;                                       //@synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler - In the implementation block
@property (nonatomic,retain) UIImageView * transitionImageView;                                        //@synthesize transitionImageView=_transitionImageView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                            //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                                         //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) BOOL allowFacetracking;                                                   //@synthesize allowFacetracking=_allowFacetracking - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                         //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic,__weak) AVTAvatarEditorViewController * editorViewController;              //@synthesize editorViewController=_editorViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarActionsViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(AVTToolBar *)toolbar;
-(id<AVTAvatarActionsViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id<AVTAvatarActionsViewControllerLayout>)currentLayout;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)setCurrentLayout:(id<AVTAvatarActionsViewControllerLayout>)arg1 ;
-(AVTAvatarInlineActionsController *)actionsController;
-(void)setDelegate:(id<AVTAvatarActionsViewControllerDelegate>)arg1 ;
-(void)setToolbar:(AVTToolBar *)arg1 ;
-(id)initWithAVTViewSessionProvider:(id)arg1 actionsController:(id)arg2 environment:(id)arg3 ;
-(void)viewDidLoad;
-(BOOL)allowFacetracking;
-(void)setAvatarContainer:(AVTImageTransitioningContainerView *)arg1 ;
-(AVTViewSessionProvider *)sessionProvider;
-(AVTImageTransitioningContainerView *)avatarContainer;
-(void)layoutViewForActionsController;
-(void)rebuildLayout;
-(void)beginAVTViewSessionWithDidBeginBlock:(/*^block*/id)arg1 ;
-(id)postSessionDidBecomeActiveHandler;
-(void)setPostSessionDidBecomeActiveHandler:(id)arg1 ;
-(void)configureUserInfoLabel;
-(void)configureAVTViewSession:(id)arg1 withAvatarRecord:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createTransitionImageViewIfNeeded;
-(void)performTransitionAfterDuplicateToRecord:(id)arg1 previousRecordImage:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performTransitionAfterDeleteToRecord:(id)arg1 fromLeft:(BOOL)arg2 previousRecordImage:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(long long)interfaceOrientationForFaceTrackingManager:(id)arg1 ;
-(id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2 ;
-(void)setAllowFacetracking:(BOOL)arg1 ;
-(UIStackView *)buttonsView;
-(void)applyLayout:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(double)deleteMoveInDelay;
-(double)duplicateScaleDuration;
-(double)duplicateScaleDelay;
-(double)deleteMoveInDuration;
-(void)setButtonsView:(UIStackView *)arg1 ;
-(void)didTapAvatarView:(id)arg1 ;
-(void)performEdit;
-(void)actionsControllerDidUpdateActions:(id)arg1 ;
-(void)actionsController:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)actionsControllerDidFinish:(id)arg1 ;
-(void)actionsController:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)actionsController:(id)arg1 presentAlertController:(id)arg2 ;
-(void)actionsController:(id)arg1 didAddRecord:(id)arg2 ;
-(void)presentEditorViewController:(id)arg1 forActionsController:(id)arg2 isCreate:(BOOL)arg3 ;
-(void)actionsController:(id)arg1 didEditRecord:(id)arg2 ;
-(void)actionsController:(id)arg1 didCancelEditingRecord:(id)arg2 ;
-(void)setEditorViewController:(AVTAvatarEditorViewController *)arg1 ;
-(void)dismissEditorViewController:(id)arg1 forActionsController:(id)arg2 wasCreate:(BOOL)arg3 didEdit:(BOOL)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)setActionsController:(AVTAvatarInlineActionsController *)arg1 ;
-(AVTAvatarEditorViewController *)editorViewController;
-(void)didTapDone:(id)arg1 ;
-(AVTUIEnvironment *)environment;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)additionalSafeAreaInsets;
-(void)loadView;
-(void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)configureNavigationItems;
-(void)toolbar:(id)arg1 didSelectButton:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)controllerPresentationWillObstructView:(id)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(AVTViewSession *)avtViewSession;
-(BOOL)isAnimating;
-(void)setAvtViewSession:(AVTViewSession *)arg1 ;
-(void)beginUsingAVTViewFromSession:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIImageView *)transitionImageView;
-(void)setTransitionImageView:(UIImageView *)arg1 ;
@end


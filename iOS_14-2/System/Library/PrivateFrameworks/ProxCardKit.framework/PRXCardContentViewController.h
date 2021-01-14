/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PRXPullDismissalProvider.h>
#import <libobjc.A.dylib/PRXCardContentProviding.h>

@class PRXTransitioningController, PRXCardContentView, PRXCardContentWrapperView, PRXPullDismissalInteractionDriver, NSString, PRXAction, NSArray;

@interface PRXCardContentViewController : UIViewController <UIScrollViewDelegate, PRXPullDismissalProvider, PRXCardContentProviding> {

	PRXTransitioningController* _transitionController;
	BOOL _transitioningSize;
	PRXCardContentView* _contentView;
	PRXCardContentWrapperView* _wrapperView;
	BOOL _shouldAutoScrollToBottom;
	PRXPullDismissalInteractionDriver* _pullDismissalInteractionDriver;
	NSString* _subtitle;
	NSString* _bottomTrayTitle;
	unsigned long long _dismissalType;
	PRXAction* _dismissButtonAction;
	NSArray* _actions;

}

@property (nonatomic,readonly) PRXCardContentView * contentView; 
@property (nonatomic,copy) NSString * subtitle;                                                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * bottomTrayTitle;                                                          //@synthesize bottomTrayTitle=_bottomTrayTitle - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalType;                                                  //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,retain) PRXAction * dismissButtonAction;                                                   //@synthesize dismissButtonAction=_dismissButtonAction - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                                               //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PRXPullDismissalInteractionDriver * pullDismissalInteractionDriver;              //@synthesize pullDismissalInteractionDriver=_pullDismissalInteractionDriver - In the implementation block
@property (nonatomic,readonly) long long cardStyle; 
@property (nonatomic,readonly) BOOL allowsPullToDismiss; 
+(Class)contentViewClass;
-(void)openURL:(id)arg1 ;
-(void)_handleSubtitleTouchForOpenURL:(id)arg1 ;
-(void)addLearnMoreButtonWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 ;
-(void)addLearnMoreButtonWithURL:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(NSArray *)actions;
-(NSString *)subtitle;
-(void)setTitle:(id)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(id)addAction:(id)arg1 ;
-(void)_updateActionButtons;
-(void)scrollToBottom;
-(void)viewDidLoad;
-(void)_updateSubtitleLabel;
-(long long)cardStyle;
-(void)_updateTitleLabel;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)loadView;
-(PRXCardContentView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDismissalType:(unsigned long long)arg1 ;
-(void)showActivityIndicatorWithStatus:(id)arg1 ;
-(void)hideActivityIndicator;
-(void)setDismissButtonAction:(PRXAction *)arg1 ;
-(unsigned long long)dismissalType;
-(void)updatePreferredContentSizeForCardWidth:(double)arg1 ;
-(BOOL)allowsPullToDismiss;
-(PRXPullDismissalInteractionDriver *)pullDismissalInteractionDriver;
-(void)setBottomTrayTitle:(NSString *)arg1 ;
-(NSString *)bottomTrayTitle;
-(id)dismissalConfirmationActionWithTitle:(id)arg1 message:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(PRXAction *)dismissButtonAction;
-(void)_prxCommonInit;
-(void)_updateDismisalControls;
@end


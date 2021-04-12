/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKComponentProvider.h>
#import <libobjc.A.dylib/CKComponentHostingViewDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol WFParameterInputViewControllerDelegate;
@class WFModuleModel, WFAction, NSArray, UIScrollView, CKComponentHostingView, WFComponentNavigationContextImpl, UIResponder, UIView, NSLayoutConstraint, NSString;

@interface WFParameterInputViewController : UIViewController <CKComponentProvider, CKComponentHostingViewDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	id<WFParameterInputViewControllerDelegate> _delegate;
	WFModuleModel* _moduleModel;
	WFAction* _fakeAction;
	NSArray* _processingParameters;
	UIScrollView* _scrollView;
	CKComponentHostingView* _moduleView;
	WFComponentNavigationContextImpl* _navigationContext;
	UIResponder* _wf_firstResponder;
	UIView* _firstResponderHintView;
	NSLayoutConstraint* _hintBottomConstraint;

}

@property (nonatomic,readonly) WFModuleModel * moduleModel;                                           //@synthesize moduleModel=_moduleModel - In the implementation block
@property (nonatomic,readonly) WFAction * fakeAction;                                                 //@synthesize fakeAction=_fakeAction - In the implementation block
@property (nonatomic,readonly) NSArray * processingParameters;                                        //@synthesize processingParameters=_processingParameters - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) CKComponentHostingView * moduleView;                              //@synthesize moduleView=_moduleView - In the implementation block
@property (nonatomic,retain) WFComponentNavigationContextImpl * navigationContext;                    //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * wf_firstResponder;                                  //@synthesize wf_firstResponder=_wf_firstResponder - In the implementation block
@property (assign,nonatomic,__weak) UIView * firstResponderHintView;                                  //@synthesize firstResponderHintView=_firstResponderHintView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * hintBottomConstraint;                               //@synthesize hintBottomConstraint=_hintBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterInputViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
-(id<WFParameterInputViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFParameterInputViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)keyCommands;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(WFComponentNavigationContextImpl *)navigationContext;
-(NSArray *)processingParameters;
-(double)moduleWidthForViewSize:(CGSize)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithAction:(id)arg1 parameters:(id)arg2 initialStates:(id)arg3 forRunning:(BOOL)arg4 ;
-(void)updateScrollViewWithModuleSize:(CGSize)arg1 ;
-(void)layoutHostingViewAnimated:(BOOL)arg1 ;
-(void)moduleComponentDidCancel;
-(void)moduleComponentDidFinish;
-(void)responderDidBeginEditing:(id)arg1 ;
-(void)responderDidEndEditing:(id)arg1 ;
-(void)positionFirstResponderHintViewAnimated:(BOOL)arg1 ;
-(WFModuleModel *)moduleModel;
-(WFAction *)fakeAction;
-(CKComponentHostingView *)moduleView;
-(void)setModuleView:(CKComponentHostingView *)arg1 ;
-(void)setNavigationContext:(WFComponentNavigationContextImpl *)arg1 ;
-(UIResponder *)wf_firstResponder;
-(void)setWf_firstResponder:(UIResponder *)arg1 ;
-(UIView *)firstResponderHintView;
-(void)setFirstResponderHintView:(UIView *)arg1 ;
-(NSLayoutConstraint *)hintBottomConstraint;
-(void)setHintBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end


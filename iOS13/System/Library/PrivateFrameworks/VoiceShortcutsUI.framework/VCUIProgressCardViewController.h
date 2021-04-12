/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <CardKit/CRKCardViewController.h>
#import <libobjc.A.dylib/SUICProgressStateMachineObserving.h>
#import <libobjc.A.dylib/SUICProgressIndicatorViewControllerDataSource.h>
#import <libobjc.A.dylib/VCUIActionStatusViewDelegate.h>

@class NSProgress, NSLayoutConstraint, VCUIActionStatusView, SUICProgressIndicatorViewController, UIView, SUICProgressStateMachine, NSString;

@interface VCUIProgressCardViewController : CRKCardViewController <SUICProgressStateMachineObserving, SUICProgressIndicatorViewControllerDataSource, VCUIActionStatusViewDelegate> {

	NSProgress* _progress;
	BOOL _animatesStateTransitions;
	NSLayoutConstraint* _statusViewSuccessHeightConstraint;
	NSLayoutConstraint* _statusViewFailureHeightConstraint;
	VCUIActionStatusView* _statusView;
	SUICProgressIndicatorViewController* _progressIndicatorViewController;
	UIView* _hairlineView;
	SUICProgressStateMachine* _progressStateMachine;

}

@property (setter=_setStatusView:,getter=_statusView,nonatomic,retain) VCUIActionStatusView * statusView;                                                                                            //@synthesize statusView=_statusView - In the implementation block
@property (setter=_setProgressIndicatorViewController:,getter=_progressIndicatorViewController,nonatomic,retain) SUICProgressIndicatorViewController * progressIndicatorViewController;              //@synthesize progressIndicatorViewController=_progressIndicatorViewController - In the implementation block
@property (setter=_setHairlineView:,getter=_hairlineView,nonatomic,retain) UIView * hairlineView;                                                                                                    //@synthesize hairlineView=_hairlineView - In the implementation block
@property (setter=_setProgressStateMachine:,getter=_progressStateMachine,nonatomic,retain) SUICProgressStateMachine * progressStateMachine;                                                          //@synthesize progressStateMachine=_progressStateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(NSProgress *)progress;
-(CGSize)preferredContentSize;
-(void)viewDidLayoutSubviews;
-(id)_statusView;
-(id)_hairlineView;
-(void)_setStatusView:(id)arg1 ;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)handleCardCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(BOOL)arg3 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
-(BOOL)shouldAnimateTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 forProgressIndicatorViewController:(id)arg3 ;
-(void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4 ;
-(void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2 ;
-(id)progressViewController;
-(void)_setUpViews;
-(id)_progressIndicatorViewController;
-(id)_progressStateMachine;
-(void)actionStatusView:(id)arg1 didAddViewFromProgressViewController:(id)arg2 ;
-(void)_setUpHelpers;
-(void)_updateDelegateOnBoundsDidChange;
-(void)_setProgressIndicatorViewController:(id)arg1 ;
-(void)_setHairlineView:(id)arg1 ;
-(void)_setProgressStateMachine:(id)arg1 ;
@end


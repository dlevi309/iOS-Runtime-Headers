/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUICardKitProviderSupport.framework/VoiceShortcutsUICardKitProviderSupport
*/

#import <VoiceShortcutsUICardKitProviderSupport/VoiceShortcutsUICardKitProviderSupport-Structs.h>
#import <CardKit/CRKCardViewController.h>
#import <libobjc.A.dylib/SUICProgressStateMachineObserving.h>
#import <libobjc.A.dylib/SUICProgressIndicatorViewControllerDataSource.h>
#import <libobjc.A.dylib/VSUIActionStatusViewDelegate.h>

@class NSProgress, NSLayoutConstraint, VSUIActionStatusView, UIActivityIndicatorView, SUICProgressIndicatorViewController, UIView, SUICProgressStateMachine, NSString;

@interface VSUIProgressCardViewController : CRKCardViewController <SUICProgressStateMachineObserving, SUICProgressIndicatorViewControllerDataSource, VSUIActionStatusViewDelegate> {

	NSProgress* _progress;
	BOOL _animatesStateTransitions;
	NSLayoutConstraint* _statusViewSuccessHeightConstraint;
	NSLayoutConstraint* _statusViewFailureHeightConstraint;
	VSUIActionStatusView* _statusView;
	UIActivityIndicatorView* _loadingIndicatorView;
	SUICProgressIndicatorViewController* _progressIndicatorViewController;
	UIView* _hairlineView;
	SUICProgressStateMachine* _progressStateMachine;

}

@property (setter=_setStatusView:,getter=_statusView,nonatomic,retain) VSUIActionStatusView * statusView;                                                                                            //@synthesize statusView=_statusView - In the implementation block
@property (setter=_setLoadingIndicatorView:,getter=_loadingIndicatorView,nonatomic,retain) UIActivityIndicatorView * loadingIndicatorView;                                                           //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (setter=_setProgressIndicatorViewController:,getter=_progressIndicatorViewController,nonatomic,retain) SUICProgressIndicatorViewController * progressIndicatorViewController;              //@synthesize progressIndicatorViewController=_progressIndicatorViewController - In the implementation block
@property (setter=_setHairlineView:,getter=_hairlineView,nonatomic,retain) UIView * hairlineView;                                                                                                    //@synthesize hairlineView=_hairlineView - In the implementation block
@property (setter=_setProgressStateMachine:,getter=_progressStateMachine,nonatomic,retain) SUICProgressStateMachine * progressStateMachine;                                                          //@synthesize progressStateMachine=_progressStateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(id)_statusView;
-(NSProgress *)progress;
-(id)_hairlineView;
-(double)contentHeightForWidth:(double)arg1 ;
-(CGSize)preferredContentSize;
-(id)_loadingIndicatorView;
-(void)_setStatusView:(id)arg1 ;
-(void)_setUpViews;
-(void)handleCardCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(BOOL)arg3 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
-(BOOL)shouldAnimateTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 forProgressIndicatorViewController:(id)arg3 ;
-(void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4 ;
-(void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2 ;
-(id)progressViewController;
-(id)_progressStateMachine;
-(id)_progressIndicatorViewController;
-(void)_updateDelegateOnBoundsDidChange;
-(void)_setUpHelpers;
-(void)actionStatusView:(id)arg1 didAddViewFromProgressViewController:(id)arg2 ;
-(void)_setLoadingIndicatorView:(id)arg1 ;
-(void)_setProgressIndicatorViewController:(id)arg1 ;
-(void)_setHairlineView:(id)arg1 ;
-(void)_setProgressStateMachine:(id)arg1 ;
@end


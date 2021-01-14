/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBModalAlertPresentationCoordinatorDelegate, BSInvalidatable;
@class UIApplicationSceneDeactivationManager, NSMutableSet, SBModalAlertPresenter, UIApplicationSceneDeactivationAssertion, NSString;

@interface SBModalAlertPresentationCoordinator : NSObject <BSDescriptionProviding> {

	id<SBModalAlertPresentationCoordinatorDelegate> _delegate;
	UIApplicationSceneDeactivationManager* _sceneDeactivationManager;
	NSMutableSet* _activeModalAlertPresenters;
	SBModalAlertPresenter* _springBoardModalAlertPresenter;
	UIApplicationSceneDeactivationAssertion* _systemModalAlertsActiveSceneDeactivationAssertion;
	NSMutableSet* _hideApplicationModalAlertAssertions;
	id<BSInvalidatable> _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;
	id<BSInvalidatable> _sysdiagnoseStateHandler;

}

@property (setter=_setSpringBoardPresenter:,getter=_getSpringBoardPresenter,nonatomic,retain) SBModalAlertPresenter * springBoardPresenter;              //@synthesize springBoardModalAlertPresenter=_springBoardModalAlertPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<SBModalAlertPresentationCoordinatorDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingModalAlert,nonatomic,readonly) BOOL showingModalAlert; 
@property (getter=isShowingSystemModalAlert,nonatomic,readonly) BOOL showingSystemModalAlert; 
@property (getter=canShowApplicationModalAlerts,nonatomic,readonly) BOOL canShowApplicationModalAlerts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id<SBModalAlertPresentationCoordinatorDelegate>)delegate;
-(id)_fencingTransitionContext:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isShowingSystemModalAlert;
-(BOOL)canShowApplicationModalAlerts;
-(void)_noteSpringBoardModalAlertStateChanged:(BOOL)arg1 ;
-(void)setDelegate:(id<SBModalAlertPresentationCoordinatorDelegate>)arg1 ;
-(id)hideApplicationModalAlertsForReason:(id)arg1 ;
-(NSString *)description;
-(void)_addModalAlertPresenterIfNecessary:(id)arg1 ;
-(BOOL)isShowingModalAlert;
-(void)_adjustApplicationSceneSettingsForModalAlertsAndFence:(BOOL)arg1 ;
-(id)_getSpringBoardPresenter;
-(id)initWithSceneDeactivationManager:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_removeModalAlertPresenter:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_setSpringBoardPresenter:(id)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleDetailClickPresentationInteractionManagerDelegate.h>

@class WFControlCenterStateMonitor, CCUIContentModuleDetailClickPresentationInteractionManager, NSString;

@interface CCUIConnectivityWifiViewController : CCUIConnectivityButtonViewController <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {

	WFControlCenterStateMonitor* _stateMonitor;
	CCUIContentModuleDetailClickPresentationInteractionManager* _clickPresentationInteractionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)displayName;
-(long long)_currentState;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateState;
-(void)buttonTapped:(id)arg1 ;
-(void)_toggleState;
-(void)_updateWithState:(long long)arg1 ;
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1 ;
-(BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(long long)_stateWithOverridesApplied:(long long)arg1 ;
-(id)_debugDescriptionForState:(long long)arg1 ;
-(void)_presentBehaviorPromptWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_inoperativeForState:(long long)arg1 ;
-(BOOL)_enabledForState:(long long)arg1 ;
-(id)_glyphStateForState:(long long)arg1 ;
-(id)_subtitleTextWithState:(long long)arg1 ;
-(BOOL)_useAlternateSelectedBackgroundForState:(long long)arg1 ;
-(id)_menuGlyphStateForState:(long long)arg1 ;
@end


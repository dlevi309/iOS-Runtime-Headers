/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_toggleState;
-(long long)_currentState;
-(BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(id)_menuGlyphStateForState:(long long)arg1 ;
-(id)_subtitleTextWithState:(long long)arg1 ;
-(void)_presentBehaviorPromptWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)_debugDescriptionForState:(long long)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_glyphStateForState:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1 ;
-(void)_updateState;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(BOOL)_canShowWhileLocked;
-(long long)_stateWithOverridesApplied:(long long)arg1 ;
-(BOOL)_useAlternateSelectedBackgroundForState:(long long)arg1 ;
-(BOOL)_enabledForState:(long long)arg1 ;
-(id)displayName;
-(void)_updateWithState:(long long)arg1 ;
-(BOOL)_inoperativeForState:(long long)arg1 ;
@end


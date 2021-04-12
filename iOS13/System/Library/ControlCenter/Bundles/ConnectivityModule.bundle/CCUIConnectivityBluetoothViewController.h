/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleDetailClickPresentationInteractionManagerDelegate.h>

@class BluetoothManager, NSArray, CCUIContentModuleDetailTransitioningDelegate, CCUIContentModuleDetailClickPresentationInteractionManager, NSString;

@interface CCUIConnectivityBluetoothViewController : CCUIConnectivityButtonViewController <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {

	BluetoothManager* _bluetoothManager;
	NSArray* _connectedDeviceNames;
	CCUIContentModuleDetailTransitioningDelegate* _detailTransitioningDelegate;
	CCUIContentModuleDetailClickPresentationInteractionManager* _clickPresentationInteractionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)displayName;
-(int)_currentState;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateState;
-(void)buttonTapped:(id)arg1 ;
-(void)_toggleState;
-(void)_updateWithState:(int)arg1 ;
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1 ;
-(BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)arg1 ;
-(void)contentModuleDetailClickPresentationInteractionController:(id)arg1 requestsAuthenticationForPresentationWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_bluetoothStateDidChange:(id)arg1 ;
-(void)_bluetoothConnectionStatusDidChange:(id)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)_updateConnectedDeviceNamesThatMayBeBlacklisted;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(int)_stateWithOverridesApplied:(int)arg1 ;
-(id)_debugDescriptionForState:(int)arg1 ;
-(void)_presentBehaviorPromptWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_inoperativeForState:(int)arg1 ;
-(BOOL)_enabledForState:(int)arg1 ;
-(id)_glyphStateForState:(int)arg1 ;
-(id)_subtitleTextWithState:(int)arg1 ;
-(BOOL)_useAlternateSelectedBackgroundForState:(int)arg1 ;
-(id)_menuGlyphStateForState:(int)arg1 ;
-(id)_connectedDeviceNamesThatMayBeBlacklisted;
@end


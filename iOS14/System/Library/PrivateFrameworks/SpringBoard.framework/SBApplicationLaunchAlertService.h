/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSSet, SBApplicationController, SBAlertItemsController, NSMutableSet, NSMutableDictionary, NSString;

@interface SBApplicationLaunchAlertService : NSObject <BSDescriptionProviding, SBSceneManagerObserver, FBSceneObserver, BSInvalidatable> {

	NSSet* _launchAlertEvaluators;
	SBApplicationController* _applicationController;
	SBAlertItemsController* _alertItemsController;
	NSSet* _sceneManagers;
	NSMutableSet* _foregroundingScenes;
	NSMutableDictionary* _mapBundleIDToLaunchAlertInfo;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_sceneDidResignForeground:(id)arg1 ;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(NSString *)description;
-(void)_sceneDidBecomeForeground:(id)arg1 ;
-(void)_reallyShowLaunchAlertOfType:(unsigned long long)arg1 withLaunchAlertInfo:(id)arg2 application:(id)arg3 ;
-(void)showLaunchAlertOfType:(unsigned long long)arg1 forApplication:(id)arg2 ;
-(void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)arg1 ;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(void)_sceneWillBecomeForeground:(id)arg1 ;
-(void)dealloc;
-(id)initObservingSceneManagers:(id)arg1 launchAlertEvaluators:(id)arg2 applicationController:(id)arg3 alertItemsController:(id)arg4 ;
@end


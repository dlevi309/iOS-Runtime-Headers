/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBMainDisplaySceneManagerObserver.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>

@protocol OS_dispatch_queue, BSInvalidatable;
@class PSPointerClientController, UIApplicationSceneSettingsDiffInspector, NSObject, NSMutableDictionary, NSString;

@interface SBLockedPointerManager : NSObject <SBMainDisplaySceneManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver> {

	PSPointerClientController* _pointerClientController;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInspector;
	NSObject*<OS_dispatch_queue> _stateSerialQueue;
	NSMutableDictionary* _queue_preferredLockStatusBySceneIdentifier;
	NSString* _queue_sceneIdentifierThatHasLockedPointer;
	id<BSInvalidatable> _queue_backboardLockedPointerAssertion;
	id<BSInvalidatable> _queue_pointerHiddenAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(id)initWithSceneManager:(id)arg1 ;
-(void)_setPointerLockStatus:(long long)arg1 forSceneWithIdentifier:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(id)_possibleSceneHandleForLockingPointerFromLayoutState:(id)arg1 ;
-(void)_queue_lockPointerForSceneIdentifier:(id)arg1 ;
-(BOOL)_queue_prefersLockForSceneIdentifier:(id)arg1 ;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_updateLockForLayoutState:(id)arg1 ;
-(void)clientWithSceneIdentifier:(id)arg1 prefersPointerLockStatus:(long long)arg2 ;
-(BOOL)_shouldAllowPointerLockedForScene:(id)arg1 ;
-(void)_queue_unlockPointer;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)_queue_updateLockForLayoutState:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>

@class SBAppClipOverlayViewController, UIApplicationSceneSettingsDiffInspector, NSString;

@interface SBDeviceApplicationAppClipOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver> {

	SBAppClipOverlayViewController* _appClipViewController;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDiffInspector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(BOOL)wantsResignActiveAssertion;
-(void)_deactivateIfPossible;
-(void)_activateIfPossible;
-(void)_updateOverlaySceneActivationState;
-(id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(BOOL)arg2 ;
-(id)_realOverlayViewController;
-(void)dealloc;
@end


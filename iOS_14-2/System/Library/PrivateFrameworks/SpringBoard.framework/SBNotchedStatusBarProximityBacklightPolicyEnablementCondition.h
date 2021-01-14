/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBAppStatusBarAssertionManagerObserver.h>
#import <libobjc.A.dylib/SBMainDisplaySceneManagerObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <UIKit/UIStatusBarServerClient.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate;
@class SpringBoard, UIStatusBarServer, SBAppStatusBarAssertionManager, SBMainDisplaySceneManager, UIApplicationSceneSettingsDiffInspector, NSString;

@interface SBNotchedStatusBarProximityBacklightPolicyEnablementCondition : NSObject <SBAppStatusBarAssertionManagerObserver, SBMainDisplaySceneManagerObserver, SBDeviceApplicationSceneHandleObserver, UIStatusBarServerClient, SBUIActiveOrientationObserver, BSInvalidatable> {

	SpringBoard* _orientationProvider;
	UIStatusBarServer* _statusBarConnection;
	SBAppStatusBarAssertionManager* _statusBarAssertionManager;
	SBMainDisplaySceneManager* _mainDisplaySceneManager;
	UIApplicationSceneSettingsDiffInspector* _applicationSceneSettingsDiffInspector;
	int _currentStyleOverrides;
	id<SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> _delegate;
	double _statusBarHeight;
	BOOL _isEnabled;
	BOOL _invalidated;

}

@property (assign,nonatomic,__weak) id<SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                                        //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) double enabledStatusBarHeight;                                                                        //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(id)init;
-(id<SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate>)delegate;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)_evaluateEnablement;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)setDelegate:(id<SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate>)arg1 ;
-(void)invalidate;
-(BOOL)isEnabled;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_SB34*)arg2 withActions:(int)arg3 ;
-(void)dealloc;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(double)enabledStatusBarHeight;
-(id)initWithMainDisplaySceneManager:(id)arg1 statusBarAssertionManager:(id)arg2 statusBarServer:(id)arg3 orientationProvider:(id)arg4 ;
-(void)_setEnabled:(BOOL)arg1 statusBarHeight:(double)arg2 ;
@end


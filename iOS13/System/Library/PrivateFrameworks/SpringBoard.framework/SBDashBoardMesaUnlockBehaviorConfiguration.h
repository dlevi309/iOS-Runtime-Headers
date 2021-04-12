/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBLiftToWakeObserver.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehaviorConfiguration.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;
@class SBLiftToWakeController, CSLockScreenSettings, SBUIBiometricResource, NSString;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration> {

	id<SBBiometricUnlockBehaviorConfigurationDelegate> _delegate;
	SBLiftToWakeController* _liftToWakeController;
	CSLockScreenSettings* _prototypeSettings;
	SBUIBiometricResource* _biometricResource;
	Class _currentTriggerClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBBiometricUnlockBehaviorConfigurationDelegate>)delegate;
-(void)setDelegate:(id<SBBiometricUnlockBehaviorConfigurationDelegate>)arg1 ;
-(void)_accessibilityOptionsChanged:(id)arg1 ;
-(void)_evaluateTriggerClass;
-(id)_unlockTriggerWithClass:(Class)arg1 ;
-(Class)_expectedTriggerClassIncludingAccessibility:(BOOL)arg1 ;
-(BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
-(void)liftToWakeControllerEnablementDidChange:(id)arg1 ;
-(id)newBehaviorForCurrentConfiguration;
-(id)initWithLiftToWakeController:(id)arg1 biometricResource:(id)arg2 lockScreenPrototypeSettings:(id)arg3 ;
-(Class)_currentUnlockTriggerClass;
@end


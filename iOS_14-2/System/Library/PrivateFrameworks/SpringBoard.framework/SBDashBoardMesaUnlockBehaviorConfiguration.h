/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SBBiometricUnlockBehaviorConfigurationDelegate>)delegate;
-(void)setDelegate:(id<SBBiometricUnlockBehaviorConfigurationDelegate>)arg1 ;
-(void)dealloc;
-(void)_setLiftToWakeController:(id)arg1 ;
-(void)_accessibilityOptionsChanged:(id)arg1 ;
-(void)_evaluateTriggerClass;
-(id)_unlockTriggerWithClass:(Class)arg1 ;
-(Class)_expectedTriggerClassIncludingAccessibility:(BOOL)arg1 ;
-(BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
-(void)liftToWakeControllerEnablementDidChange:(id)arg1 ;
-(id)newBehaviorForCurrentConfiguration;
-(id)initWithLiftToWakeController:(id)arg1 biometricResource:(id)arg2 lockScreenPrototypeSettings:(id)arg3 ;
-(Class)_currentUnlockTriggerClass;
-(id)_liftToWakeController;
@end


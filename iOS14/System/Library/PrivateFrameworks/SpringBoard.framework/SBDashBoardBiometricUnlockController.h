/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBBiometricUnlockBehaviorDelegate.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehaviorConfigurationDelegate.h>
#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehavior.h>

@protocol SBBiometricUnlockBehaviorConfiguration, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate;
@class CSCoverSheetViewController, NSString;

@interface SBDashBoardBiometricUnlockController : NSObject <SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehaviorConfigurationDelegate, CSExternalEventHandling, SBBiometricUnlockBehavior> {

	CSCoverSheetViewController* _coverSheetViewController;
	id<SBBiometricUnlockBehaviorConfiguration> _biometricUnlockBehaviorConfiguration;
	id<SBBiometricUnlockBehavior> _biometricUnlockBehavior;
	id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;              //@synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate - In the implementation block
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)conformsToCSEventHandling;
-(void)fillRestToOpenWithDuration:(double)arg1 ;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(id)succinctDescription;
-(void)startRestToOpenCoachingWithCompletion:(/*^block*/id)arg1 ;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(void)resetRestToOpen;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3 ;
-(BOOL)isLockScreenShowingDefaultContent;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2 ;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)isRestToOpenAvailable;
-(BOOL)handleEvent:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(id)_mesaUnlockBehavior;
-(long long)participantState;
-(void)biometricUnlockBehaviorConfigurationDidChange:(id)arg1 ;
-(void)noteLockButtonDown;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(int)lockScreenWakeSource;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end


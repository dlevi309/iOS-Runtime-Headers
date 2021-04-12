/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(BOOL)isLockScreenShowingDefaultContent;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)biometricUnlockBehaviorConfigurationDidChange:(id)arg1 ;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2 ;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3 ;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(id)_mesaUnlockBehavior;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
@end


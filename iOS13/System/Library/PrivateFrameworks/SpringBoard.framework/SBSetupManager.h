/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBMainDisplayWorkspaceAppInteractionEventSourceObserving.h>

@protocol BSInvalidatable;
@class SBFloatingDockBehaviorAssertion, NSString;

@interface SBSetupManager : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving> {

	unsigned long long _setupRequiredReason;
	BOOL _inSetupModeReadyToExit;
	BOOL _setupWantedForDeviceMigration;
	SBFloatingDockBehaviorAssertion* _inSetupFloatingDockBehaviorAssertion;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;

}

@property (assign,getter=isInSetupModeReadyToExit,nonatomic) BOOL inSetupModeReadyToExit;                                    //@synthesize inSetupModeReadyToExit=_inSetupModeReadyToExit - In the implementation block
@property (getter=isInSetupMode,nonatomic,readonly) BOOL inSetupMode; 
@property (assign,getter=isDeferringDeviceOrientationUpdates,nonatomic) BOOL deferringDeviceOrientationUpdates; 
@property (getter=isInSetupModeForDeviceMigration,nonatomic,readonly) BOOL inSetupModeForDeviceMigration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isInSetupMode;
-(BOOL)isInSetupModeReadyToExit;
-(BOOL)updateInSetupMode;
-(BOOL)isInSetupModeForDeviceMigration;
-(void)setDeferringDeviceOrientationUpdates:(BOOL)arg1 ;
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5 ;
-(BOOL)_isInSetupMode;
-(BOOL)_setSetupRequiredReason:(unsigned long long)arg1 ;
-(void)_clearFloatingDockAssertion;
-(void)_toggleSetupForMigrationNeeded:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_setupProcessChangedNotificationReceived:(id)arg1 ;
-(BOOL)setupHasFinishedRestoringFromBackup;
-(void)postLaunchCompleteNotificationForSetup;
-(BOOL)isDeferringDeviceOrientationUpdates;
-(void)setInSetupModeReadyToExit:(BOOL)arg1 ;
@end


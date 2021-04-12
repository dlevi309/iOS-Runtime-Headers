/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)setupHasFinishedRestoringFromBackup;
-(BOOL)isInSetupModeReadyToExit;
-(void)postLaunchCompleteNotificationForSetup;
-(void)_toggleSetupForMigrationNeeded:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setInSetupModeReadyToExit:(BOOL)arg1 ;
-(BOOL)_isInSetupMode;
-(BOOL)isDeferringDeviceOrientationUpdates;
-(void)_clearFloatingDockAssertion;
-(BOOL)isInSetupMode;
-(void)_setupProcessChangedNotificationReceived:(id)arg1 ;
-(void)setDeferringDeviceOrientationUpdates:(BOOL)arg1 ;
-(BOOL)updateInSetupMode;
-(BOOL)isInSetupModeForDeviceMigration;
-(BOOL)_setSetupRequiredReason:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5 ;
@end


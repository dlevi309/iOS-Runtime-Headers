/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalLockProviding.h>
#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@protocol OS_dispatch_queue;
@class NSObject, CARAutomaticDNDStatus, SBLockScreenManager, NSString;

@interface SBCarDoNotDisturbController : NSObject <CSExternalLockProviding, CSExternalEventHandling, CSExternalBehaviorProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queue_stateValid;
	BOOL _queue_exitConfirmationRequired;
	BOOL _queue_pendingExitConfirmationRequirement;
	BOOL _queue_screenOn;
	BOOL _queue_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
	CARAutomaticDNDStatus* _carAutomaticDNDStatus;
	SBLockScreenManager* _lockScreenManager;

}

@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (nonatomic,readonly) BOOL showPasscode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
-(void)conformsToCSEventHandling;
-(BOOL)isLocked;
-(void)conformsToCSExternalBehaviorProviding;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)_dismissAlertItemsAnimated:(BOOL)arg1 ;
-(long long)notificationBehavior;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)unlockFromSource:(int)arg1 ;
-(void)conformsToCSBehaviorProviding;
-(long long)proximityDetectionMode;
-(void)_queue_setExitConfirmationRequired:(BOOL)arg1 ;
-(void)_queue_setScreenOn:(BOOL)arg1 ;
-(NSString *)coverSheetIdentifier;
-(BOOL)_isExitConfirmationRequired;
-(long long)participantState;
-(BOOL)showPasscode;
-(void)_setScreenOn:(BOOL)arg1 ;
-(void)_setHasShownSiriHeaderViewControllerDuringCurrentCarDNDSession:(BOOL)arg1 ;
-(id)initWithCARAutomaticDNDStatus:(id)arg1 lockScreenManager:(id)arg2 ;
-(long long)scrollingStrategy;
-(BOOL)_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
-(unsigned long long)restrictedCapabilities;
-(void)dealloc;
@end


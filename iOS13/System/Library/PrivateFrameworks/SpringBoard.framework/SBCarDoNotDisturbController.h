/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (nonatomic,readonly) BOOL showPasscode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
-(id)init;
-(void)dealloc;
-(BOOL)isLocked;
-(BOOL)handleEvent:(id)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(BOOL)showPasscode;
-(BOOL)unlockFromSource:(int)arg1 ;
-(id)initWithCARAutomaticDNDStatus:(id)arg1 lockScreenManager:(id)arg2 ;
-(void)_queue_setExitConfirmationRequired:(BOOL)arg1 ;
-(BOOL)_isExitConfirmationRequired;
-(BOOL)_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
-(void)_setHasShownSiriHeaderViewControllerDuringCurrentCarDNDSession:(BOOL)arg1 ;
-(BOOL)_dismissAlertItemsAnimated:(BOOL)arg1 ;
-(void)_setScreenOn:(BOOL)arg1 ;
-(void)_queue_setScreenOn:(BOOL)arg1 ;
@end


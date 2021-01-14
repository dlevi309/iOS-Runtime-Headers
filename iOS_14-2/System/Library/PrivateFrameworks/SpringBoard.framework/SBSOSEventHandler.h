/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SOSManagerClientObserver.h>

@protocol BSInvalidatable;
@class SBFUserAuthenticationController, SBBacklightController, SBLockScreenManager, SOSManager, NSString;

@interface SBSOSEventHandler : NSObject <SOSManagerClientObserver> {

	id _coversheetObserverToken;
	id<BSInvalidatable> _disableSTARAssertion;
	BOOL _running;
	SBFUserAuthenticationController* _override_authenticationController;
	SBBacklightController* _override_backlightController;
	SBLockScreenManager* _override_lockscreenManager;
	SOSManager* _override_sosManager;

}

@property (assign,setter=_setRunning:,getter=_isRunning,nonatomic) BOOL running;                                                         //@synthesize running=_running - In the implementation block
@property (getter=_authenticationController,nonatomic,readonly) SBFUserAuthenticationController * authenticationController;              //@synthesize override_authenticationController=_override_authenticationController - In the implementation block
@property (getter=_backlightController,nonatomic,readonly) SBBacklightController * backlightController;                                  //@synthesize override_backlightController=_override_backlightController - In the implementation block
@property (getter=_sosManager,nonatomic,readonly) SOSManager * sosManager;                                                               //@synthesize override_sosManager=_override_sosManager - In the implementation block
@property (getter=_lockScreenManager,nonatomic,readonly) SBLockScreenManager * lockScreenManager;                                        //@synthesize override_lockscreenManager=_override_lockscreenManager - In the implementation block
@property (getter=isSOSActive,nonatomic,readonly) BOOL SOSActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)_isRunning;
-(void)run;
-(void)_setRunning:(BOOL)arg1 ;
-(id)init;
-(id)_authenticationController;
-(void)didUpdateCurrentSOSInitiationState:(long long)arg1 ;
-(id)_lockScreenManager;
-(id)_backlightController;
-(BOOL)isSOSActive;
-(id)_sosManager;
-(void)_forceBioAuthenticationLockoutIfAvailableWithSource:(int)arg1 showingPasscode:(BOOL)arg2 ;
-(void)dealloc;
-(void)didDismissSOSBeforeSOSCall:(long long)arg1 ;
@end


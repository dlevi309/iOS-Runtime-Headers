/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBRemoteTransientOverlayViewControllerDelegate.h>

@protocol SBRemoteTransientOverlaySessionHostDelegate;
@class BSTransaction, SBRemoteTransientOverlayViewController, NSMutableDictionary, NSHashTable, NSMutableArray, SBSRemoteAlertDefinition, NSError, NSString;

@interface SBRemoteTransientOverlaySession : NSObject <SBRemoteTransientOverlayViewControllerDelegate> {

	BSTransaction* _activeTransaction;
	SBRemoteTransientOverlayViewController* _containerViewController;
	BOOL _hasInitiatedPresentation;
	BOOL _hasPresented;
	NSMutableDictionary* _identifierToHandlingButtonEvents;
	NSHashTable* _observers;
	NSMutableArray* _pendingTransactions;
	BOOL _activated;
	BOOL _prepared;
	BOOL _valid;
	BOOL _pendingInvalidation;
	SBSRemoteAlertDefinition* _definition;
	NSError* _error;
	NSString* _sessionID;
	id<SBRemoteTransientOverlaySessionHostDelegate> _hostDelegate;

}

@property (assign,nonatomic,__weak) id<SBRemoteTransientOverlaySessionHostDelegate> hostDelegate;              //@synthesize hostDelegate=_hostDelegate - In the implementation block
@property (nonatomic,copy,readonly) SBSRemoteAlertDefinition * definition;                                     //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (getter=isActivated,nonatomic,readonly) BOOL activated;                                              //@synthesize activated=_activated - In the implementation block
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared;                                                //@synthesize prepared=_prepared - In the implementation block
@property (getter=isSwitcherEligible,nonatomic,readonly) BOOL switcherEligible; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                      //@synthesize valid=_valid - In the implementation block
@property (getter=isPendingInvalidation,nonatomic,readonly) BOOL pendingInvalidation;                          //@synthesize pendingInvalidation=_pendingInvalidation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)sessionID;
-(void)deactivate;
-(NSError *)error;
-(void)addSessionObserver:(id)arg1 ;
-(BOOL)isPrepared;
-(void)removeSessionObserver:(id)arg1 ;
-(id<SBRemoteTransientOverlaySessionHostDelegate>)hostDelegate;
-(BOOL)isValid;
-(BOOL)isActivated;
-(SBSRemoteAlertDefinition *)definition;
-(void)activateWithContext:(id)arg1 ;
-(void)invalidate;
-(void)_didDeactivate;
-(void)_didActivate;
-(BOOL)isSwitcherEligible;
-(void)dealloc;
-(BOOL)hasPendingButtonEvents:(unsigned long long)arg1 ;
-(BOOL)hasServiceProcessIdentifier:(int)arg1 ;
-(id)_initWithSessionID:(id)arg1 definition:(id)arg2 ;
-(void)setHostDelegate:(id<SBRemoteTransientOverlaySessionHostDelegate>)arg1 ;
-(BOOL)isPendingInvalidation;
-(void)prepareWithConfigurationContext:(id)arg1 ;
-(void)getActionForHandlingButtonEvents:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteTransientOverlayViewController:(id)arg1 didAppearAnimated:(BOOL)arg2 ;
-(void)remoteTransientOverlayViewController:(id)arg1 didDisappearAnimated:(BOOL)arg2 ;
-(void)remoteTransientOverlayViewController:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)arg1 ;
-(void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)arg1 ;
-(void)remoteTransientOverlayViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(id)remoteTransientOverlayViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2 ;
-(BOOL)remoteTransientOverlayViewController:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2 ;
-(id)_actionForHandlingButtonEvents:(unsigned long long)arg1 ;
-(void)_invalidateWithReason:(long long)arg1 error:(id)arg2 ;
-(void)_requestInvalidationWithReason:(long long)arg1 error:(id)arg2 ;
-(void)_addTransaction:(id)arg1 ;
-(void)_registerObserversForTransaction:(id)arg1 ;
-(void)_processPendingTransactions;
-(void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg1 ;
@end


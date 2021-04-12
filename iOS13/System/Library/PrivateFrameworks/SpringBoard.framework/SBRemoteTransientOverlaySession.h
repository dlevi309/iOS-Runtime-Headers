/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(NSError *)error;
-(SBSRemoteAlertDefinition *)definition;
-(NSString *)sessionID;
-(void)deactivate;
-(void)activateWithContext:(id)arg1 ;
-(void)_didActivate;
-(void)_didDeactivate;
-(BOOL)isSwitcherEligible;
-(BOOL)isActivated;
-(BOOL)isPrepared;
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
-(void)addSessionObserver:(id)arg1 ;
-(void)removeSessionObserver:(id)arg1 ;
-(id)_actionForHandlingButtonEvents:(unsigned long long)arg1 ;
-(void)_invalidateWithReason:(long long)arg1 error:(id)arg2 ;
-(void)_requestInvalidationWithReason:(long long)arg1 error:(id)arg2 ;
-(id<SBRemoteTransientOverlaySessionHostDelegate>)hostDelegate;
-(void)_addTransaction:(id)arg1 ;
-(void)_registerObserversForTransaction:(id)arg1 ;
-(void)_processPendingTransactions;
-(void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg1 ;
@end


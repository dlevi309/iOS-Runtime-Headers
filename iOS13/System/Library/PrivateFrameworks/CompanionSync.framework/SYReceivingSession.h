/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_group;
@class NSObject, NSMutableIndexSet;

@interface SYReceivingSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	NSMutableIndexSet* _receivedBatchIndices;
	NSObject*<OS_os_activity> _sessionActivity;
	NSObject*<OS_dispatch_group> _asyncResetGroupToWaitOn;
	/*^block*/id _weakBlockWaitingForReset;
	os_unfair_lock_s _flagsLock;
	struct {
		unsigned state : 4;
		unsigned canRestart : 1;
		unsigned canRollback : 1;
		unsigned isResetSync : 1;
		unsigned started : 1;
		unsigned cancelled : 1;
		unsigned completed : 1;
		unsigned changedMetadata : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL metadataModified; 
-(void)setDelegate:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)wasCancelled;
-(BOOL)_hasStarted;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)_hasCompleted;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(void)_continue;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(id)_newMessageHeader;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(id)initWithService:(id)arg1 isReset:(BOOL)arg2 metadata:(id)arg3 ;
-(BOOL)metadataModified;
-(void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tweakMessageHeader:(id)arg1 ;
-(void)_sessionFinished;
-(void)_sendEndSessionAndError:(id)arg1 ;
-(void)_notifyErrorAndShutdown;
-(void)_setCancelled;
-(void)setSessionMetadata:(id)arg1 ;
-(void)_resolvedIdentifierForRequest:(id)arg1 ;
-(void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2 ;
-(void)_setCompleted;
-(void)_sessionCancelled;
-(void)_sessionRestarted;
-(BOOL)_postAsyncResetRequestReturningError:(id*)arg1 ;
-(void)_setStarted;
-(void)_midStreamErrorHandled;
-(BOOL)_isMissingSyncBatches;
@end


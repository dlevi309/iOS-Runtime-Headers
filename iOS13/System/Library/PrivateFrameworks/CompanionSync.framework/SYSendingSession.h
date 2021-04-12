/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_activity;
@class NSObject, _SYCountedSemaphore, NSMutableIndexSet, NSMutableDictionary, SYMessageStatusRecord, NSMutableArray;

@interface SYSendingSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	NSObject*<OS_dispatch_source> _messageTimer;
	NSObject*<OS_dispatch_queue> _changeFetcherQueue;
	_SYCountedSemaphore* _changeConcurrencySemaphore;
	NSObject*<OS_os_activity> _changeWaitActivity;
	unsigned long long _batchIndex;
	NSMutableIndexSet* _ackedBatchIndices;
	NSObject*<OS_os_activity> _sessionActivity;
	double _sessionStartTime;
	NSMutableDictionary* _batchObjectIDsByBatchIndex;
	SYMessageStatusRecord* _startMessageID;
	SYMessageStatusRecord* _endMessageID;
	NSMutableArray* _batchMessageIDs;
	os_unfair_lock_s _flagsLock;
	struct {
		unsigned state : 4;
		unsigned canRestart : 1;
		unsigned canRollback : 1;
		unsigned isResetSync : 1;
		unsigned started : 1;
		unsigned cancelled : 1;
		unsigned completed : 1;
		unsigned remoteStartSent : 1;
		unsigned remoteStartConfirmed : 1;
		unsigned remoteEndSent : 1;
		unsigned remoteEndConfirmed : 1;
		unsigned localErrorOccurred : 1;
	}  _flags;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)wasCancelled;
-(void)start:(/*^block*/id)arg1 ;
-(void)_fetchNextBatch;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(void)_continue;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2 ;
-(id)_newMessageHeader;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_sendSyncCompleteAndRunBlock:(/*^block*/id)arg1 ;
-(void)_waitForMessageWindow;
-(void)_sendSyncCancelled;
-(void)_sendSyncRestart;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_setupChangeConcurrency;
-(double)remainingSessionTime;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_hasSentEnd;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithService:(id)arg1 isReset:(BOOL)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tweakMessageHeader:(id)arg1 ;
-(void)_setLocalErrorOccurred;
-(BOOL)_localErrorOccurred;
-(void)_sentEnd;
-(void)_sessionFinished;
-(void)_setComplete;
-(void)_sendEndSessionAndError:(id)arg1 ;
-(void)_notifyErrorAndShutdown;
-(void)_sentStart;
-(void)_startFailedForStateChangeWithError:(id)arg1 ;
-(void)_setCancelled;
-(void)_confirmedStart;
-(void)_confirmedEnd;
-(void)_setMessageTimer;
-(void)_resolvedIdentifierForRequest:(id)arg1 ;
-(void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2 ;
@end


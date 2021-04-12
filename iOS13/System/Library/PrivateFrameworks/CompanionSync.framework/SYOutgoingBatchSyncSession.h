/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_activity;
@class NSObject, NSMutableIndexSet, _SYCountedSemaphore, _SYMessageTimerTable;

@interface SYOutgoingBatchSyncSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	unsigned long long _batchIndex;
	NSMutableIndexSet* _ackedBatchIndices;
	NSObject*<OS_dispatch_queue> _changeFetcherQueue;
	_SYCountedSemaphore* _changeConcurrencySemaphore;
	NSObject*<OS_os_activity> _changeWaitActivity;
	NSObject*<OS_os_activity> _sessionActivity;
	long long _state;
	BOOL _errorIsLocal;
	BOOL _hasSentEnd;
	_SYMessageTimerTable* _timers;
	double _sessionStartTime;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _cancelled;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)wasCancelled;
-(unsigned long long)protocolVersion;
-(id)initWithService:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(void)_fetchNextBatch;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2 ;
-(void)_setMessageTimerForSeqno:(unsigned long long)arg1 ;
-(void)_notifySessionComplete;
-(void)_sendSyncStart;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_sendSyncCompleteAndRunBlock:(/*^block*/id)arg1 ;
-(void)_waitForMessageWindow;
-(void)_sendSyncCancelled;
-(void)_sendSyncRestart;
-(void)_sessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_setupChangeConcurrency;
-(double)remainingSessionTime;
-(BOOL)_handleBatchAck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
@end


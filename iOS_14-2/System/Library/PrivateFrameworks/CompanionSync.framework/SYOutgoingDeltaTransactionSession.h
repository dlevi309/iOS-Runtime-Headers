/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_queue;
@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;

@interface SYOutgoingDeltaTransactionSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_os_activity> _sessionActivity;
	unsigned _state;
	NSObject*<OS_dispatch_queue> _changeFetcherQueue;
	_SYCountedSemaphore* _changeConcurrencySemaphore;
	NSObject*<OS_os_activity> _changeWaitActivity;
	_SYMessageTimerTable* _timers;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _cancelled;

}
-(void)start:(/*^block*/id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(unsigned long long)protocolVersion;
-(id)initWithService:(id)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(BOOL)wasCancelled;
-(unsigned)state;
-(BOOL)isSending;
-(void)_fetchNextBatch;
-(BOOL)isResetSync;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(unsigned)arg2 ;
-(void)_setMessageTimerForSeqno:(unsigned long long)arg1 ;
-(void)_notifySessionComplete;
-(void)_setStateQuietly:(unsigned)arg1 ;
-(void)_waitForMessageWindow;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_setupChangeConcurrency;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
@end


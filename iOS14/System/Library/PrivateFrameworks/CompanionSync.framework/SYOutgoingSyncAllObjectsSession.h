/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface SYOutgoingSyncAllObjectsSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	unsigned _state;
	BOOL _errorIsLocal;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	double _sessionStartTime;
	NSMutableArray* _changesToSend;
	BOOL _cancelled;
	BOOL canRestart;
	BOOL canRollback;

}
-(void)start:(/*^block*/id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(unsigned long long)protocolVersion;
-(id)initWithService:(id)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(BOOL)wasCancelled;
-(unsigned)state;
-(BOOL)isSending;
-(BOOL)isResetSync;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_setStateQuietly:(unsigned)arg1 ;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(double)remainingSessionTime;
-(BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)_sendChanges;
-(void)_sessionCompleteWithError:(id)arg1 ;
-(void)_fetchChanges;
-(void)_sessionFailed;
@end

